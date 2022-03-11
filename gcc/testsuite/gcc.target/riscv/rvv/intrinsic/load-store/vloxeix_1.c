/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vloxei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_m_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2 (base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2 (base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_m_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_m_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_m_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_m_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_m_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_m_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_m_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4 (float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_vl31 (float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_m_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_m_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4 (float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_vl31 (float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_m_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8 (float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_vl31 (float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_m_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4 (float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_vl31 (float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_m (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_m_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8 (float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_vl31 (float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_m (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_m_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8 (float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_vl31 (float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_m (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_m_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_m_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2 (base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2 (base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_m_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_m_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_m_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_m_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_m_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_m_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_m_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4 (float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_vl31 (float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_m_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_m_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4 (float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_vl31 (float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_m_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8 (float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_vl31 (float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_m_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4 (float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_vl31 (float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_m (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_m_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8 (float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_vl31 (float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_m (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_m_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8 (float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_vl31 (float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_m (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_m_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4 (base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4 (base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_m_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2 (base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2 (base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_m_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_m_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2 (base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2 (base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_m_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_m_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_vl31 (float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_m_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_m_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_vl31 (float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_m_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4 (float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_vl31 (float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_m_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_vl31 (float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_m_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4 (float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_vl31 (float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_m_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8 (float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8 (base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_vl31 (float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8 (base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_m_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4 (float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_vl31 (float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_m (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_m_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8 (float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8 (base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_vl31 (float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8 (base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_m (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_m_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4 (base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4 (base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_m_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2 (base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2 (base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_m_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_m_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2 (base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2 (base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_m_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_m_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_vl31 (float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_m_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_m_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_vl31 (float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_m_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4 (float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4 (base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_vl31 (float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4 (base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_m_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_vl31 (float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_m_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4 (float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4 (base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_vl31 (float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4 (base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_m_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8 (float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8 (base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_vl31 (float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8 (base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_m_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_vl31 (int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_m (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_m_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_vl31 (int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_m (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_m_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_vl31 (int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_m (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_m_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_vl31 (int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_m (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_m_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_vl31 (int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_m (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_m_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_vl31 (int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_m (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_m_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_vl31 (int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_m (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_m_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2 (int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_vl31 (int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_m (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_m_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_vl31 (int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_m (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_m_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_vl31 (int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_m (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_m_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2 (int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_vl31 (int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_m (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_m_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4 (int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_vl31 (int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_m (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_m_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_vl31 (int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_m (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_m_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2 (int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_vl31 (int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_m (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_m_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4 (int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_vl31 (int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_m (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_m_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8 (int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_vl31 (int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_m (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_m_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2 (int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_vl31 (int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_m (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_m_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4 (int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_vl31 (int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_m (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_m_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8 (int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_vl31 (int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_m (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_m_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4 (int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_vl31 (int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_m (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_m_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8 (int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_vl31 (int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_m (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_m_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8 (int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8 (base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_vl31 (int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8 (base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_m (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_m_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_vl31 (int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_m (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_m_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_vl31 (int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_m (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_m_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_vl31 (int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_m (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_m_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_vl31 (int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_m (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_m_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_vl31 (int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_m (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_m_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2 (int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_vl31 (int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_m (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_m_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1 (int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_vl31 (int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_m (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_m_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2 (int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_vl31 (int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_m (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_m_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2 (int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_vl31 (int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_m (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_m_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1 (int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_vl31 (int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_m (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_m_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2 (int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_vl31 (int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_m (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_m_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4 (int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_vl31 (int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_m (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_m_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1 (int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_vl31 (int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_m (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_m_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2 (int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_vl31 (int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_m (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_m_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4 (int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_vl31 (int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_m (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_m_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8 (int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_vl31 (int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_m (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_m_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2 (int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_vl31 (int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_m (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_m_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4 (int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_vl31 (int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_m (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_m_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8 (int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_vl31 (int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_m (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_m_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4 (int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4 (base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_vl31 (int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4 (base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_m (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_m_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8 (int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8 (base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_vl31 (int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8 (base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_m (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_m_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8 (int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf8 (base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_vl31 (int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8 (base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_m (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_m_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei32_v_i16mf4 (int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i16mf4 (base, bindex, vl);
}

/*
** test_vloxei32_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei32_v_i16mf4_vl31 (int16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i16mf4 (base, bindex, 31);
}

/*
** test_vloxei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei32_v_i16mf4_m (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei32_v_i16mf4_m_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei32_v_i32mf2 (int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i32mf2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei32_v_i32mf2_vl31 (int32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i32mf2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei32_v_i32mf2_m (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei32_v_i32mf2_m_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei32_v_i64m1 (int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i64m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei32_v_i64m1_vl31 (int64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i64m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei32_v_i64m1_m (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei32_v_i64m1_m_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei32_v_i8mf4 (int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i8mf4 (base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t
test_vloxei32_v_i8mf4_vl31 (int8_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i8mf4 (base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei32_v_i8mf4_m (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei32_v_i8mf4_m_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei32_v_i16mf2 (int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i16mf2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t
test_vloxei32_v_i16mf2_vl31 (int16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i16mf2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei32_v_i16mf2_m (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei32_v_i16mf2_m_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei32_v_i32m1 (int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i32m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t
test_vloxei32_v_i32m1_vl31 (int32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i32m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei32_v_i32m1_m (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei32_v_i32m1_m_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei32_v_i64m2 (int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i64m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2_t
test_vloxei32_v_i64m2_vl31 (int64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i64m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei32_v_i64m2_m (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_i64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei32_v_i64m2_m_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2_t
test_vloxei32_v_i8mf2 (int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2_t
test_vloxei32_v_i8mf2_vl31 (int8_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i8mf2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei32_v_i8mf2_m (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei32_v_i8mf2_m_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1_t
test_vloxei32_v_i16m1 (int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i16m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1_t
test_vloxei32_v_i16m1_vl31 (int16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i16m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei32_v_i16m1_m (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei32_v_i16m1_m_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t
test_vloxei32_v_i32m2 (int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i32m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t
test_vloxei32_v_i32m2_vl31 (int32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i32m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei32_v_i32m2_m (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei32_v_i32m2_m_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4_t
test_vloxei32_v_i64m4 (int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i64m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4_t
test_vloxei32_v_i64m4_vl31 (int64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i64m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei32_v_i64m4_m (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_i64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei32_v_i64m4_m_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1_t
test_vloxei32_v_i8m1 (int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i8m1 (base, bindex, vl);
}

/*
** test_vloxei32_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1_t
test_vloxei32_v_i8m1_vl31 (int8_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i8m1 (base, bindex, 31);
}

/*
** test_vloxei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei32_v_i8m1_m (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei32_v_i8m1_m_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2_t
test_vloxei32_v_i16m2 (int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i16m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2_t
test_vloxei32_v_i16m2_vl31 (int16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i16m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei32_v_i16m2_m (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei32_v_i16m2_m_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t
test_vloxei32_v_i32m4 (int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i32m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t
test_vloxei32_v_i32m4_vl31 (int32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i32m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei32_v_i32m4_m (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei32_v_i32m4_m_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m8_t
test_vloxei32_v_i64m8 (int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i64m8 (base, bindex, vl);
}

/*
** test_vloxei32_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m8_t
test_vloxei32_v_i64m8_vl31 (int64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i64m8 (base, bindex, 31);
}

/*
** test_vloxei32_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei32_v_i64m8_m (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_i64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei32_v_i64m8_m_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2_t
test_vloxei32_v_i8m2 (int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i8m2 (base, bindex, vl);
}

/*
** test_vloxei32_v_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2_t
test_vloxei32_v_i8m2_vl31 (int8_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i8m2 (base, bindex, 31);
}

/*
** test_vloxei32_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei32_v_i8m2_m (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i8m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei32_v_i8m2_m_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i8m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4_t
test_vloxei32_v_i16m4 (int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i16m4 (base, bindex, vl);
}

/*
** test_vloxei32_v_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4_t
test_vloxei32_v_i16m4_vl31 (int16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i16m4 (base, bindex, 31);
}

/*
** test_vloxei32_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei32_v_i16m4_m (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i16m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei32_v_i16m4_m_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i16m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t
test_vloxei32_v_i32m8 (int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i32m8 (base, bindex, vl);
}

/*
** test_vloxei32_v_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m8_t
test_vloxei32_v_i32m8_vl31 (int32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i32m8 (base, bindex, 31);
}

/*
** test_vloxei32_v_i32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei32_v_i32m8_m (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_i32m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei32_v_i32m8_m_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i32m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei64_v_i8mf8 (int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i8mf8 (base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t
test_vloxei64_v_i8mf8_vl31 (int8_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i8mf8 (base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei64_v_i8mf8_m (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i8mf8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei64_v_i8mf8_m_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i8mf8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei64_v_i16mf4 (int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i16mf4 (base, bindex, vl);
}

/*
** test_vloxei64_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t
test_vloxei64_v_i16mf4_vl31 (int16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i16mf4 (base, bindex, 31);
}

/*
** test_vloxei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei64_v_i16mf4_m (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i16mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei64_v_i16mf4_m_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i16mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei64_v_i32mf2 (int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i32mf2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t
test_vloxei64_v_i32mf2_vl31 (int32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i32mf2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei64_v_i32mf2_m (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i32mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei64_v_i32mf2_m_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i32mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei64_v_i64m1 (int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i64m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t
test_vloxei64_v_i64m1_vl31 (int64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i64m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei64_v_i64m1_m (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_i64m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei64_v_i64m1_m_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i64m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4_t
test_vloxei64_v_i8mf4 (int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i8mf4 (base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4_t
test_vloxei64_v_i8mf4_vl31 (int8_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i8mf4 (base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei64_v_i8mf4_m (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i8mf4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei64_v_i8mf4_m_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i8mf4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2_t
test_vloxei64_v_i16mf2 (int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i16mf2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2_t
test_vloxei64_v_i16mf2_vl31 (int16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i16mf2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei64_v_i16mf2_m (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i16mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei64_v_i16mf2_m_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i16mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1_t
test_vloxei64_v_i32m1 (int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i32m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1_t
test_vloxei64_v_i32m1_vl31 (int32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i32m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei64_v_i32m1_m (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i32m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei64_v_i32m1_m_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i32m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t
test_vloxei64_v_i64m2 (int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i64m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t
test_vloxei64_v_i64m2_vl31 (int64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i64m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei64_v_i64m2_m (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_i64m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei64_v_i64m2_m_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i64m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei64_v_i8mf2 (int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i8mf2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2_t
test_vloxei64_v_i8mf2_vl31 (int8_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i8mf2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei64_v_i8mf2_m (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i8mf2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei64_v_i8mf2_m_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i8mf2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1_t
test_vloxei64_v_i16m1 (int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i16m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1_t
test_vloxei64_v_i16m1_vl31 (int16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i16m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei64_v_i16m1_m (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i16m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei64_v_i16m1_m_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i16m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2_t
test_vloxei64_v_i32m2 (int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i32m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2_t
test_vloxei64_v_i32m2_vl31 (int32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i32m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei64_v_i32m2_m (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i32m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei64_v_i32m2_m_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i32m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t
test_vloxei64_v_i64m4 (int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i64m4 (base, bindex, vl);
}

/*
** test_vloxei64_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4_t
test_vloxei64_v_i64m4_vl31 (int64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i64m4 (base, bindex, 31);
}

/*
** test_vloxei64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei64_v_i64m4_m (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_i64m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei64_v_i64m4_m_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i64m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1_t
test_vloxei64_v_i8m1 (int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i8m1 (base, bindex, vl);
}

/*
** test_vloxei64_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1_t
test_vloxei64_v_i8m1_vl31 (int8_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i8m1 (base, bindex, 31);
}

/*
** test_vloxei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei64_v_i8m1_m (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i8m1_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei64_v_i8m1_m_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i8m1_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2_t
test_vloxei64_v_i16m2 (int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i16m2 (base, bindex, vl);
}

/*
** test_vloxei64_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2_t
test_vloxei64_v_i16m2_vl31 (int16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i16m2 (base, bindex, 31);
}

/*
** test_vloxei64_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei64_v_i16m2_m (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i16m2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei64_v_i16m2_m_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i16m2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4_t
test_vloxei64_v_i32m4 (int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i32m4 (base, bindex, vl);
}

/*
** test_vloxei64_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4_t
test_vloxei64_v_i32m4_vl31 (int32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i32m4 (base, bindex, 31);
}

/*
** test_vloxei64_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei64_v_i32m4_m (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i32m4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei64_v_i32m4_m_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i32m4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t
test_vloxei64_v_i64m8 (int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i64m8 (base, bindex, vl);
}

/*
** test_vloxei64_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint64m8_t
test_vloxei64_v_i64m8_vl31 (int64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i64m8 (base, bindex, 31);
}

/*
** test_vloxei64_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei64_v_i64m8_m (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_i64m8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_i64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei64_v_i64m8_m_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i64m8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tama (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tama_vl31 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tamu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tamu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tuma (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tuma_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tumu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei8_v_f16mf4_tumu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tama (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tama_vl31 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tamu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tamu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tuma (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tuma_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tumu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei8_v_f32mf2_tumu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tama (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tama_vl31 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tamu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tamu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tuma (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tuma_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tumu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_f64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei8_v_f64m1_tumu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tama (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tama_vl31 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tamu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tamu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tuma (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tuma_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tumu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei8_v_f16mf2_tumu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tama (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tama_vl31 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tamu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tamu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tuma (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tuma_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tumu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei8_v_f32m1_tumu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tama (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tama_vl31 (vbool32_t mask, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tamu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tamu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tuma (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tuma_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tumu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_f64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei8_v_f64m2_tumu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tama (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tama_vl31 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tamu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tamu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tuma (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tuma_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tumu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei8_v_f16m1_tumu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tama (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tama_vl31 (vbool16_t mask, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tamu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tamu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tuma (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tuma_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tumu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei8_v_f32m2_tumu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tama (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tama_vl31 (vbool16_t mask, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tamu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tamu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tuma (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tuma_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tumu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_f64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei8_v_f64m4_tumu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tama (vbool8_t mask, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tama_vl31 (vbool8_t mask, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tamu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tamu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tuma (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tuma_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tumu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei8_v_f16m2_tumu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tama (vbool8_t mask, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tama_vl31 (vbool8_t mask, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tamu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tamu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tuma (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tuma_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tumu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei8_v_f32m4_tumu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tama (vbool8_t mask, float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tama_vl31 (vbool8_t mask, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tamu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tamu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tuma (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tuma_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tumu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_f64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei8_v_f64m8_tumu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tama (vbool4_t mask, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tama_vl31 (vbool4_t mask, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tamu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tamu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tuma (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tuma_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tumu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f16m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei8_v_f16m4_tumu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tama (vbool4_t mask, float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tama_vl31 (vbool4_t mask, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tamu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tamu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tuma (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tuma_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tumu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_f32m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei8_v_f32m8_tumu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tama (vbool2_t mask, float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tama_vl31 (vbool2_t mask, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tamu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tamu_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tuma (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tuma_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_f16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tumu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_f16m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_f16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei8_v_f16m8_tumu_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tama (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tama_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tamu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tamu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tuma (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tuma_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tumu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei16_v_f16mf4_tumu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tamu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tamu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tuma (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tuma_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tumu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei16_v_f32mf2_tumu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tamu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tamu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tuma (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tuma_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tumu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_f64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei16_v_f64m1_tumu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tamu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tamu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tuma (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tuma_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tumu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei16_v_f16mf2_tumu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tamu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tamu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tuma (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tuma_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tumu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei16_v_f32m1_tumu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tama (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tama_vl31 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tamu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tamu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tuma (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tuma_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tumu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_f64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei16_v_f64m2_tumu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tamu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tamu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tuma (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tuma_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tumu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei16_v_f16m1_tumu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tama (vbool16_t mask, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tama_vl31 (vbool16_t mask, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tamu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tamu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tuma (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tuma_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tumu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei16_v_f32m2_tumu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tama (vbool16_t mask, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tama_vl31 (vbool16_t mask, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tamu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tamu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tuma (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tuma_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tumu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_f64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei16_v_f64m4_tumu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tama (vbool8_t mask, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tama_vl31 (vbool8_t mask, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tamu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tamu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tuma (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tuma_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tumu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei16_v_f16m2_tumu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tama (vbool8_t mask, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tama_vl31 (vbool8_t mask, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tamu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tamu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tuma (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tuma_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tumu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei16_v_f32m4_tumu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tama (vbool8_t mask, float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tama_vl31 (vbool8_t mask, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tamu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tamu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tuma (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tuma_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tumu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_f64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei16_v_f64m8_tumu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tama (vbool4_t mask, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tama_vl31 (vbool4_t mask, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tamu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tamu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tuma (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tuma_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tumu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f16m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei16_v_f16m4_tumu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tama (vbool4_t mask, float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tama_vl31 (vbool4_t mask, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tamu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tamu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tuma (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tuma_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tumu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_f32m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei16_v_f32m8_tumu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tama (vbool2_t mask, float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tama_vl31 (vbool2_t mask, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tamu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tamu_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tuma (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tuma_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_f16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tumu (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_f16m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_f16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m8_t
test_vloxei16_v_f16m8_tumu_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tamu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tamu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tuma (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tuma_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tumu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei32_v_f16mf4_tumu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tamu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tamu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tuma (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tuma_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tumu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei32_v_f32mf2_tumu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tamu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tamu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tuma (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tuma_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tumu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_f64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei32_v_f64m1_tumu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tamu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tamu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tuma (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tuma_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tumu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei32_v_f16mf2_tumu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tamu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tamu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tuma (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tuma_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tumu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei32_v_f32m1_tumu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tama (vbool32_t mask, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tama_vl31 (vbool32_t mask, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tamu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tamu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tuma (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tuma_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tumu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_v_f64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei32_v_f64m2_tumu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tamu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tamu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tuma (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tuma_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tumu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei32_v_f16m1_tumu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tama (vbool16_t mask, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tama_vl31 (vbool16_t mask, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tamu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tamu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tuma (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tuma_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tumu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei32_v_f32m2_tumu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tama (vbool16_t mask, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tama_vl31 (vbool16_t mask, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tamu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tamu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tuma (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tuma_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tumu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_v_f64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei32_v_f64m4_tumu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tama (vbool8_t mask, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tama_vl31 (vbool8_t mask, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tamu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tamu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tuma (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tuma_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tumu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei32_v_f16m2_tumu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tama (vbool8_t mask, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tama_vl31 (vbool8_t mask, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tamu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tamu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tuma (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tuma_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tumu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei32_v_f32m4_tumu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tama (vbool8_t mask, float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tama_vl31 (vbool8_t mask, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tamu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tamu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tuma (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tuma_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tumu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_v_f64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei32_v_f64m8_tumu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tama (vbool4_t mask, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tama_vl31 (vbool4_t mask, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tamu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tamu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tuma (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tuma_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tumu (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f16m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4_t
test_vloxei32_v_f16m4_tumu_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tama (vbool4_t mask, float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tama_vl31 (vbool4_t mask, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tamu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tamu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tuma (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tuma_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tumu (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_v_f32m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_f32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t
test_vloxei32_v_f32m8_tumu_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tamu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tamu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tuma (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tuma_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tumu (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4_t
test_vloxei64_v_f16mf4_tumu_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tamu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tamu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tuma (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tuma_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tumu (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t
test_vloxei64_v_f32mf2_tumu_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tamu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tamu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tuma (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tuma_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tumu (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_v_f64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t
test_vloxei64_v_f64m1_tumu_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tamu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tamu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tuma (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tuma_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tumu (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2_t
test_vloxei64_v_f16mf2_tumu_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tamu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tamu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tuma (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tuma_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tumu (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t
test_vloxei64_v_f32m1_tumu_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tama (vbool32_t mask, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tama_vl31 (vbool32_t mask, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tamu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tamu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tuma (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tuma_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tumu (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_v_f64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t
test_vloxei64_v_f64m2_tumu_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tamu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tamu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tuma (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tuma_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tumu (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1_t
test_vloxei64_v_f16m1_tumu_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tama (vbool16_t mask, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tama_vl31 (vbool16_t mask, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tamu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tamu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tuma (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tuma_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tumu (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t
test_vloxei64_v_f32m2_tumu_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tama (vbool16_t mask, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tama_vl31 (vbool16_t mask, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tamu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tamu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tuma (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tuma_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tumu (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_v_f64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t
test_vloxei64_v_f64m4_tumu_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tama (vbool8_t mask, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tama_vl31 (vbool8_t mask, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tamu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tamu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tuma (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tuma_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tumu (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2_t
test_vloxei64_v_f16m2_tumu_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tama (vbool8_t mask, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tama_vl31 (vbool8_t mask, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tamu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tamu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tuma (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tuma_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tumu (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t
test_vloxei64_v_f32m4_tumu_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tama (vbool8_t mask, float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tama_vl31 (vbool8_t mask, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tamu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tamu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tuma (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tuma_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei64_v_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tumu (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_v_f64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei64_v_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t
test_vloxei64_v_f64m8_tumu_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tamu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tuma_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i8mf8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei8_v_i8mf8_tumu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tama (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tama_vl31 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tamu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tuma_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei8_v_i16mf4_tumu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tama (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tama_vl31 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tamu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tuma_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei8_v_i32mf2_tumu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tama (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tama_vl31 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tamu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tuma_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_v_i64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei8_v_i64m1_tumu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tama (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tama_vl31 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tamu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tuma_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i8mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei8_v_i8mf4_tumu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tama (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tama_vl31 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tamu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tuma_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei8_v_i16mf2_tumu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tama (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tama_vl31 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tamu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tuma_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei8_v_i32m1_tumu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tama (vbool32_t mask, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tama_vl31 (vbool32_t mask, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tamu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tuma_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_v_i64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei8_v_i64m2_tumu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tama (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tama_vl31 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tamu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tuma_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i8mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei8_v_i8mf2_tumu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tama (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tama_vl31 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tamu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tuma_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei8_v_i16m1_tumu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tama (vbool16_t mask, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tama_vl31 (vbool16_t mask, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tamu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tuma_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei8_v_i32m2_tumu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tama (vbool16_t mask, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tama_vl31 (vbool16_t mask, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tamu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tuma_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_v_i64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei8_v_i64m4_tumu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tama (vbool8_t mask, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tama_vl31 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tamu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tuma_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i8m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei8_v_i8m1_tumu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tama (vbool8_t mask, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tama_vl31 (vbool8_t mask, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tamu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tuma_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei8_v_i16m2_tumu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tama (vbool8_t mask, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tama_vl31 (vbool8_t mask, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tamu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tuma_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei8_v_i32m4_tumu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tama (vbool8_t mask, int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tama_vl31 (vbool8_t mask, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tamu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tuma_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_v_i64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei8_v_i64m8_tumu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tama (vbool4_t mask, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tama_vl31 (vbool4_t mask, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tamu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tamu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tuma (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tuma_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tumu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i8m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei8_v_i8m2_tumu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tama (vbool4_t mask, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tama_vl31 (vbool4_t mask, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tamu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tamu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tuma (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tuma_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tumu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i16m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei8_v_i16m4_tumu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tama (vbool4_t mask, int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tama_vl31 (vbool4_t mask, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tamu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tamu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tuma (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tuma_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tumu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_v_i32m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei8_v_i32m8_tumu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tama (vbool2_t mask, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tama_vl31 (vbool2_t mask, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tamu (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tamu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tuma (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tuma_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tumu (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i8m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei8_v_i8m4_tumu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tama (vbool2_t mask, int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tama_vl31 (vbool2_t mask, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tamu (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tamu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tuma (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tuma_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tumu (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_v_i16m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei8_v_i16m8_tumu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tama (vbool1_t mask, int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tama_vl31 (vbool1_t mask, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tamu (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tamu_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tuma (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tuma_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei8_v_i8m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tumu (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_v_i8m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei8_v_i8m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vloxei8_v_i8m8_tumu_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tama (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tama_vl31 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tamu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tuma_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i8mf8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei16_v_i8mf8_tumu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tama (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tama_vl31 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tamu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tuma_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i16mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vloxei16_v_i16mf4_tumu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tama (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tama_vl31 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tamu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tuma_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i32mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vloxei16_v_i32mf2_tumu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tama (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tama_vl31 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tamu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tuma_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_v_i64m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vloxei16_v_i64m1_tumu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tama (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tama_vl31 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tamu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tuma_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i8mf4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t
test_vloxei16_v_i8mf4_tumu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tama (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tama_vl31 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tamu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tuma_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i16mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vloxei16_v_i16mf2_tumu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tama (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tama_vl31 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tamu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tuma_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i32m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vloxei16_v_i32m1_tumu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tama (vbool32_t mask, int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tama_vl31 (vbool32_t mask, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tamu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tuma_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_v_i64m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vloxei16_v_i64m2_tumu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tama (vbool16_t mask, int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tama_vl31 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tamu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tuma_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i8mf2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vloxei16_v_i8mf2_tumu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tama (vbool16_t mask, int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tama_vl31 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tamu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tuma_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i16m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vloxei16_v_i16m1_tumu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tama (vbool16_t mask, int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tama_vl31 (vbool16_t mask, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tamu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tuma_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i32m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vloxei16_v_i32m2_tumu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tama (vbool16_t mask, int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tama_vl31 (vbool16_t mask, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tamu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tuma_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_v_i64m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vloxei16_v_i64m4_tumu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tama (vbool8_t mask, int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tama_vl31 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tamu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tuma_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i8m1_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vloxei16_v_i8m1_tumu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tama (vbool8_t mask, int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tama_vl31 (vbool8_t mask, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tamu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tuma_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i16m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vloxei16_v_i16m2_tumu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tama (vbool8_t mask, int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tama_vl31 (vbool8_t mask, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tamu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tuma_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i32m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vloxei16_v_i32m4_tumu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tama (vbool8_t mask, int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tama_vl31 (vbool8_t mask, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tamu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tuma_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_v_i64m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vloxei16_v_i64m8_tumu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tama (vbool4_t mask, int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tama_vl31 (vbool4_t mask, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tamu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tamu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tuma (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tuma_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tumu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i8m2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vloxei16_v_i8m2_tumu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tama (vbool4_t mask, int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tama_vl31 (vbool4_t mask, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tamu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tamu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tuma (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tuma_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tumu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i16m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vloxei16_v_i16m4_tumu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tama (vbool4_t mask, int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tama_vl31 (vbool4_t mask, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tamu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tamu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tuma (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tuma_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tumu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_v_i32m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vloxei16_v_i32m8_tumu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tama (vbool2_t mask, int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tama_vl31 (vbool2_t mask, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tamu (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tamu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tuma (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tuma_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tumu (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i8m4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i8m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vloxei16_v_i8m4_tumu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tama (vbool2_t mask, int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tama_vl31 (vbool2_t mask, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tamu (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tamu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tuma (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tuma_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vloxei16_v_i16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tumu (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_v_i16m8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei16_v_i16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vloxei16_v_i16m8_tumu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_tama (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf8_tama (mask, base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_tama_vl31 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8_tama (mask, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vloxei32_v_i8mf8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_tamu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vloxei32_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t
test_vloxei32_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_v_i8mf8_tuma (mask, dest, base, bindex, vl);
}
