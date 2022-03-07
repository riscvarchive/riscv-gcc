
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test_vloxei8_v_f16mf4_ta_vl32 (float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf4_ta_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei8_v_f16mf4_tu_vl32 (vfloat16mf4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf4_tu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei8_v_f32mf2_ta_vl32 (float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32mf2_ta_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei8_v_f32mf2_tu_vl32 (vfloat32mf2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32mf2_tu_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei8_v_f64m1_ta_vl32 (float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m1_ta_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei8_v_f64m1_tu_vl32 (vfloat64m1_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_f64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m1_tu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei8_v_f16mf2_ta_vl32 (float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf2_ta_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei8_v_f16mf2_tu_vl32 (vfloat16mf2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16mf2_tu_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei8_v_f32m1_ta_vl32 (float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m1_ta_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei8_v_f32m1_tu_vl32 (vfloat32m1_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m1_tu_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei8_v_f64m2_ta_vl32 (float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m2_ta_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei8_v_f64m2_tu_vl32 (vfloat64m2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_f64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m2_tu_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei8_v_f16m1_ta_vl32 (float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m1_ta_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei8_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m1_tu_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei8_v_f32m2_ta_vl32 (float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m2_ta_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei8_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m2_tu_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei8_v_f64m4_ta_vl32 (float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m4_ta_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei8_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_f64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m4_tu_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei8_v_f16m2_ta_vl32 (float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m2_ta_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei8_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f16m2_tu_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei8_v_f32m4_ta_vl32 (float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m4_ta_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei8_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f32m4_tu_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei8_v_f64m8_ta_vl32 (float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m8_ta_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei8_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_f64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_f64m8_tu_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei8_v_f16m4_ta_vl32 (float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f16m4_ta_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei8_v_f16m4_tu_vl32 (vfloat16m4_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f16m4_tu_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei8_v_f32m8_ta_vl32 (float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f32m8_ta_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei8_v_f32m8_tu_vl32 (vfloat32m8_t dest, float32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_f32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_f32m8_tu_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei8_v_f16m8_ta_vl32 (float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_f16m8_ta_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei8_v_f16m8_tu_vl32 (vfloat16m8_t dest, float16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_f16m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_f16m8_tu_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei16_v_f16mf4_ta_vl32 (float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf4_ta_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei16_v_f16mf4_tu_vl32 (vfloat16mf4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf4_tu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei16_v_f32mf2_ta_vl32 (float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32mf2_ta_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei16_v_f32mf2_tu_vl32 (vfloat32mf2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32mf2_tu_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei16_v_f64m1_ta_vl32 (float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m1_ta_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei16_v_f64m1_tu_vl32 (vfloat64m1_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_f64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m1_tu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei16_v_f16mf2_ta_vl32 (float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf2_ta_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei16_v_f16mf2_tu_vl32 (vfloat16mf2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16mf2_tu_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei16_v_f32m1_ta_vl32 (float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m1_ta_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei16_v_f32m1_tu_vl32 (vfloat32m1_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m1_tu_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei16_v_f64m2_ta_vl32 (float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m2_ta_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei16_v_f64m2_tu_vl32 (vfloat64m2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_f64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m2_tu_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei16_v_f16m1_ta_vl32 (float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16m1_ta_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei16_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f16m1_tu_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei16_v_f32m2_ta_vl32 (float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m2_ta_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei16_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f32m2_tu_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei16_v_f64m4_ta_vl32 (float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m4_ta_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei16_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_f64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_f64m4_tu_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei16_v_f16m2_ta_vl32 (float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f16m2_ta_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei16_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f16m2_tu_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei16_v_f32m4_ta_vl32 (float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f32m4_ta_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei16_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f32m4_tu_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei16_v_f64m8_ta_vl32 (float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f64m8_ta_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei16_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_f64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_f64m8_tu_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei16_v_f16m4_ta_vl32 (float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f16m4_ta_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei16_v_f16m4_tu_vl32 (vfloat16m4_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f16m4_tu_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei16_v_f32m8_ta_vl32 (float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f32m8_ta_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei16_v_f32m8_tu_vl32 (vfloat32m8_t dest, float32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_f32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_f32m8_tu_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei16_v_f16m8_ta_vl32 (float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_f16m8_ta_vl32 )?} 1 } } */
vfloat16m8_t
test_vloxei16_v_f16m8_tu_vl32 (vfloat16m8_t dest, float16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_f16m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_f16m8_tu_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei32_v_f16mf4_ta_vl32 (float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf4_ta_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei32_v_f16mf4_tu_vl32 (vfloat16mf4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf4_tu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei32_v_f32mf2_ta_vl32 (float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32mf2_ta_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei32_v_f32mf2_tu_vl32 (vfloat32mf2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32mf2_tu_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei32_v_f64m1_ta_vl32 (float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m1_ta_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei32_v_f64m1_tu_vl32 (vfloat64m1_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_f64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m1_tu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei32_v_f16mf2_ta_vl32 (float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf2_ta_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei32_v_f16mf2_tu_vl32 (vfloat16mf2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f16mf2_tu_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei32_v_f32m1_ta_vl32 (float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32m1_ta_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei32_v_f32m1_tu_vl32 (vfloat32m1_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f32m1_tu_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei32_v_f64m2_ta_vl32 (float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m2_ta_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei32_v_f64m2_tu_vl32 (vfloat64m2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_f64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_f64m2_tu_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei32_v_f16m1_ta_vl32 (float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f16m1_ta_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei32_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f16m1_tu_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei32_v_f32m2_ta_vl32 (float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f32m2_ta_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei32_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f32m2_tu_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei32_v_f64m4_ta_vl32 (float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f64m4_ta_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei32_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_f64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_f64m4_tu_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei32_v_f16m2_ta_vl32 (float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f16m2_ta_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei32_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f16m2_tu_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei32_v_f32m4_ta_vl32 (float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f32m4_ta_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei32_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f32m4_tu_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei32_v_f64m8_ta_vl32 (float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f64m8_ta_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei32_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_f64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_f64m8_tu_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei32_v_f16m4_ta_vl32 (float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f16m4_ta_vl32 )?} 1 } } */
vfloat16m4_t
test_vloxei32_v_f16m4_tu_vl32 (vfloat16m4_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f16m4_tu_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei32_v_f32m8_ta_vl32 (float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f32m8_ta_vl32 )?} 1 } } */
vfloat32m8_t
test_vloxei32_v_f32m8_tu_vl32 (vfloat32m8_t dest, float32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_f32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_f32m8_tu_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei64_v_f16mf4_ta_vl32 (float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f16mf4_ta_vl32 )?} 1 } } */
vfloat16mf4_t
test_vloxei64_v_f16mf4_tu_vl32 (vfloat16mf4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f16mf4_tu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei64_v_f32mf2_ta_vl32 (float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f32mf2_ta_vl32 )?} 1 } } */
vfloat32mf2_t
test_vloxei64_v_f32mf2_tu_vl32 (vfloat32mf2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f32mf2_tu_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei64_v_f64m1_ta_vl32 (float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f64m1_ta_vl32 )?} 1 } } */
vfloat64m1_t
test_vloxei64_v_f64m1_tu_vl32 (vfloat64m1_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_f64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_f64m1_tu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei64_v_f16mf2_ta_vl32 (float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f16mf2_ta_vl32 )?} 1 } } */
vfloat16mf2_t
test_vloxei64_v_f16mf2_tu_vl32 (vfloat16mf2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f16mf2_tu_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei64_v_f32m1_ta_vl32 (float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f32m1_ta_vl32 )?} 1 } } */
vfloat32m1_t
test_vloxei64_v_f32m1_tu_vl32 (vfloat32m1_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f32m1_tu_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei64_v_f64m2_ta_vl32 (float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f64m2_ta_vl32 )?} 1 } } */
vfloat64m2_t
test_vloxei64_v_f64m2_tu_vl32 (vfloat64m2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_f64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_f64m2_tu_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei64_v_f16m1_ta_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f16m1_ta_vl32 )?} 1 } } */
vfloat16m1_t
test_vloxei64_v_f16m1_tu_vl32 (vfloat16m1_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f16m1_tu_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei64_v_f32m2_ta_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f32m2_ta_vl32 )?} 1 } } */
vfloat32m2_t
test_vloxei64_v_f32m2_tu_vl32 (vfloat32m2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f32m2_tu_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei64_v_f64m4_ta_vl32 (float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f64m4_ta_vl32 )?} 1 } } */
vfloat64m4_t
test_vloxei64_v_f64m4_tu_vl32 (vfloat64m4_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_f64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_f64m4_tu_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei64_v_f16m2_ta_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f16m2_ta_vl32 )?} 1 } } */
vfloat16m2_t
test_vloxei64_v_f16m2_tu_vl32 (vfloat16m2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f16m2_tu_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei64_v_f32m4_ta_vl32 (float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f32m4_ta_vl32 )?} 1 } } */
vfloat32m4_t
test_vloxei64_v_f32m4_tu_vl32 (vfloat32m4_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f32m4_tu_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei64_v_f64m8_ta_vl32 (float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f64m8_ta_vl32 )?} 1 } } */
vfloat64m8_t
test_vloxei64_v_f64m8_tu_vl32 (vfloat64m8_t dest, float64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_f64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_f64m8_tu_vl32 )?} 1 } } */
