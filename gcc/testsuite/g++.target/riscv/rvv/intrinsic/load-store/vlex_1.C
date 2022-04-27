/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vle16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4 (float16_t *base, size_t vl)
{
  return vle16_v_f16mf4 (base, vl);
}


/*
** test_vle16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2 (float16_t *base, size_t vl)
{
  return vle16_v_f16mf2 (base, vl);
}


/*
** test_vle16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1 (float16_t *base, size_t vl)
{
  return vle16_v_f16m1 (base, vl);
}


/*
** test_vle16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2 (float16_t *base, size_t vl)
{
  return vle16_v_f16m2 (base, vl);
}


/*
** test_vle16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4 (float16_t *base, size_t vl)
{
  return vle16_v_f16m4 (base, vl);
}


/*
** test_vle16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_m (vbool4_t mask, vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8 (float16_t *base, size_t vl)
{
  return vle16_v_f16m8 (base, vl);
}


/*
** test_vle16_v_f16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_m (vbool2_t mask, vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2 (float32_t *base, size_t vl)
{
  return vle32_v_f32mf2 (base, vl);
}


/*
** test_vle32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1 (float32_t *base, size_t vl)
{
  return vle32_v_f32m1 (base, vl);
}


/*
** test_vle32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2 (float32_t *base, size_t vl)
{
  return vle32_v_f32m2 (base, vl);
}


/*
** test_vle32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4 (float32_t *base, size_t vl)
{
  return vle32_v_f32m4 (base, vl);
}


/*
** test_vle32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8 (float32_t *base, size_t vl)
{
  return vle32_v_f32m8 (base, vl);
}


/*
** test_vle32_v_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_m (vbool4_t mask, vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1 (float64_t *base, size_t vl)
{
  return vle64_v_f64m1 (base, vl);
}


/*
** test_vle64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2 (float64_t *base, size_t vl)
{
  return vle64_v_f64m2 (base, vl);
}


/*
** test_vle64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4 (float64_t *base, size_t vl)
{
  return vle64_v_f64m4 (base, vl);
}


/*
** test_vle64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8 (float64_t *base, size_t vl)
{
  return vle64_v_f64m8 (base, vl);
}


/*
** test_vle64_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8 (int8_t *base, size_t vl)
{
  return vle8_v_i8mf8 (base, vl);
}


/*
** test_vle8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_m (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4 (int8_t *base, size_t vl)
{
  return vle8_v_i8mf4 (base, vl);
}


/*
** test_vle8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_m (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2 (int8_t *base, size_t vl)
{
  return vle8_v_i8mf2 (base, vl);
}


/*
** test_vle8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_m (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1 (int8_t *base, size_t vl)
{
  return vle8_v_i8m1 (base, vl);
}


/*
** test_vle8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_m (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2 (int8_t *base, size_t vl)
{
  return vle8_v_i8m2 (base, vl);
}


/*
** test_vle8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_m (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4 (int8_t *base, size_t vl)
{
  return vle8_v_i8m4 (base, vl);
}


/*
** test_vle8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_m (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8 (int8_t *base, size_t vl)
{
  return vle8_v_i8m8 (base, vl);
}


/*
** test_vle8_v_i8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_m (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4 (int16_t *base, size_t vl)
{
  return vle16_v_i16mf4 (base, vl);
}


/*
** test_vle16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_m (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2 (int16_t *base, size_t vl)
{
  return vle16_v_i16mf2 (base, vl);
}


/*
** test_vle16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_m (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1 (int16_t *base, size_t vl)
{
  return vle16_v_i16m1 (base, vl);
}


/*
** test_vle16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_m (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2 (int16_t *base, size_t vl)
{
  return vle16_v_i16m2 (base, vl);
}


/*
** test_vle16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_m (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4 (int16_t *base, size_t vl)
{
  return vle16_v_i16m4 (base, vl);
}


/*
** test_vle16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_m (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8 (int16_t *base, size_t vl)
{
  return vle16_v_i16m8 (base, vl);
}


/*
** test_vle16_v_i16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_m (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2 (int32_t *base, size_t vl)
{
  return vle32_v_i32mf2 (base, vl);
}


/*
** test_vle32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_m (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1 (int32_t *base, size_t vl)
{
  return vle32_v_i32m1 (base, vl);
}


/*
** test_vle32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_m (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2 (int32_t *base, size_t vl)
{
  return vle32_v_i32m2 (base, vl);
}


/*
** test_vle32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_m (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4 (int32_t *base, size_t vl)
{
  return vle32_v_i32m4 (base, vl);
}


/*
** test_vle32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_m (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8 (int32_t *base, size_t vl)
{
  return vle32_v_i32m8 (base, vl);
}


/*
** test_vle32_v_i32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_m (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1 (int64_t *base, size_t vl)
{
  return vle64_v_i64m1 (base, vl);
}


/*
** test_vle64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_m (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2 (int64_t *base, size_t vl)
{
  return vle64_v_i64m2 (base, vl);
}


/*
** test_vle64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_m (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4 (int64_t *base, size_t vl)
{
  return vle64_v_i64m4 (base, vl);
}


/*
** test_vle64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_m (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8 (int64_t *base, size_t vl)
{
  return vle64_v_i64m8 (base, vl);
}


/*
** test_vle64_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_m (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_tama (vbool64_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16mf4_tama (mask, base, vl);
}


/*
** test_vle16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_tamu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_tuma (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_tumu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_tama (vbool32_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16mf2_tama (mask, base, vl);
}


/*
** test_vle16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_tamu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_tuma (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_tumu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_tama (vbool16_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16m1_tama (mask, base, vl);
}


/*
** test_vle16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_tamu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_tuma (vbool16_t mask, vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_tumu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_tama (vbool8_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16m2_tama (mask, base, vl);
}


/*
** test_vle16_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_tamu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_tuma (vbool8_t mask, vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_tumu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_tama (vbool4_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16m4_tama (mask, base, vl);
}


/*
** test_vle16_v_f16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_tamu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_tuma (vbool4_t mask, vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_tumu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_tama (vbool2_t mask, float16_t *base, size_t vl)
{
  return vle16_v_f16m8_tama (mask, base, vl);
}


/*
** test_vle16_v_f16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_tamu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_tuma (vbool2_t mask, vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_f16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_tumu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_tama (vbool64_t mask, float32_t *base, size_t vl)
{
  return vle32_v_f32mf2_tama (mask, base, vl);
}


/*
** test_vle32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_tamu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_tuma (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_tumu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_tama (vbool32_t mask, float32_t *base, size_t vl)
{
  return vle32_v_f32m1_tama (mask, base, vl);
}


/*
** test_vle32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_tamu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_tuma (vbool32_t mask, vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_tumu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_tama (vbool16_t mask, float32_t *base, size_t vl)
{
  return vle32_v_f32m2_tama (mask, base, vl);
}


/*
** test_vle32_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_tamu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_tuma (vbool16_t mask, vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_tumu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_tama (vbool8_t mask, float32_t *base, size_t vl)
{
  return vle32_v_f32m4_tama (mask, base, vl);
}


/*
** test_vle32_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_tamu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_tuma (vbool8_t mask, vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_tumu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_tama (vbool4_t mask, float32_t *base, size_t vl)
{
  return vle32_v_f32m8_tama (mask, base, vl);
}


/*
** test_vle32_v_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_tamu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_tuma (vbool4_t mask, vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_tumu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_tama (vbool64_t mask, float64_t *base, size_t vl)
{
  return vle64_v_f64m1_tama (mask, base, vl);
}


/*
** test_vle64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_tamu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_tuma (vbool64_t mask, vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_tumu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_tama (vbool32_t mask, float64_t *base, size_t vl)
{
  return vle64_v_f64m2_tama (mask, base, vl);
}


/*
** test_vle64_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_tamu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_tuma (vbool32_t mask, vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_tumu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_tama (vbool16_t mask, float64_t *base, size_t vl)
{
  return vle64_v_f64m4_tama (mask, base, vl);
}


/*
** test_vle64_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_tamu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_tuma (vbool16_t mask, vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_tumu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_tama (vbool8_t mask, float64_t *base, size_t vl)
{
  return vle64_v_f64m8_tama (mask, base, vl);
}


/*
** test_vle64_v_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_tamu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_tuma (vbool8_t mask, vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_tumu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_tama (vbool64_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8mf8_tama (mask, base, vl);
}


/*
** test_vle8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_tama (vbool32_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8mf4_tama (mask, base, vl);
}


/*
** test_vle8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_tama (vbool16_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8mf2_tama (mask, base, vl);
}


/*
** test_vle8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_tama (vbool8_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8m1_tama (mask, base, vl);
}


/*
** test_vle8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_tama (vbool4_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8m2_tama (mask, base, vl);
}


/*
** test_vle8_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_tamu (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_tuma (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_tumu (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_tama (vbool2_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8m4_tama (mask, base, vl);
}


/*
** test_vle8_v_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_tamu (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_tuma (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_tumu (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_tama (vbool1_t mask, int8_t *base, size_t vl)
{
  return vle8_v_i8m8_tama (mask, base, vl);
}


/*
** test_vle8_v_i8m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_tamu (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_tuma (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_i8m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_tumu (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_tama (vbool64_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16mf4_tama (mask, base, vl);
}


/*
** test_vle16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_tama (vbool32_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16mf2_tama (mask, base, vl);
}


/*
** test_vle16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_tama (vbool16_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16m1_tama (mask, base, vl);
}


/*
** test_vle16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_tama (vbool8_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16m2_tama (mask, base, vl);
}


/*
** test_vle16_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_tama (vbool4_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16m4_tama (mask, base, vl);
}


/*
** test_vle16_v_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_tamu (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_tuma (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_tumu (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_tama (vbool2_t mask, int16_t *base, size_t vl)
{
  return vle16_v_i16m8_tama (mask, base, vl);
}


/*
** test_vle16_v_i16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_tamu (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_tuma (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_i16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_tumu (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_tama (vbool64_t mask, int32_t *base, size_t vl)
{
  return vle32_v_i32mf2_tama (mask, base, vl);
}


/*
** test_vle32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_tama (vbool32_t mask, int32_t *base, size_t vl)
{
  return vle32_v_i32m1_tama (mask, base, vl);
}


/*
** test_vle32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_tama (vbool16_t mask, int32_t *base, size_t vl)
{
  return vle32_v_i32m2_tama (mask, base, vl);
}


/*
** test_vle32_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_tama (vbool8_t mask, int32_t *base, size_t vl)
{
  return vle32_v_i32m4_tama (mask, base, vl);
}


/*
** test_vle32_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_tama (vbool4_t mask, int32_t *base, size_t vl)
{
  return vle32_v_i32m8_tama (mask, base, vl);
}


/*
** test_vle32_v_i32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_tamu (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_tuma (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_i32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_tumu (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_tama (vbool64_t mask, int64_t *base, size_t vl)
{
  return vle64_v_i64m1_tama (mask, base, vl);
}


/*
** test_vle64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_tama (vbool32_t mask, int64_t *base, size_t vl)
{
  return vle64_v_i64m2_tama (mask, base, vl);
}


/*
** test_vle64_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_tama (vbool16_t mask, int64_t *base, size_t vl)
{
  return vle64_v_i64m4_tama (mask, base, vl);
}


/*
** test_vle64_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_tama (vbool8_t mask, int64_t *base, size_t vl)
{
  return vle64_v_i64m8_tama (mask, base, vl);
}


/*
** test_vle64_v_i64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_i64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_tama (vbool64_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf8_tama (mask, base, vl);
}


/*
** test_vle8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_tamu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_tuma (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_tama (vbool32_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf4_tama (mask, base, vl);
}


/*
** test_vle8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_tamu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_tuma (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_tama (vbool16_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf2_tama (mask, base, vl);
}


/*
** test_vle8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_tamu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_tuma (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_tama (vbool8_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8m1_tama (mask, base, vl);
}


/*
** test_vle8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_tamu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_tuma (vbool8_t mask, vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_tumu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_tama (vbool4_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8m2_tama (mask, base, vl);
}


/*
** test_vle8_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_tamu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_tuma (vbool4_t mask, vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_tumu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_tama (vbool2_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8m4_tama (mask, base, vl);
}


/*
** test_vle8_v_u8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_tamu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_tuma (vbool2_t mask, vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_tumu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_tama (vbool1_t mask, uint8_t *base, size_t vl)
{
  return vle8_v_u8m8_tama (mask, base, vl);
}


/*
** test_vle8_v_u8m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_tamu (vbool1_t mask, vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tamu (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_tuma (vbool1_t mask, vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tuma (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_tumu (vbool1_t mask, vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_tama (vbool64_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16mf4_tama (mask, base, vl);
}


/*
** test_vle16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_tamu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_tuma (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_tama (vbool32_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16mf2_tama (mask, base, vl);
}


/*
** test_vle16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_tamu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_tuma (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_tama (vbool16_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16m1_tama (mask, base, vl);
}


/*
** test_vle16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_tamu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_tuma (vbool16_t mask, vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_tumu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_tama (vbool8_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16m2_tama (mask, base, vl);
}


/*
** test_vle16_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_tamu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_tuma (vbool8_t mask, vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_tumu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_tama (vbool4_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16m4_tama (mask, base, vl);
}


/*
** test_vle16_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_tamu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_tuma (vbool4_t mask, vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_tumu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_tama (vbool2_t mask, uint16_t *base, size_t vl)
{
  return vle16_v_u16m8_tama (mask, base, vl);
}


/*
** test_vle16_v_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_tamu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16_tamu (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_tuma (vbool2_t mask, vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16_tuma (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_tumu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_tama (vbool64_t mask, uint32_t *base, size_t vl)
{
  return vle32_v_u32mf2_tama (mask, base, vl);
}


/*
** test_vle32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_tamu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_tuma (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_tama (vbool32_t mask, uint32_t *base, size_t vl)
{
  return vle32_v_u32m1_tama (mask, base, vl);
}


/*
** test_vle32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_tamu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_tuma (vbool32_t mask, vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_tumu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_tama (vbool16_t mask, uint32_t *base, size_t vl)
{
  return vle32_v_u32m2_tama (mask, base, vl);
}


/*
** test_vle32_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_tamu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_tuma (vbool16_t mask, vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_tumu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_tama (vbool8_t mask, uint32_t *base, size_t vl)
{
  return vle32_v_u32m4_tama (mask, base, vl);
}


/*
** test_vle32_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_tamu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_tuma (vbool8_t mask, vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_tumu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_tama (vbool4_t mask, uint32_t *base, size_t vl)
{
  return vle32_v_u32m8_tama (mask, base, vl);
}


/*
** test_vle32_v_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_tamu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32_tamu (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_tuma (vbool4_t mask, vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32_tuma (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_tumu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_tama (vbool64_t mask, uint64_t *base, size_t vl)
{
  return vle64_v_u64m1_tama (mask, base, vl);
}


/*
** test_vle64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_tamu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_tuma (vbool64_t mask, vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_tumu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_tama (vbool32_t mask, uint64_t *base, size_t vl)
{
  return vle64_v_u64m2_tama (mask, base, vl);
}


/*
** test_vle64_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_tamu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_tuma (vbool32_t mask, vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_tumu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_tama (vbool16_t mask, uint64_t *base, size_t vl)
{
  return vle64_v_u64m4_tama (mask, base, vl);
}


/*
** test_vle64_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_tamu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_tuma (vbool16_t mask, vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_tumu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_tama (vbool8_t mask, uint64_t *base, size_t vl)
{
  return vle64_v_u64m8_tama (mask, base, vl);
}


/*
** test_vle64_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_tamu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64_tamu (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_tuma (vbool8_t mask, vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64_tuma (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_tumu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64_tumu (mask, dest, base, vl);
}


/*
** test_vle16_v_f16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16mf4_ta (base, vl);
}


/*
** test_vle16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4_t
test_vle16_v_f16mf4_tu (vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_f16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16mf2_ta (base, vl);
}


/*
** test_vle16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2_t
test_vle16_v_f16mf2_tu (vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_f16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16m1_ta (base, vl);
}


/*
** test_vle16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1_t
test_vle16_v_f16m1_tu (vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_f16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16m2_ta (base, vl);
}


/*
** test_vle16_v_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2_t
test_vle16_v_f16m2_tu (vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_f16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16m4_ta (base, vl);
}


/*
** test_vle16_v_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m4_t
test_vle16_v_f16m4_tu (vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_f16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_ta (float16_t *base, size_t vl)
{
  return vle16_v_f16m8_ta (base, vl);
}


/*
** test_vle16_v_f16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m8_t
test_vle16_v_f16m8_tu (vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle32_v_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_ta (float32_t *base, size_t vl)
{
  return vle32_v_f32mf2_ta (base, vl);
}


/*
** test_vle32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2_t
test_vle32_v_f32mf2_tu (vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_ta (float32_t *base, size_t vl)
{
  return vle32_v_f32m1_ta (base, vl);
}


/*
** test_vle32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1_t
test_vle32_v_f32m1_tu (vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_ta (float32_t *base, size_t vl)
{
  return vle32_v_f32m2_ta (base, vl);
}


/*
** test_vle32_v_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2_t
test_vle32_v_f32m2_tu (vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_ta (float32_t *base, size_t vl)
{
  return vle32_v_f32m4_ta (base, vl);
}


/*
** test_vle32_v_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m4_t
test_vle32_v_f32m4_tu (vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_ta (float32_t *base, size_t vl)
{
  return vle32_v_f32m8_ta (base, vl);
}


/*
** test_vle32_v_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m8_t
test_vle32_v_f32m8_tu (vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle64_v_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_ta (float64_t *base, size_t vl)
{
  return vle64_v_f64m1_ta (base, vl);
}


/*
** test_vle64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1_t
test_vle64_v_f64m1_tu (vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_ta (float64_t *base, size_t vl)
{
  return vle64_v_f64m2_ta (base, vl);
}


/*
** test_vle64_v_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2_t
test_vle64_v_f64m2_tu (vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_ta (float64_t *base, size_t vl)
{
  return vle64_v_f64m4_ta (base, vl);
}


/*
** test_vle64_v_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m4_t
test_vle64_v_f64m4_tu (vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_ta (float64_t *base, size_t vl)
{
  return vle64_v_f64m8_ta (base, vl);
}


/*
** test_vle64_v_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m8_t
test_vle64_v_f64m8_tu (vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle8_v_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8mf8_ta (base, vl);
}


/*
** test_vle8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vle8_v_i8mf8_tu (vint8mf8_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8mf4_ta (base, vl);
}


/*
** test_vle8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vle8_v_i8mf4_tu (vint8mf4_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8mf2_ta (base, vl);
}


/*
** test_vle8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vle8_v_i8mf2_tu (vint8mf2_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8m1_ta (base, vl);
}


/*
** test_vle8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vle8_v_i8m1_tu (vint8m1_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8m2_ta (base, vl);
}


/*
** test_vle8_v_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vle8_v_i8m2_tu (vint8m2_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8m4_ta (base, vl);
}


/*
** test_vle8_v_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m4_t
test_vle8_v_i8m4_tu (vint8m4_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_ta (int8_t *base, size_t vl)
{
  return vle8_v_i8m8_ta (base, vl);
}


/*
** test_vle8_v_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m8_t
test_vle8_v_i8m8_tu (vint8m8_t dest, int8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle16_v_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16mf4_ta (base, vl);
}


/*
** test_vle16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vle16_v_i16mf4_tu (vint16mf4_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16mf2_ta (base, vl);
}


/*
** test_vle16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vle16_v_i16mf2_tu (vint16mf2_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16m1_ta (base, vl);
}


/*
** test_vle16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vle16_v_i16m1_tu (vint16m1_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16m2_ta (base, vl);
}


/*
** test_vle16_v_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vle16_v_i16m2_tu (vint16m2_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16m4_ta (base, vl);
}


/*
** test_vle16_v_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vle16_v_i16m4_tu (vint16m4_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_ta (int16_t *base, size_t vl)
{
  return vle16_v_i16m8_ta (base, vl);
}


/*
** test_vle16_v_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m8_t
test_vle16_v_i16m8_tu (vint16m8_t dest, int16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle32_v_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_ta (int32_t *base, size_t vl)
{
  return vle32_v_i32mf2_ta (base, vl);
}


/*
** test_vle32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vle32_v_i32mf2_tu (vint32mf2_t dest, int32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_ta (int32_t *base, size_t vl)
{
  return vle32_v_i32m1_ta (base, vl);
}


/*
** test_vle32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vle32_v_i32m1_tu (vint32m1_t dest, int32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_ta (int32_t *base, size_t vl)
{
  return vle32_v_i32m2_ta (base, vl);
}


/*
** test_vle32_v_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vle32_v_i32m2_tu (vint32m2_t dest, int32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_ta (int32_t *base, size_t vl)
{
  return vle32_v_i32m4_ta (base, vl);
}


/*
** test_vle32_v_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vle32_v_i32m4_tu (vint32m4_t dest, int32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_ta (int32_t *base, size_t vl)
{
  return vle32_v_i32m8_ta (base, vl);
}


/*
** test_vle32_v_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vle32_v_i32m8_tu (vint32m8_t dest, int32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle64_v_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_ta (int64_t *base, size_t vl)
{
  return vle64_v_i64m1_ta (base, vl);
}


/*
** test_vle64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vle64_v_i64m1_tu (vint64m1_t dest, int64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_i64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_ta (int64_t *base, size_t vl)
{
  return vle64_v_i64m2_ta (base, vl);
}


/*
** test_vle64_v_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vle64_v_i64m2_tu (vint64m2_t dest, int64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_i64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_ta (int64_t *base, size_t vl)
{
  return vle64_v_i64m4_ta (base, vl);
}


/*
** test_vle64_v_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vle64_v_i64m4_tu (vint64m4_t dest, int64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_i64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_ta (int64_t *base, size_t vl)
{
  return vle64_v_i64m8_ta (base, vl);
}


/*
** test_vle64_v_i64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vle64_v_i64m8_tu (vint64m8_t dest, int64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle8_v_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf8_ta (base, vl);
}


/*
** test_vle8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_tu (vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf4_ta (base, vl);
}


/*
** test_vle8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_tu (vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf2_ta (base, vl);
}


/*
** test_vle8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_tu (vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8m1_ta (base, vl);
}


/*
** test_vle8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_tu (vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8m2_ta (base, vl);
}


/*
** test_vle8_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_tu (vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8m4_ta (base, vl);
}


/*
** test_vle8_v_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_tu (vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle8_v_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_ta (uint8_t *base, size_t vl)
{
  return vle8_v_u8m8_ta (base, vl);
}


/*
** test_vle8_v_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_tu (vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8_tu (dest, base, vl);
}


/*
** test_vle16_v_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf4_ta (base, vl);
}


/*
** test_vle16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_tu (vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf2_ta (base, vl);
}


/*
** test_vle16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_tu (vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16m1_ta (base, vl);
}


/*
** test_vle16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_tu (vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16m2_ta (base, vl);
}


/*
** test_vle16_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_tu (vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16m4_ta (base, vl);
}


/*
** test_vle16_v_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_tu (vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle16_v_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_ta (uint16_t *base, size_t vl)
{
  return vle16_v_u16m8_ta (base, vl);
}


/*
** test_vle16_v_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_tu (vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16_tu (dest, base, vl);
}


/*
** test_vle32_v_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_ta (uint32_t *base, size_t vl)
{
  return vle32_v_u32mf2_ta (base, vl);
}


/*
** test_vle32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_tu (vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_ta (uint32_t *base, size_t vl)
{
  return vle32_v_u32m1_ta (base, vl);
}


/*
** test_vle32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_tu (vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_ta (uint32_t *base, size_t vl)
{
  return vle32_v_u32m2_ta (base, vl);
}


/*
** test_vle32_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_tu (vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_ta (uint32_t *base, size_t vl)
{
  return vle32_v_u32m4_ta (base, vl);
}


/*
** test_vle32_v_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_tu (vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle32_v_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_ta (uint32_t *base, size_t vl)
{
  return vle32_v_u32m8_ta (base, vl);
}


/*
** test_vle32_v_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_tu (vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32_tu (dest, base, vl);
}


/*
** test_vle64_v_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_ta (uint64_t *base, size_t vl)
{
  return vle64_v_u64m1_ta (base, vl);
}


/*
** test_vle64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_tu (vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_ta (uint64_t *base, size_t vl)
{
  return vle64_v_u64m2_ta (base, vl);
}


/*
** test_vle64_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_tu (vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_ta (uint64_t *base, size_t vl)
{
  return vle64_v_u64m4_ta (base, vl);
}


/*
** test_vle64_v_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_tu (vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle64_v_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_ta (uint64_t *base, size_t vl)
{
  return vle64_v_u64m8_ta (base, vl);
}


/*
** test_vle64_v_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_tu (vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64_tu (dest, base, vl);
}


/*
** test_vle8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf8 (base, vl);
}


/*
** test_vle8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vle8_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf4 (base, vl);
}


/*
** test_vle8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vle8_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf2 (base, vl);
}


/*
** test_vle8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vle8_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m1 (base, vl);
}


/*
** test_vle8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vle8_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m2 (base, vl);
}


/*
** test_vle8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vle8_v_u8m2_m (vbool4_t mask, vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m4 (base, vl);
}


/*
** test_vle8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vle8_v_u8m4_m (vbool2_t mask, vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle8_v_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m8 (base, vl);
}


/*
** test_vle8_v_u8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vle8_v_u8m8_m (vbool1_t mask, vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4 (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf4 (base, vl);
}


/*
** test_vle16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vle16_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2 (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf2 (base, vl);
}


/*
** test_vle16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vle16_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m1 (base, vl);
}


/*
** test_vle16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vle16_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m2 (base, vl);
}


/*
** test_vle16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vle16_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m4 (base, vl);
}


/*
** test_vle16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vle16_v_u16m4_m (vbool4_t mask, vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle16_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m8 (base, vl);
}


/*
** test_vle16_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vle16_v_u16m8_m (vbool2_t mask, vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16 (mask, dest, base, vl);
}


/*
** test_vle32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2 (uint32_t *base, size_t vl)
{
  return vle32_v_u32mf2 (base, vl);
}


/*
** test_vle32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vle32_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m1 (base, vl);
}


/*
** test_vle32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vle32_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m2 (base, vl);
}


/*
** test_vle32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vle32_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m4 (base, vl);
}


/*
** test_vle32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vle32_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle32_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m8 (base, vl);
}


/*
** test_vle32_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vle32_v_u32m8_m (vbool4_t mask, vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32 (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m1 (base, vl);
}


/*
** test_vle64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vle64_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m2 (base, vl);
}


/*
** test_vle64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vle64_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m4 (base, vl);
}


/*
** test_vle64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vle64_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}


/*
** test_vle64_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m8 (base, vl);
}


/*
** test_vle64_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vle64_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64 (mask, dest, base, vl);
}



