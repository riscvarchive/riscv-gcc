/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxei32_v_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei32_v_f16m1_ta_vl32 (float16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f16m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei32_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei32_v_f32m2_ta_vl32 (float32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f32m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei32_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei32_v_f64m4_ta_vl32 (float64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f64m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei32_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei32_v_f16m2_ta_vl32 (float16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f16m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei32_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei32_v_f32m4_ta_vl32 (float32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f32m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei32_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei32_v_f64m8_ta_vl32 (float64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f64m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei32_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei32_v_f16m4_ta_vl32 (float16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f16m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei32_v_f16m4_tu_vl32 (vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei32_v_f32m8_ta_vl32 (float32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f32m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei32_v_f32m8_tu_vl32 (vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei64_v_f16mf4_ta_vl32 (float16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei64_v_f16mf4_tu_vl32 (vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei64_v_f32mf2_ta_vl32 (float32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei64_v_f32mf2_tu_vl32 (vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei64_v_f64m1_ta_vl32 (float64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f64m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei64_v_f64m1_tu_vl32 (vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei64_v_f16mf2_ta_vl32 (float16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei64_v_f16mf2_tu_vl32 (vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei64_v_f32m1_ta_vl32 (float32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f32m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei64_v_f32m1_tu_vl32 (vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei64_v_f64m2_ta_vl32 (float64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f64m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei64_v_f64m2_tu_vl32 (vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei64_v_f16m1_ta_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f16m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei64_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei64_v_f32m2_ta_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f32m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei64_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei64_v_f64m4_ta_vl32 (float64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f64m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei64_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei64_v_f16m2_ta_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f16m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei64_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei64_v_f32m4_ta_vl32 (float32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f32m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei64_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei64_v_f64m8_ta_vl32 (float64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f64m8_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei64_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei8_v_i8mf8_ta_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei8_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei8_v_i16mf4_ta_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei8_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei8_v_i32mf2_ta_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei8_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei8_v_i64m1_ta_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i64m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei8_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei8_v_i8mf4_ta_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei8_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei8_v_i16mf2_ta_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei8_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei8_v_i32m1_ta_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i32m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei8_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei8_v_i64m2_ta_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i64m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei8_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei8_v_i8mf2_ta_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei8_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei8_v_i16m1_ta_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i16m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei8_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei8_v_i32m2_ta_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i32m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei8_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei8_v_i64m4_ta_vl32 (int64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i64m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei8_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t
test_vluxei8_v_i8m1_ta_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i8m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t
test_vluxei8_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t
test_vluxei8_v_i16m2_ta_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i16m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t
test_vluxei8_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t
test_vluxei8_v_i32m4_ta_vl32 (int32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i32m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t
test_vluxei8_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t
test_vluxei8_v_i64m8_ta_vl32 (int64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i64m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t
test_vluxei8_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t
test_vluxei8_v_i8m2_ta_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i8m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t
test_vluxei8_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4_t
test_vluxei8_v_i16m4_ta_vl32 (int16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i16m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4_t
test_vluxei8_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m8_t
test_vluxei8_v_i32m8_ta_vl32 (int32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i32m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m8_t
test_vluxei8_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t
test_vluxei8_v_i8m4_ta_vl32 (int8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i8m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t
test_vluxei8_v_i8m4_tu_vl32 (vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i8m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m8_t
test_vluxei8_v_i16m8_ta_vl32 (int16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i16m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m8_t
test_vluxei8_v_i16m8_tu_vl32 (vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i16m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t
test_vluxei8_v_i8m8_ta_vl32 (int8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_i8m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t
test_vluxei8_v_i8m8_tu_vl32 (vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_i8m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei16_v_i8mf8_ta_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei16_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei16_v_i16mf4_ta_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei16_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei16_v_i32mf2_ta_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei16_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei16_v_i64m1_ta_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i64m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei16_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei16_v_i8mf4_ta_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei16_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei16_v_i16mf2_ta_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei16_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei16_v_i32m1_ta_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i32m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei16_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei16_v_i64m2_ta_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i64m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei16_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei16_v_i8mf2_ta_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei16_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei16_v_i16m1_ta_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i16m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei16_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei16_v_i32m2_ta_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i32m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei16_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei16_v_i64m4_ta_vl32 (int64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i64m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei16_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1_t
test_vluxei16_v_i8m1_ta_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i8m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1_t
test_vluxei16_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t
test_vluxei16_v_i16m2_ta_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i16m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t
test_vluxei16_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4_t
test_vluxei16_v_i32m4_ta_vl32 (int32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i32m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4_t
test_vluxei16_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m8_t
test_vluxei16_v_i64m8_ta_vl32 (int64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i64m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m8_t
test_vluxei16_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2_t
test_vluxei16_v_i8m2_ta_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i8m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2_t
test_vluxei16_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t
test_vluxei16_v_i16m4_ta_vl32 (int16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i16m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t
test_vluxei16_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m8_t
test_vluxei16_v_i32m8_ta_vl32 (int32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i32m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m8_t
test_vluxei16_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4_t
test_vluxei16_v_i8m4_ta_vl32 (int8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i8m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4_t
test_vluxei16_v_i8m4_tu_vl32 (vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i8m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t
test_vluxei16_v_i16m8_ta_vl32 (int16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i16m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t
test_vluxei16_v_i16m8_tu_vl32 (vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i16m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei32_v_i8mf8_ta_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei32_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei32_v_i16mf4_ta_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei32_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei32_v_i32mf2_ta_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei32_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei32_v_i64m1_ta_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i64m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei32_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei32_v_i8mf4_ta_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei32_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei32_v_i16mf2_ta_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei32_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei32_v_i32m1_ta_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i32m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei32_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei32_v_i64m2_ta_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i64m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei32_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2_t
test_vluxei32_v_i8mf2_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2_t
test_vluxei32_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1_t
test_vluxei32_v_i16m1_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i16m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1_t
test_vluxei32_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t
test_vluxei32_v_i32m2_ta_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i32m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t
test_vluxei32_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4_t
test_vluxei32_v_i64m4_ta_vl32 (int64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i64m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4_t
test_vluxei32_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1_t
test_vluxei32_v_i8m1_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i8m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1_t
test_vluxei32_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2_t
test_vluxei32_v_i16m2_ta_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i16m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2_t
test_vluxei32_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t
test_vluxei32_v_i32m4_ta_vl32 (int32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i32m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t
test_vluxei32_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m8_t
test_vluxei32_v_i64m8_ta_vl32 (int64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i64m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m8_t
test_vluxei32_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2_t
test_vluxei32_v_i8m2_ta_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i8m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2_t
test_vluxei32_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4_t
test_vluxei32_v_i16m4_ta_vl32 (int16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i16m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4_t
test_vluxei32_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t
test_vluxei32_v_i32m8_ta_vl32 (int32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i32m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t
test_vluxei32_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei64_v_i8mf8_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei64_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei64_v_i16mf4_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei64_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei64_v_i32mf2_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei64_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei64_v_i64m1_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i64m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei64_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4_t
test_vluxei64_v_i8mf4_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4_t
test_vluxei64_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2_t
test_vluxei64_v_i16mf2_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2_t
test_vluxei64_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1_t
test_vluxei64_v_i32m1_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i32m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1_t
test_vluxei64_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t
test_vluxei64_v_i64m2_ta_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i64m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t
test_vluxei64_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei64_v_i8mf2_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei64_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1_t
test_vluxei64_v_i16m1_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i16m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1_t
test_vluxei64_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2_t
test_vluxei64_v_i32m2_ta_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i32m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2_t
test_vluxei64_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t
test_vluxei64_v_i64m4_ta_vl32 (int64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i64m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t
test_vluxei64_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1_t
test_vluxei64_v_i8m1_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i8m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1_t
test_vluxei64_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2_t
test_vluxei64_v_i16m2_ta_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i16m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2_t
test_vluxei64_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4_t
test_vluxei64_v_i32m4_ta_vl32 (int32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i32m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4_t
test_vluxei64_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t
test_vluxei64_v_i64m8_ta_vl32 (int64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i64m8_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t
test_vluxei64_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_tu_vl32 (vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_tu_vl32 (vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_tu_vl32 (vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_tu_vl32 (vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_tu_vl32 (vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_tu_vl32 (vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_tu_vl32 (vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_tu_vl32 (vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_tu_vl32 (vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_tu_vl32 (vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_tu_vl32 (vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_ta_vl32 (uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_tu_vl32 (vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_tu_vl32 (vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_tu_vl32 (vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_ta_vl32 (uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_tu_vl32 (vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_ta_vl32 (uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_tu_vl32 (vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_tu_vl32 (vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_ta_vl32 (uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_tu_vl32 (vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_ta_vl32 (uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_tu_vl32 (vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_ta_vl32 (uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_tu_vl32 (vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_ta_vl32 (uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_tu_vl32 (vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_ta_vl32 (uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8_ta (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_tu_vl32 (vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_tu_vl32 (vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_tu_vl32 (vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_tu_vl32 (vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_tu_vl32 (vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_tu_vl32 (vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_tu_vl32 (vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_tu_vl32 (vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_tu_vl32 (vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_tu_vl32 (vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_tu_vl32 (vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_tu_vl32 (vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_ta_vl32 (uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_tu_vl32 (vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_tu_vl32 (vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_tu_vl32 (vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_ta_vl32 (uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_tu_vl32 (vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_ta_vl32 (uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_tu_vl32 (vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_tu_vl32 (vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_ta_vl32 (uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_tu_vl32 (vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_ta_vl32 (uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_tu_vl32 (vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_ta_vl32 (uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_tu_vl32 (vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_ta_vl32 (uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8_ta (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_tu_vl32 (vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_tu_vl32 (vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_tu_vl32 (vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_tu_vl32 (vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_tu_vl32 (vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_tu_vl32 (vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_tu_vl32 (vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_tu_vl32 (vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_tu_vl32 (vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_tu_vl32 (vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_tu_vl32 (vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_tu_vl32 (vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_ta_vl32 (uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_tu_vl32 (vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_tu_vl32 (vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_tu_vl32 (vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_ta_vl32 (uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_tu_vl32 (vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_ta_vl32 (uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_tu_vl32 (vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_tu_vl32 (vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_ta_vl32 (uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_tu_vl32 (vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_ta_vl32 (uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8_ta (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_tu_vl32 (vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_tu_vl32 (vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_tu_vl32 (vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_tu_vl32 (vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_tu_vl32 (vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_tu_vl32 (vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_tu_vl32 (vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_tu_vl32 (vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_tu_vl32 (vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_tu_vl32 (vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_tu_vl32 (vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_tu_vl32 (vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_ta_vl32 (uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_tu_vl32 (vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_tu_vl32 (vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_tu_vl32 (vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_ta_vl32 (uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_tu_vl32 (vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4_tu (dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_ta_vl32 (uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8_ta (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_tu_vl32 (vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8_tu (dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u8mf8 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_m_vl31 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u16mf4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_m_vl31 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u32mf2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_m_vl31 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u64m1 (base, bindex, vl);
}

/*
** test_vluxei8_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1 (base, bindex, 31);
}

/*
** test_vluxei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxei8_v_u64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_m_vl31 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u8mf4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_m_vl31 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u16mf2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_m_vl31 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u32m1 (base, bindex, vl);
}

/*
** test_vluxei8_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1 (base, bindex, 31);
}

/*
** test_vluxei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_m_vl31 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u64m2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxei8_v_u64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_m_vl31 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u8mf2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_m_vl31 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u16m1 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_m_vl31 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u32m2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_m_vl31 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4 (uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u64m4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_vl31 (uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxei8_v_u64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_m_vl31 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u8m1 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_m_vl31 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u16m2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_m_vl31 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4 (uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u32m4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_vl31 (uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_m_vl31 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8 (uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u64m8 (base, bindex, vl);
}

/*
** test_vluxei8_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_vl31 (uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8 (base, bindex, 31);
}

/*
** test_vluxei8_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxei8_v_u64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_m_vl31 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u8m2 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_m (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_m_vl31 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4 (uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u16m4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_vl31 (uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_m (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_m_vl31 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8 (uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u32m8 (base, bindex, vl);
}

/*
** test_vluxei8_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_vl31 (uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8 (base, bindex, 31);
}

/*
** test_vluxei8_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_m (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxei8_v_u32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_m_vl31 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4 (uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxei8_v_u8m4 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_vl31 (uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_m (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxei8_v_u8m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_m_vl31 (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8 (uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxei8_v_u16m8 (base, bindex, vl);
}

/*
** test_vluxei8_v_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_vl31 (uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8 (base, bindex, 31);
}

/*
** test_vluxei8_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_m (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxei8_v_u16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_m_vl31 (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8 (uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vluxei8_v_u8m8 (base, bindex, vl);
}

/*
** test_vluxei8_v_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_vl31 (uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8 (base, bindex, 31);
}

/*
** test_vluxei8_v_u8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_m (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vluxei8_v_u8m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei8_v_u8m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_m_vl31 (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u8mf8 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_m_vl31 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u16mf4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_m_vl31 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u32mf2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_m_vl31 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u64m1 (base, bindex, vl);
}

/*
** test_vluxei16_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1 (base, bindex, 31);
}

/*
** test_vluxei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxei16_v_u64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_m_vl31 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u8mf4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_m_vl31 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u16mf2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_m_vl31 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u32m1 (base, bindex, vl);
}

/*
** test_vluxei16_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1 (base, bindex, 31);
}

/*
** test_vluxei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_m_vl31 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2 (uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u64m2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_vl31 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxei16_v_u64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_m_vl31 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u8mf2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_m_vl31 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u16m1 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_m_vl31 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2 (uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u32m2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_vl31 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_m_vl31 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4 (uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u64m4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_vl31 (uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxei16_v_u64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_m_vl31 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u8m1 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_m_vl31 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2 (uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u16m2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_vl31 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_m_vl31 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4 (uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u32m4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_vl31 (uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_m_vl31 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8 (uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u64m8 (base, bindex, vl);
}

/*
** test_vluxei16_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_vl31 (uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8 (base, bindex, 31);
}

/*
** test_vluxei16_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxei16_v_u64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_m_vl31 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2 (uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u8m2 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_vl31 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_m (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_m_vl31 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4 (uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u16m4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_vl31 (uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_m (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_m_vl31 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8 (uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u32m8 (base, bindex, vl);
}

/*
** test_vluxei16_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_vl31 (uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8 (base, bindex, 31);
}

/*
** test_vluxei16_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_m (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxei16_v_u32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_m_vl31 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4 (uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vluxei16_v_u8m4 (base, bindex, vl);
}

/*
** test_vluxei16_v_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_vl31 (uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4 (base, bindex, 31);
}

/*
** test_vluxei16_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_m (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vluxei16_v_u8m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_m_vl31 (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei16_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8 (uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vluxei16_v_u16m8 (base, bindex, vl);
}

/*
** test_vluxei16_v_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_vl31 (uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8 (base, bindex, 31);
}

/*
** test_vluxei16_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_m (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vluxei16_v_u16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei16_v_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_m_vl31 (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u8mf8 (base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8 (base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_m_vl31 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u16mf4 (base, bindex, vl);
}

/*
** test_vluxei32_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4 (base, bindex, 31);
}

/*
** test_vluxei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_m_vl31 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u32mf2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_m_vl31 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u64m1 (base, bindex, vl);
}

/*
** test_vluxei32_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1 (base, bindex, 31);
}

/*
** test_vluxei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxei32_v_u64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_m_vl31 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u8mf4 (base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4 (base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_m_vl31 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u16mf2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_m_vl31 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u32m1 (base, bindex, vl);
}

/*
** test_vluxei32_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1 (base, bindex, 31);
}

/*
** test_vluxei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_m_vl31 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2 (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u64m2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_vl31 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxei32_v_u64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_m_vl31 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u8mf2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_m_vl31 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u16m1 (base, bindex, vl);
}

/*
** test_vluxei32_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1 (base, bindex, 31);
}

/*
** test_vluxei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_m_vl31 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2 (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u32m2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_vl31 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_m_vl31 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4 (uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u64m4 (base, bindex, vl);
}

/*
** test_vluxei32_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_vl31 (uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4 (base, bindex, 31);
}

/*
** test_vluxei32_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxei32_v_u64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_m_vl31 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u8m1 (base, bindex, vl);
}

/*
** test_vluxei32_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1 (base, bindex, 31);
}

/*
** test_vluxei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_m_vl31 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2 (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u16m2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_vl31 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_m_vl31 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4 (uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u32m4 (base, bindex, vl);
}

/*
** test_vluxei32_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_vl31 (uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4 (base, bindex, 31);
}

/*
** test_vluxei32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_m_vl31 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8 (uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u64m8 (base, bindex, vl);
}

/*
** test_vluxei32_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_vl31 (uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8 (base, bindex, 31);
}

/*
** test_vluxei32_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxei32_v_u64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_m_vl31 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2 (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u8m2 (base, bindex, vl);
}

/*
** test_vluxei32_v_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_vl31 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2 (base, bindex, 31);
}

/*
** test_vluxei32_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_m (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_m_vl31 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4 (uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u16m4 (base, bindex, vl);
}

/*
** test_vluxei32_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_vl31 (uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4 (base, bindex, 31);
}

/*
** test_vluxei32_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_m (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_m_vl31 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei32_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8 (uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u32m8 (base, bindex, vl);
}

/*
** test_vluxei32_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_vl31 (uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8 (base, bindex, 31);
}

/*
** test_vluxei32_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_m (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxei32_v_u32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei32_v_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_m_vl31 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u8mf8 (base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8 (base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_m_vl31 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u16mf4 (base, bindex, vl);
}

/*
** test_vluxei64_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4 (base, bindex, 31);
}

/*
** test_vluxei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_m_vl31 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u32mf2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_m_vl31 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u64m1 (base, bindex, vl);
}

/*
** test_vluxei64_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1 (base, bindex, 31);
}

/*
** test_vluxei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxei64_v_u64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_m_vl31 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u8mf4 (base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4 (base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_m_vl31 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u16mf2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_m_vl31 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u32m1 (base, bindex, vl);
}

/*
** test_vluxei64_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1 (base, bindex, 31);
}

/*
** test_vluxei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_m_vl31 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2 (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u64m2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_vl31 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxei64_v_u64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_m_vl31 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u8mf2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_m_vl31 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u16m1 (base, bindex, vl);
}

/*
** test_vluxei64_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1 (base, bindex, 31);
}

/*
** test_vluxei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_m_vl31 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2 (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u32m2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_vl31 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_m_vl31 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4 (uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u64m4 (base, bindex, vl);
}

/*
** test_vluxei64_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_vl31 (uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4 (base, bindex, 31);
}

/*
** test_vluxei64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxei64_v_u64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_m_vl31 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u8m1 (base, bindex, vl);
}

/*
** test_vluxei64_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1 (base, bindex, 31);
}

/*
** test_vluxei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_m_vl31 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2 (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u16m2 (base, bindex, vl);
}

/*
** test_vluxei64_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_vl31 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2 (base, bindex, 31);
}

/*
** test_vluxei64_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_m_vl31 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4 (uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u32m4 (base, bindex, vl);
}

/*
** test_vluxei64_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_vl31 (uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4 (base, bindex, 31);
}

/*
** test_vluxei64_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_m_vl31 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei64_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8 (uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u64m8 (base, bindex, vl);
}

/*
** test_vluxei64_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_vl31 (uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8 (base, bindex, 31);
}

/*
** test_vluxei64_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxei64_v_u64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vluxei64_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_m_vl31 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vluxei8_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei8_v_f16mf4_vl32 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f16mf4 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei8_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei8_v_f32mf2_vl32 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f32mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei8_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei8_v_f64m1_vl32 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f64m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei8_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_f64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei8_v_f16mf2_vl32 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f16mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei8_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei8_v_f32m1_vl32 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f32m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei8_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei8_v_f64m2_vl32 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f64m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei8_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_f64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei8_v_f16m1_vl32 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f16m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei8_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei8_v_f32m2_vl32 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f32m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei8_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei8_v_f64m4_vl32 (float64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f64m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei8_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_f64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei8_v_f16m2_vl32 (float16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f16m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei8_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei8_v_f32m4_vl32 (float32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f32m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei8_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei8_v_f64m8_vl32 (float64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f64m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei8_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_f64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei8_v_f16m4_vl32 (float16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_f16m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei8_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_f16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei8_v_f32m8_vl32 (float32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_f32m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei8_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_f32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m8_t
test_vluxei8_v_f16m8_vl32 (float16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_f16m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_f16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vluxei8_v_f16m8_m_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_f16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei16_v_f16mf4_vl32 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f16mf4 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei16_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei16_v_f32mf2_vl32 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f32mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei16_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei16_v_f64m1_vl32 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f64m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei16_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_f64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei16_v_f16mf2_vl32 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f16mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei16_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei16_v_f32m1_vl32 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f32m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei16_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei16_v_f64m2_vl32 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f64m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei16_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_f64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei16_v_f16m1_vl32 (float16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f16m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei16_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei16_v_f32m2_vl32 (float32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f32m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei16_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei16_v_f64m4_vl32 (float64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f64m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei16_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_f64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei16_v_f16m2_vl32 (float16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f16m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei16_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei16_v_f32m4_vl32 (float32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f32m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei16_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei16_v_f64m8_vl32 (float64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f64m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei16_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_f64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei16_v_f16m4_vl32 (float16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_f16m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei16_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_f16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei16_v_f32m8_vl32 (float32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_f32m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei16_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_f32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t
test_vluxei16_v_f16m8_vl32 (float16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_f16m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_f16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vluxei16_v_f16m8_m_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_f16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei32_v_f16mf4_vl32 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f16mf4 (base, bindex, 32);
}

/*
** test_vluxei32_v_f16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei32_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei32_v_f32mf2_vl32 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f32mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei32_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei32_v_f64m1_vl32 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f64m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei32_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_f64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei32_v_f16mf2_vl32 (float16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f16mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_f16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei32_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei32_v_f32m1_vl32 (float32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f32m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei32_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei32_v_f64m2_vl32 (float64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f64m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei32_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_f64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei32_v_f16m1_vl32 (float16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f16m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei32_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei32_v_f32m2_vl32 (float32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f32m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei32_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei32_v_f64m4_vl32 (float64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f64m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei32_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_f64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei32_v_f16m2_vl32 (float16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f16m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei32_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei32_v_f32m4_vl32 (float32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f32m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei32_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei32_v_f64m8_vl32 (float64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f64m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei32_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_f64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei32_v_f16m4_vl32 (float16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f16m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_f16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vluxei32_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei32_v_f32m8_vl32 (float32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f32m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vluxei32_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_f32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei64_v_f16mf4_vl32 (float16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f16mf4 (base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vluxei64_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei64_v_f32mf2_vl32 (float32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f32mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vluxei64_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei64_v_f64m1_vl32 (float64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f64m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vluxei64_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_f64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei64_v_f16mf2_vl32 (float16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f16mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_f16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vluxei64_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei64_v_f32m1_vl32 (float32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f32m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vluxei64_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei64_v_f64m2_vl32 (float64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f64m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vluxei64_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_f64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei64_v_f16m1_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f16m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vluxei64_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei64_v_f32m2_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f32m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vluxei64_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei64_v_f64m4_vl32 (float64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f64m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vluxei64_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_f64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei64_v_f16m2_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f16m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_f16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vluxei64_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei64_v_f32m4_vl32 (float32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f32m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vluxei64_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei64_v_f64m8_vl32 (float64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f64m8 (base, bindex, 32);
}

/*
** test_vluxei64_v_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vluxei64_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_f64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei8_v_i8mf8_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i8mf8 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vluxei8_v_i8mf8_m_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei8_v_i16mf4_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i16mf4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vluxei8_v_i16mf4_m_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei8_v_i32mf2_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i32mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vluxei8_v_i32mf2_m_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei8_v_i64m1_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i64m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vluxei8_v_i64m1_m_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_i64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei8_v_i8mf4_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i8mf4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vluxei8_v_i8mf4_m_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei8_v_i16mf2_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i16mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vluxei8_v_i16mf2_m_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei8_v_i32m1_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i32m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vluxei8_v_i32m1_m_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei8_v_i64m2_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i64m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vluxei8_v_i64m2_m_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_i64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei8_v_i8mf2_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i8mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vluxei8_v_i8mf2_m_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei8_v_i16m1_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i16m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vluxei8_v_i16m1_m_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei8_v_i32m2_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i32m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vluxei8_v_i32m2_m_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei8_v_i64m4_vl32 (int64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i64m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vluxei8_v_i64m4_m_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_i64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t
test_vluxei8_v_i8m1_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i8m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vluxei8_v_i8m1_m_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t
test_vluxei8_v_i16m2_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i16m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vluxei8_v_i16m2_m_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t
test_vluxei8_v_i32m4_vl32 (int32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i32m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vluxei8_v_i32m4_m_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t
test_vluxei8_v_i64m8_vl32 (int64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i64m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vluxei8_v_i64m8_m_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_i64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t
test_vluxei8_v_i8m2_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i8m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vluxei8_v_i8m2_m_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4_t
test_vluxei8_v_i16m4_vl32 (int16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i16m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vluxei8_v_i16m4_m_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m8_t
test_vluxei8_v_i32m8_vl32 (int32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i32m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_i32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vluxei8_v_i32m8_m_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_i32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t
test_vluxei8_v_i8m4_vl32 (int8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i8m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vluxei8_v_i8m4_m_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i8m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m8_t
test_vluxei8_v_i16m8_vl32 (int16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i16m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_i16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vluxei8_v_i16m8_m_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_i16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t
test_vluxei8_v_i8m8_vl32 (int8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_i8m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_i8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vluxei8_v_i8m8_m_vl32 (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_i8m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei16_v_i8mf8_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i8mf8 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vluxei16_v_i8mf8_m_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei16_v_i16mf4_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i16mf4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vluxei16_v_i16mf4_m_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei16_v_i32mf2_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i32mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vluxei16_v_i32mf2_m_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei16_v_i64m1_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i64m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vluxei16_v_i64m1_m_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_i64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei16_v_i8mf4_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i8mf4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vluxei16_v_i8mf4_m_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei16_v_i16mf2_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i16mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vluxei16_v_i16mf2_m_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei16_v_i32m1_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i32m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vluxei16_v_i32m1_m_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei16_v_i64m2_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i64m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vluxei16_v_i64m2_m_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_i64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei16_v_i8mf2_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i8mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vluxei16_v_i8mf2_m_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vluxei16_v_i16m1_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i16m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vluxei16_v_i16m1_m_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vluxei16_v_i32m2_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i32m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vluxei16_v_i32m2_m_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vluxei16_v_i64m4_vl32 (int64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i64m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vluxei16_v_i64m4_m_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_i64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1_t
test_vluxei16_v_i8m1_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i8m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vluxei16_v_i8m1_m_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t
test_vluxei16_v_i16m2_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i16m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vluxei16_v_i16m2_m_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4_t
test_vluxei16_v_i32m4_vl32 (int32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i32m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vluxei16_v_i32m4_m_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m8_t
test_vluxei16_v_i64m8_vl32 (int64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i64m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vluxei16_v_i64m8_m_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_i64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2_t
test_vluxei16_v_i8m2_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i8m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vluxei16_v_i8m2_m_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t
test_vluxei16_v_i16m4_vl32 (int16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i16m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vluxei16_v_i16m4_m_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m8_t
test_vluxei16_v_i32m8_vl32 (int32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i32m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_i32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vluxei16_v_i32m8_m_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_i32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4_t
test_vluxei16_v_i8m4_vl32 (int8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i8m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vluxei16_v_i8m4_m_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i8m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t
test_vluxei16_v_i16m8_vl32 (int16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i16m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_i16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vluxei16_v_i16m8_m_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_i16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei32_v_i8mf8_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i8mf8 (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vluxei32_v_i8mf8_m_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei32_v_i16mf4_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i16mf4 (base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vluxei32_v_i16mf4_m_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei32_v_i32mf2_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i32mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vluxei32_v_i32mf2_m_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei32_v_i64m1_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i64m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vluxei32_v_i64m1_m_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_i64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vluxei32_v_i8mf4_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i8mf4 (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vluxei32_v_i8mf4_m_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vluxei32_v_i16mf2_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i16mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vluxei32_v_i16mf2_m_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vluxei32_v_i32m1_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i32m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vluxei32_v_i32m1_m_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vluxei32_v_i64m2_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i64m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vluxei32_v_i64m2_m_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_i64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2_t
test_vluxei32_v_i8mf2_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i8mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vluxei32_v_i8mf2_m_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1_t
test_vluxei32_v_i16m1_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i16m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vluxei32_v_i16m1_m_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t
test_vluxei32_v_i32m2_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i32m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vluxei32_v_i32m2_m_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4_t
test_vluxei32_v_i64m4_vl32 (int64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i64m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vluxei32_v_i64m4_m_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_i64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1_t
test_vluxei32_v_i8m1_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i8m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vluxei32_v_i8m1_m_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2_t
test_vluxei32_v_i16m2_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i16m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vluxei32_v_i16m2_m_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t
test_vluxei32_v_i32m4_vl32 (int32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i32m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vluxei32_v_i32m4_m_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m8_t
test_vluxei32_v_i64m8_vl32 (int64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i64m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vluxei32_v_i64m8_m_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_i64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2_t
test_vluxei32_v_i8m2_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i8m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vluxei32_v_i8m2_m_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4_t
test_vluxei32_v_i16m4_vl32 (int16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i16m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vluxei32_v_i16m4_m_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t
test_vluxei32_v_i32m8_vl32 (int32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i32m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_i32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vluxei32_v_i32m8_m_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_i32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vluxei64_v_i8mf8_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i8mf8 (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vluxei64_v_i8mf8_m_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vluxei64_v_i16mf4_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i16mf4 (base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vluxei64_v_i16mf4_m_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vluxei64_v_i32mf2_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i32mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vluxei64_v_i32mf2_m_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vluxei64_v_i64m1_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i64m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vluxei64_v_i64m1_m_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_i64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4_t
test_vluxei64_v_i8mf4_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i8mf4 (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vluxei64_v_i8mf4_m_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2_t
test_vluxei64_v_i16mf2_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i16mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vluxei64_v_i16mf2_m_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1_t
test_vluxei64_v_i32m1_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i32m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vluxei64_v_i32m1_m_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t
test_vluxei64_v_i64m2_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i64m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vluxei64_v_i64m2_m_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_i64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2_t
test_vluxei64_v_i8mf2_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i8mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vluxei64_v_i8mf2_m_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1_t
test_vluxei64_v_i16m1_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i16m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vluxei64_v_i16m1_m_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2_t
test_vluxei64_v_i32m2_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i32m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vluxei64_v_i32m2_m_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t
test_vluxei64_v_i64m4_vl32 (int64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i64m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vluxei64_v_i64m4_m_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_i64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1_t
test_vluxei64_v_i8m1_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i8m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vluxei64_v_i8m1_m_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2_t
test_vluxei64_v_i16m2_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i16m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vluxei64_v_i16m2_m_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4_t
test_vluxei64_v_i32m4_vl32 (int32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i32m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vluxei64_v_i32m4_m_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t
test_vluxei64_v_i64m8_vl32 (int64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i64m8 (base, bindex, 32);
}

/*
** test_vluxei64_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vluxei64_v_i64m8_m_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_i64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei8_v_u8mf8_m_vl32 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei8_v_u16mf4_m_vl32 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei8_v_u32mf2_m_vl32 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei8_v_u64m1_m_vl32 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxei8_v_u64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei8_v_u8mf4_m_vl32 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei8_v_u16mf2_m_vl32 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei8_v_u32m1_m_vl32 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei8_v_u64m2_m_vl32 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxei8_v_u64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei8_v_u8mf2_m_vl32 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei8_v_u16m1_m_vl32 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei8_v_u32m2_m_vl32 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_vl32 (uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei8_v_u64m4_m_vl32 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vluxei8_v_u64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei8_v_u8m1_m_vl32 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei8_v_u16m2_m_vl32 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_vl32 (uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei8_v_u32m4_m_vl32 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_vl32 (uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei8_v_u64m8_m_vl32 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex)
{
  return vluxei8_v_u64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei8_v_u8m2_m_vl32 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_vl32 (uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei8_v_u16m4_m_vl32 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_vl32 (uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei8_v_u32m8_m_vl32 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex)
{
  return vluxei8_v_u32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_vl32 (uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei8_v_u8m4_m_vl32 (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u8m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_vl32 (uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei8_v_u16m8_m_vl32 (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex)
{
  return vluxei8_v_u16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei8_v_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_vl32 (uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8 (base, bindex, 32);
}

/*
** test_vluxei8_v_u8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m8_t
test_vluxei8_v_u8m8_m_vl32 (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex)
{
  return vluxei8_v_u8m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei16_v_u8mf8_m_vl32 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei16_v_u16mf4_m_vl32 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei16_v_u32mf2_m_vl32 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei16_v_u64m1_m_vl32 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxei16_v_u64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei16_v_u8mf4_m_vl32 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei16_v_u16mf2_m_vl32 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei16_v_u32m1_m_vl32 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei16_v_u64m2_m_vl32 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxei16_v_u64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei16_v_u8mf2_m_vl32 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei16_v_u16m1_m_vl32 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei16_v_u32m2_m_vl32 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_vl32 (uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei16_v_u64m4_m_vl32 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxei16_v_u64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei16_v_u8m1_m_vl32 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei16_v_u16m2_m_vl32 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_vl32 (uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei16_v_u32m4_m_vl32 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_vl32 (uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei16_v_u64m8_m_vl32 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex)
{
  return vluxei16_v_u64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei16_v_u8m2_m_vl32 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_vl32 (uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei16_v_u16m4_m_vl32 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_vl32 (uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei16_v_u32m8_m_vl32 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex)
{
  return vluxei16_v_u32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_vl32 (uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4 (base, bindex, 32);
}

/*
** test_vluxei16_v_u8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vluxei16_v_u8m4_m_vl32 (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u8m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei16_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_vl32 (uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8 (base, bindex, 32);
}

/*
** test_vluxei16_v_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vluxei16_v_u16m8_m_vl32 (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex)
{
  return vluxei16_v_u16m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8 (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei32_v_u8mf8_m_vl32 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4 (base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei32_v_u16mf4_m_vl32 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei32_v_u32mf2_m_vl32 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei32_v_u64m1_m_vl32 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxei32_v_u64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4 (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei32_v_u8mf4_m_vl32 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei32_v_u16mf2_m_vl32 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei32_v_u32m1_m_vl32 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei32_v_u64m2_m_vl32 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxei32_v_u64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei32_v_u8mf2_m_vl32 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei32_v_u16m1_m_vl32 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei32_v_u32m2_m_vl32 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_vl32 (uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei32_v_u64m4_m_vl32 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxei32_v_u64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1 (base, bindex, 32);
}

/*
** test_vluxei32_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei32_v_u8m1_m_vl32 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei32_v_u16m2_m_vl32 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_vl32 (uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei32_v_u32m4_m_vl32 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_vl32 (uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei32_v_u64m8_m_vl32 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex)
{
  return vluxei32_v_u64m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2 (base, bindex, 32);
}

/*
** test_vluxei32_v_u8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vluxei32_v_u8m2_m_vl32 (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u8m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_vl32 (uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4 (base, bindex, 32);
}

/*
** test_vluxei32_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vluxei32_v_u16m4_m_vl32 (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u16m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei32_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_vl32 (uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8 (base, bindex, 32);
}

/*
** test_vluxei32_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vluxei32_v_u32m8_m_vl32 (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex)
{
  return vluxei32_v_u32m8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8 (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vluxei64_v_u8mf8_m_vl32 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u8mf8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4 (base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vluxei64_v_u16mf4_m_vl32 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u16mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vluxei64_v_u32mf2_m_vl32 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u32mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vluxei64_v_u64m1_m_vl32 (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxei64_v_u64m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4 (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vluxei64_v_u8mf4_m_vl32 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u8mf4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vluxei64_v_u16mf2_m_vl32 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u16mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vluxei64_v_u32m1_m_vl32 (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u32m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vluxei64_v_u64m2_m_vl32 (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxei64_v_u64m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vluxei64_v_u8mf2_m_vl32 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u8mf2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vluxei64_v_u16m1_m_vl32 (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u16m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vluxei64_v_u32m2_m_vl32 (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u32m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_vl32 (uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vluxei64_v_u64m4_m_vl32 (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxei64_v_u64m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1 (base, bindex, 32);
}

/*
** test_vluxei64_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vluxei64_v_u8m1_m_vl32 (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u8m1_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2 (base, bindex, 32);
}

/*
** test_vluxei64_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vluxei64_v_u16m2_m_vl32 (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u16m2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_vl32 (uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4 (base, bindex, 32);
}

/*
** test_vluxei64_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vluxei64_v_u32m4_m_vl32 (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u32m4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxei64_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_vl32 (uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8 (base, bindex, 32);
}

/*
** test_vluxei64_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vluxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vluxei64_v_u64m8_m_vl32 (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex)
{
  return vluxei64_v_u64m8_m (mask, dest, base, bindex, 32);
}

