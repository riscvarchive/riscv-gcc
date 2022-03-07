
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test_vloxei8_v_f16mf4_vl32 (float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf4_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei8_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f16mf4_m_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei8_v_f32mf2_vl32 (float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32mf2_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei8_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f32mf2_m_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei8_v_f64m1_vl32 (float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m1_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei8_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f64m1_m_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei8_v_f16mf2_vl32 (float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf2_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei8_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f16mf2_m_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei8_v_f32m1_vl32 (float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m1_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei8_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f32m1_m_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei8_v_f64m2_vl32 (float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m2_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei8_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f64m2_m_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei8_v_f16m1_vl32 (float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m1_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei8_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f16m1_m_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei8_v_f32m2_vl32 (float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m2_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei8_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f32m2_m_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei8_v_f64m4_vl32 (float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m4_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei8_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f64m4_m_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei8_v_f16m2_vl32 (float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m2_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei8_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f16m2_m_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei8_v_f32m4_vl32 (float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m4_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei8_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f32m4_m_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei8_v_f64m8_vl32 (float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m8_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei8_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei8_v_f64m8_m_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei8_v_f16m4_vl32 (float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f16m4_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei8_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei8_v_f16m4_m_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei8_v_f32m8_vl32 (float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f32m8_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei8_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei8_v_f32m8_m_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei8_v_f16m8_vl32 (float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_f16m8_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei8_v_f16m8_m_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei8_v_f16m8_m_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei16_v_f16mf4_vl32 (float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf4_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei16_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f16mf4_m_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei16_v_f32mf2_vl32 (float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32mf2_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei16_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f32mf2_m_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei16_v_f64m1_vl32 (float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m1_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei16_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f64m1_m_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei16_v_f16mf2_vl32 (float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf2_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei16_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f16mf2_m_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei16_v_f32m1_vl32 (float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m1_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei16_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f32m1_m_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei16_v_f64m2_vl32 (float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m2_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei16_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f64m2_m_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei16_v_f16m1_vl32 (float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16m1_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei16_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f16m1_m_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei16_v_f32m2_vl32 (float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m2_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei16_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f32m2_m_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei16_v_f64m4_vl32 (float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m4_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei16_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei16_v_f64m4_m_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei16_v_f16m2_vl32 (float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f16m2_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei16_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei16_v_f16m2_m_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei16_v_f32m4_vl32 (float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f32m4_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei16_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei16_v_f32m4_m_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei16_v_f64m8_vl32 (float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f64m8_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei16_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei16_v_f64m8_m_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei16_v_f16m4_vl32 (float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f16m4_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei16_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei16_v_f16m4_m_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei16_v_f32m8_vl32 (float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f32m8_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei16_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei16_v_f32m8_m_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei16_v_f16m8_vl32 (float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_f16m8_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei16_v_f16m8_m_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei16_v_f16m8_m_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei32_v_f16mf4_vl32 (float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf4_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei32_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f16mf4_m_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei32_v_f32mf2_vl32 (float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32mf2_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei32_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f32mf2_m_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei32_v_f64m1_vl32 (float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m1_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei32_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f64m1_m_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei32_v_f16mf2_vl32 (float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf2_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei32_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f16mf2_m_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei32_v_f32m1_vl32 (float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32m1_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei32_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f32m1_m_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei32_v_f64m2_vl32 (float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m2_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei32_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei32_v_f64m2_m_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei32_v_f16m1_vl32 (float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f16m1_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei32_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei32_v_f16m1_m_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei32_v_f32m2_vl32 (float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f32m2_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei32_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei32_v_f32m2_m_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei32_v_f64m4_vl32 (float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f64m4_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei32_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei32_v_f64m4_m_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei32_v_f16m2_vl32 (float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f16m2_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei32_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei32_v_f16m2_m_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei32_v_f32m4_vl32 (float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f32m4_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei32_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei32_v_f32m4_m_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei32_v_f64m8_vl32 (float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f64m8_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei32_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei32_v_f64m8_m_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei32_v_f16m4_vl32 (float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f16m4_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei32_v_f16m4_m_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei32_v_f16m4_m_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei32_v_f32m8_vl32 (float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f32m8_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei32_v_f32m8_m_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei32_v_f32m8_m_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei64_v_f16mf4_vl32 (float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f16mf4_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei64_v_f16mf4_m_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei64_v_f16mf4_m_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei64_v_f32mf2_vl32 (float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f32mf2_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei64_v_f32mf2_m_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei64_v_f32mf2_m_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei64_v_f64m1_vl32 (float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f64m1_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei64_v_f64m1_m_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxei64_v_f64m1_m_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei64_v_f16mf2_vl32 (float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f16mf2_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei64_v_f16mf2_m_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei64_v_f16mf2_m_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei64_v_f32m1_vl32 (float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f32m1_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei64_v_f32m1_m_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei64_v_f32m1_m_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei64_v_f64m2_vl32 (float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f64m2_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei64_v_f64m2_m_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxei64_v_f64m2_m_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei64_v_f16m1_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f16m1_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei64_v_f16m1_m_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei64_v_f16m1_m_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei64_v_f32m2_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f32m2_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei64_v_f32m2_m_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei64_v_f32m2_m_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei64_v_f64m4_vl32 (float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f64m4_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei64_v_f64m4_m_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxei64_v_f64m4_m_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei64_v_f16m2_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f16m2_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei64_v_f16m2_m_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei64_v_f16m2_m_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei64_v_f32m4_vl32 (float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f32m4_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei64_v_f32m4_m_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei64_v_f32m4_m_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei64_v_f64m8_vl32 (float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8 (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f64m8_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei64_v_f64m8_m_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_m (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxei64_v_f64m8_m_vl32 )?} 1 } } */
