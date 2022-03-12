
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsoxei8_v_f16mf4 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei8_v_f16mf4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16mf4 )?} 1 } } */
void
test_vsoxei8_v_f16mf4_vl31 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0)
{
  vsoxei8_v_f16mf4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei8_v_f16mf4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16mf4_m )?} 1 } } */
void
test_vsoxei8_v_f16mf4_m_vl31 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0)
{
  vsoxei8_v_f16mf4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16mf4_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32mf2 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei8_v_f32mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32mf2 )?} 1 } } */
void
test_vsoxei8_v_f32mf2_vl31 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0)
{
  vsoxei8_v_f32mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei8_v_f32mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32mf2_m )?} 1 } } */
void
test_vsoxei8_v_f32mf2_m_vl31 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0)
{
  vsoxei8_v_f32mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32mf2_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m1 (float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei8_v_f64m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m1 )?} 1 } } */
void
test_vsoxei8_v_f64m1_vl31 (float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0)
{
  vsoxei8_v_f64m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei8_v_f64m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m1_m )?} 1 } } */
void
test_vsoxei8_v_f64m1_m_vl31 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0)
{
  vsoxei8_v_f64m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m1_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16mf2 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei8_v_f16mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16mf2 )?} 1 } } */
void
test_vsoxei8_v_f16mf2_vl31 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0)
{
  vsoxei8_v_f16mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei8_v_f16mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16mf2_m )?} 1 } } */
void
test_vsoxei8_v_f16mf2_m_vl31 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0)
{
  vsoxei8_v_f16mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16mf2_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m1 (float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei8_v_f32m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m1 )?} 1 } } */
void
test_vsoxei8_v_f32m1_vl31 (float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0)
{
  vsoxei8_v_f32m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei8_v_f32m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m1_m )?} 1 } } */
void
test_vsoxei8_v_f32m1_m_vl31 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0)
{
  vsoxei8_v_f32m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m1_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m2 (float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei8_v_f64m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m2 )?} 1 } } */
void
test_vsoxei8_v_f64m2_vl31 (float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0)
{
  vsoxei8_v_f64m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m2_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m2_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei8_v_f64m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m2_m )?} 1 } } */
void
test_vsoxei8_v_f64m2_m_vl31 (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0)
{
  vsoxei8_v_f64m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m2_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m1 (float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei8_v_f16m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16m1 )?} 1 } } */
void
test_vsoxei8_v_f16m1_vl31 (float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0)
{
  vsoxei8_v_f16m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei8_v_f16m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16m1_m )?} 1 } } */
void
test_vsoxei8_v_f16m1_m_vl31 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0)
{
  vsoxei8_v_f16m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16m1_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m2 (float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei8_v_f32m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m2 )?} 1 } } */
void
test_vsoxei8_v_f32m2_vl31 (float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0)
{
  vsoxei8_v_f32m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m2_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m2_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei8_v_f32m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m2_m )?} 1 } } */
void
test_vsoxei8_v_f32m2_m_vl31 (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0)
{
  vsoxei8_v_f32m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m2_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m4 (float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei8_v_f64m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m4 )?} 1 } } */
void
test_vsoxei8_v_f64m4_vl31 (float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0)
{
  vsoxei8_v_f64m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m4_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m4_m (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei8_v_f64m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m4_m )?} 1 } } */
void
test_vsoxei8_v_f64m4_m_vl31 (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0)
{
  vsoxei8_v_f64m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m4_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m2 (float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei8_v_f16m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16m2 )?} 1 } } */
void
test_vsoxei8_v_f16m2_vl31 (float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0)
{
  vsoxei8_v_f16m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f16m2_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m2_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei8_v_f16m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16m2_m )?} 1 } } */
void
test_vsoxei8_v_f16m2_m_vl31 (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0)
{
  vsoxei8_v_f16m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f16m2_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m4 (float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei8_v_f32m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m4 )?} 1 } } */
void
test_vsoxei8_v_f32m4_vl31 (float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0)
{
  vsoxei8_v_f32m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f32m4_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m4_m (vbool8_t mask, float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei8_v_f32m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m4_m )?} 1 } } */
void
test_vsoxei8_v_f32m4_m_vl31 (vbool8_t mask, float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0)
{
  vsoxei8_v_f32m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f32m4_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m8 (float64_t *base, vuint8m1_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei8_v_f64m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m8 )?} 1 } } */
void
test_vsoxei8_v_f64m8_vl31 (float64_t *base, vuint8m1_t bindex, vfloat64m8_t v0)
{
  vsoxei8_v_f64m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei8_v_f64m8_vl31 )?} 1 } } */
void
test_vsoxei8_v_f64m8_m (vbool8_t mask, float64_t *base, vuint8m1_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei8_v_f64m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m8_m )?} 1 } } */
void
test_vsoxei8_v_f64m8_m_vl31 (vbool8_t mask, float64_t *base, vuint8m1_t bindex, vfloat64m8_t v0)
{
  vsoxei8_v_f64m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei8_v_f64m8_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m4 (float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei8_v_f16m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei8_v_f16m4 )?} 1 } } */
void
test_vsoxei8_v_f16m4_vl31 (float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0)
{
  vsoxei8_v_f16m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei8_v_f16m4_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m4_m (vbool4_t mask, float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei8_v_f16m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei8_v_f16m4_m )?} 1 } } */
void
test_vsoxei8_v_f16m4_m_vl31 (vbool4_t mask, float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0)
{
  vsoxei8_v_f16m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei8_v_f16m4_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m8 (float32_t *base, vuint8m2_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei8_v_f32m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei8_v_f32m8 )?} 1 } } */
void
test_vsoxei8_v_f32m8_vl31 (float32_t *base, vuint8m2_t bindex, vfloat32m8_t v0)
{
  vsoxei8_v_f32m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei8_v_f32m8_vl31 )?} 1 } } */
void
test_vsoxei8_v_f32m8_m (vbool4_t mask, float32_t *base, vuint8m2_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei8_v_f32m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei8_v_f32m8_m )?} 1 } } */
void
test_vsoxei8_v_f32m8_m_vl31 (vbool4_t mask, float32_t *base, vuint8m2_t bindex, vfloat32m8_t v0)
{
  vsoxei8_v_f32m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei8_v_f32m8_m_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m8 (float16_t *base, vuint8m4_t bindex, vfloat16m8_t v0, size_t vl)
{
  vsoxei8_v_f16m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei8_v_f16m8 )?} 1 } } */
void
test_vsoxei8_v_f16m8_vl31 (float16_t *base, vuint8m4_t bindex, vfloat16m8_t v0)
{
  vsoxei8_v_f16m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei8_v_f16m8_vl31 )?} 1 } } */
void
test_vsoxei8_v_f16m8_m (vbool2_t mask, float16_t *base, vuint8m4_t bindex, vfloat16m8_t v0, size_t vl)
{
  vsoxei8_v_f16m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei8_v_f16m8_m )?} 1 } } */
void
test_vsoxei8_v_f16m8_m_vl31 (vbool2_t mask, float16_t *base, vuint8m4_t bindex, vfloat16m8_t v0)
{
  vsoxei8_v_f16m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei8_v_f16m8_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16mf4 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei16_v_f16mf4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16mf4 )?} 1 } } */
void
test_vsoxei16_v_f16mf4_vl31 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0)
{
  vsoxei16_v_f16mf4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei16_v_f16mf4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16mf4_m )?} 1 } } */
void
test_vsoxei16_v_f16mf4_m_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0)
{
  vsoxei16_v_f16mf4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16mf4_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32mf2 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei16_v_f32mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32mf2 )?} 1 } } */
void
test_vsoxei16_v_f32mf2_vl31 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0)
{
  vsoxei16_v_f32mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei16_v_f32mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32mf2_m )?} 1 } } */
void
test_vsoxei16_v_f32mf2_m_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0)
{
  vsoxei16_v_f32mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32mf2_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m1 (float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei16_v_f64m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m1 )?} 1 } } */
void
test_vsoxei16_v_f64m1_vl31 (float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0)
{
  vsoxei16_v_f64m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei16_v_f64m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m1_m )?} 1 } } */
void
test_vsoxei16_v_f64m1_m_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0)
{
  vsoxei16_v_f64m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m1_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16mf2 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei16_v_f16mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16mf2 )?} 1 } } */
void
test_vsoxei16_v_f16mf2_vl31 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0)
{
  vsoxei16_v_f16mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei16_v_f16mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16mf2_m )?} 1 } } */
void
test_vsoxei16_v_f16mf2_m_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0)
{
  vsoxei16_v_f16mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16mf2_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m1 (float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei16_v_f32m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32m1 )?} 1 } } */
void
test_vsoxei16_v_f32m1_vl31 (float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0)
{
  vsoxei16_v_f32m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei16_v_f32m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32m1_m )?} 1 } } */
void
test_vsoxei16_v_f32m1_m_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0)
{
  vsoxei16_v_f32m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32m1_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m2 (float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei16_v_f64m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m2 )?} 1 } } */
void
test_vsoxei16_v_f64m2_vl31 (float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0)
{
  vsoxei16_v_f64m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m2_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m2_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei16_v_f64m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m2_m )?} 1 } } */
void
test_vsoxei16_v_f64m2_m_vl31 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0)
{
  vsoxei16_v_f64m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m2_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m1 (float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei16_v_f16m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16m1 )?} 1 } } */
void
test_vsoxei16_v_f16m1_vl31 (float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0)
{
  vsoxei16_v_f16m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei16_v_f16m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16m1_m )?} 1 } } */
void
test_vsoxei16_v_f16m1_m_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0)
{
  vsoxei16_v_f16m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f16m1_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m2 (float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei16_v_f32m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32m2 )?} 1 } } */
void
test_vsoxei16_v_f32m2_vl31 (float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0)
{
  vsoxei16_v_f32m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f32m2_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m2_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei16_v_f32m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32m2_m )?} 1 } } */
void
test_vsoxei16_v_f32m2_m_vl31 (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0)
{
  vsoxei16_v_f32m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f32m2_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m4 (float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei16_v_f64m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m4 )?} 1 } } */
void
test_vsoxei16_v_f64m4_vl31 (float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0)
{
  vsoxei16_v_f64m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei16_v_f64m4_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m4_m (vbool16_t mask, float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei16_v_f64m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m4_m )?} 1 } } */
void
test_vsoxei16_v_f64m4_m_vl31 (vbool16_t mask, float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0)
{
  vsoxei16_v_f64m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei16_v_f64m4_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m2 (float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei16_v_f16m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f16m2 )?} 1 } } */
void
test_vsoxei16_v_f16m2_vl31 (float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0)
{
  vsoxei16_v_f16m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f16m2_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m2_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei16_v_f16m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f16m2_m )?} 1 } } */
void
test_vsoxei16_v_f16m2_m_vl31 (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0)
{
  vsoxei16_v_f16m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f16m2_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m4 (float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei16_v_f32m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f32m4 )?} 1 } } */
void
test_vsoxei16_v_f32m4_vl31 (float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0)
{
  vsoxei16_v_f32m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f32m4_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m4_m (vbool8_t mask, float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei16_v_f32m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f32m4_m )?} 1 } } */
void
test_vsoxei16_v_f32m4_m_vl31 (vbool8_t mask, float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0)
{
  vsoxei16_v_f32m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f32m4_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m8 (float64_t *base, vuint16m2_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei16_v_f64m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f64m8 )?} 1 } } */
void
test_vsoxei16_v_f64m8_vl31 (float64_t *base, vuint16m2_t bindex, vfloat64m8_t v0)
{
  vsoxei16_v_f64m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei16_v_f64m8_vl31 )?} 1 } } */
void
test_vsoxei16_v_f64m8_m (vbool8_t mask, float64_t *base, vuint16m2_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei16_v_f64m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f64m8_m )?} 1 } } */
void
test_vsoxei16_v_f64m8_m_vl31 (vbool8_t mask, float64_t *base, vuint16m2_t bindex, vfloat64m8_t v0)
{
  vsoxei16_v_f64m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei16_v_f64m8_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m4 (float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei16_v_f16m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei16_v_f16m4 )?} 1 } } */
void
test_vsoxei16_v_f16m4_vl31 (float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0)
{
  vsoxei16_v_f16m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei16_v_f16m4_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m4_m (vbool4_t mask, float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei16_v_f16m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei16_v_f16m4_m )?} 1 } } */
void
test_vsoxei16_v_f16m4_m_vl31 (vbool4_t mask, float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0)
{
  vsoxei16_v_f16m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei16_v_f16m4_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m8 (float32_t *base, vuint16m4_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei16_v_f32m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei16_v_f32m8 )?} 1 } } */
void
test_vsoxei16_v_f32m8_vl31 (float32_t *base, vuint16m4_t bindex, vfloat32m8_t v0)
{
  vsoxei16_v_f32m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei16_v_f32m8_vl31 )?} 1 } } */
void
test_vsoxei16_v_f32m8_m (vbool4_t mask, float32_t *base, vuint16m4_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei16_v_f32m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei16_v_f32m8_m )?} 1 } } */
void
test_vsoxei16_v_f32m8_m_vl31 (vbool4_t mask, float32_t *base, vuint16m4_t bindex, vfloat32m8_t v0)
{
  vsoxei16_v_f32m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei16_v_f32m8_m_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m8 (float16_t *base, vuint16m8_t bindex, vfloat16m8_t v0, size_t vl)
{
  vsoxei16_v_f16m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei16_v_f16m8 )?} 1 } } */
void
test_vsoxei16_v_f16m8_vl31 (float16_t *base, vuint16m8_t bindex, vfloat16m8_t v0)
{
  vsoxei16_v_f16m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei16_v_f16m8_vl31 )?} 1 } } */
void
test_vsoxei16_v_f16m8_m (vbool2_t mask, float16_t *base, vuint16m8_t bindex, vfloat16m8_t v0, size_t vl)
{
  vsoxei16_v_f16m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei16_v_f16m8_m )?} 1 } } */
void
test_vsoxei16_v_f16m8_m_vl31 (vbool2_t mask, float16_t *base, vuint16m8_t bindex, vfloat16m8_t v0)
{
  vsoxei16_v_f16m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei16_v_f16m8_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16mf4 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei32_v_f16mf4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f16mf4 )?} 1 } } */
void
test_vsoxei32_v_f16mf4_vl31 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0)
{
  vsoxei32_v_f16mf4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei32_v_f16mf4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f16mf4_m )?} 1 } } */
void
test_vsoxei32_v_f16mf4_m_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0)
{
  vsoxei32_v_f16mf4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f16mf4_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32mf2 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei32_v_f32mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f32mf2 )?} 1 } } */
void
test_vsoxei32_v_f32mf2_vl31 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0)
{
  vsoxei32_v_f32mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei32_v_f32mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f32mf2_m )?} 1 } } */
void
test_vsoxei32_v_f32mf2_m_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0)
{
  vsoxei32_v_f32mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f32mf2_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m1 (float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei32_v_f64m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f64m1 )?} 1 } } */
void
test_vsoxei32_v_f64m1_vl31 (float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0)
{
  vsoxei32_v_f64m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei32_v_f64m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f64m1_m )?} 1 } } */
void
test_vsoxei32_v_f64m1_m_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0)
{
  vsoxei32_v_f64m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f64m1_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16mf2 (float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei32_v_f16mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f16mf2 )?} 1 } } */
void
test_vsoxei32_v_f16mf2_vl31 (float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0)
{
  vsoxei32_v_f16mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei32_v_f16mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f16mf2_m )?} 1 } } */
void
test_vsoxei32_v_f16mf2_m_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0)
{
  vsoxei32_v_f16mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f16mf2_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m1 (float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei32_v_f32m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f32m1 )?} 1 } } */
void
test_vsoxei32_v_f32m1_vl31 (float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0)
{
  vsoxei32_v_f32m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei32_v_f32m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f32m1_m )?} 1 } } */
void
test_vsoxei32_v_f32m1_m_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0)
{
  vsoxei32_v_f32m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f32m1_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m2 (float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei32_v_f64m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f64m2 )?} 1 } } */
void
test_vsoxei32_v_f64m2_vl31 (float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0)
{
  vsoxei32_v_f64m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei32_v_f64m2_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m2_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei32_v_f64m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f64m2_m )?} 1 } } */
void
test_vsoxei32_v_f64m2_m_vl31 (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0)
{
  vsoxei32_v_f64m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei32_v_f64m2_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m1 (float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei32_v_f16m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f16m1 )?} 1 } } */
void
test_vsoxei32_v_f16m1_vl31 (float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0)
{
  vsoxei32_v_f16m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei32_v_f16m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f16m1_m )?} 1 } } */
void
test_vsoxei32_v_f16m1_m_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0)
{
  vsoxei32_v_f16m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f16m1_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m2 (float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei32_v_f32m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f32m2 )?} 1 } } */
void
test_vsoxei32_v_f32m2_vl31 (float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0)
{
  vsoxei32_v_f32m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f32m2_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m2_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei32_v_f32m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f32m2_m )?} 1 } } */
void
test_vsoxei32_v_f32m2_m_vl31 (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0)
{
  vsoxei32_v_f32m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f32m2_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m4 (float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei32_v_f64m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f64m4 )?} 1 } } */
void
test_vsoxei32_v_f64m4_vl31 (float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0)
{
  vsoxei32_v_f64m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei32_v_f64m4_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m4_m (vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei32_v_f64m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f64m4_m )?} 1 } } */
void
test_vsoxei32_v_f64m4_m_vl31 (vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0)
{
  vsoxei32_v_f64m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei32_v_f64m4_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m2 (float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei32_v_f16m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f16m2 )?} 1 } } */
void
test_vsoxei32_v_f16m2_vl31 (float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0)
{
  vsoxei32_v_f16m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f16m2_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m2_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei32_v_f16m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f16m2_m )?} 1 } } */
void
test_vsoxei32_v_f16m2_m_vl31 (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0)
{
  vsoxei32_v_f16m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f16m2_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m4 (float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei32_v_f32m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f32m4 )?} 1 } } */
void
test_vsoxei32_v_f32m4_vl31 (float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0)
{
  vsoxei32_v_f32m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f32m4_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m4_m (vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei32_v_f32m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f32m4_m )?} 1 } } */
void
test_vsoxei32_v_f32m4_m_vl31 (vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0)
{
  vsoxei32_v_f32m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f32m4_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m8 (float64_t *base, vuint32m4_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei32_v_f64m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f64m8 )?} 1 } } */
void
test_vsoxei32_v_f64m8_vl31 (float64_t *base, vuint32m4_t bindex, vfloat64m8_t v0)
{
  vsoxei32_v_f64m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei32_v_f64m8_vl31 )?} 1 } } */
void
test_vsoxei32_v_f64m8_m (vbool8_t mask, float64_t *base, vuint32m4_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei32_v_f64m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f64m8_m )?} 1 } } */
void
test_vsoxei32_v_f64m8_m_vl31 (vbool8_t mask, float64_t *base, vuint32m4_t bindex, vfloat64m8_t v0)
{
  vsoxei32_v_f64m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei32_v_f64m8_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m4 (float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei32_v_f16m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei32_v_f16m4 )?} 1 } } */
void
test_vsoxei32_v_f16m4_vl31 (float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0)
{
  vsoxei32_v_f16m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei32_v_f16m4_vl31 )?} 1 } } */
void
test_vsoxei32_v_f16m4_m (vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0, size_t vl)
{
  vsoxei32_v_f16m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei32_v_f16m4_m )?} 1 } } */
void
test_vsoxei32_v_f16m4_m_vl31 (vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0)
{
  vsoxei32_v_f16m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei32_v_f16m4_m_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m8 (float32_t *base, vuint32m8_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei32_v_f32m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei32_v_f32m8 )?} 1 } } */
void
test_vsoxei32_v_f32m8_vl31 (float32_t *base, vuint32m8_t bindex, vfloat32m8_t v0)
{
  vsoxei32_v_f32m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei32_v_f32m8_vl31 )?} 1 } } */
void
test_vsoxei32_v_f32m8_m (vbool4_t mask, float32_t *base, vuint32m8_t bindex, vfloat32m8_t v0, size_t vl)
{
  vsoxei32_v_f32m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei32_v_f32m8_m )?} 1 } } */
void
test_vsoxei32_v_f32m8_m_vl31 (vbool4_t mask, float32_t *base, vuint32m8_t bindex, vfloat32m8_t v0)
{
  vsoxei32_v_f32m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei32_v_f32m8_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16mf4 (float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei64_v_f16mf4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f16mf4 )?} 1 } } */
void
test_vsoxei64_v_f16mf4_vl31 (float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0)
{
  vsoxei64_v_f16mf4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, size_t vl)
{
  vsoxei64_v_f16mf4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f16mf4_m )?} 1 } } */
void
test_vsoxei64_v_f16mf4_m_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0)
{
  vsoxei64_v_f16mf4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f16mf4_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32mf2 (float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei64_v_f32mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f32mf2 )?} 1 } } */
void
test_vsoxei64_v_f32mf2_vl31 (float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0)
{
  vsoxei64_v_f32mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, size_t vl)
{
  vsoxei64_v_f32mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f32mf2_m )?} 1 } } */
void
test_vsoxei64_v_f32mf2_m_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0)
{
  vsoxei64_v_f32mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f32mf2_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m1 (float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei64_v_f64m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f64m1 )?} 1 } } */
void
test_vsoxei64_v_f64m1_vl31 (float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0)
{
  vsoxei64_v_f64m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsoxei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, size_t vl)
{
  vsoxei64_v_f64m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f64m1_m )?} 1 } } */
void
test_vsoxei64_v_f64m1_m_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0)
{
  vsoxei64_v_f64m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxei64_v_f64m1_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16mf2 (float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei64_v_f16mf2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f16mf2 )?} 1 } } */
void
test_vsoxei64_v_f16mf2_vl31 (float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0)
{
  vsoxei64_v_f16mf2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, size_t vl)
{
  vsoxei64_v_f16mf2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f16mf2_m )?} 1 } } */
void
test_vsoxei64_v_f16mf2_m_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0)
{
  vsoxei64_v_f16mf2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f16mf2_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m1 (float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei64_v_f32m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f32m1 )?} 1 } } */
void
test_vsoxei64_v_f32m1_vl31 (float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0)
{
  vsoxei64_v_f32m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, size_t vl)
{
  vsoxei64_v_f32m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f32m1_m )?} 1 } } */
void
test_vsoxei64_v_f32m1_m_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0)
{
  vsoxei64_v_f32m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f32m1_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m2 (float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei64_v_f64m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f64m2 )?} 1 } } */
void
test_vsoxei64_v_f64m2_vl31 (float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0)
{
  vsoxei64_v_f64m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vsoxei64_v_f64m2_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m2_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, size_t vl)
{
  vsoxei64_v_f64m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f64m2_m )?} 1 } } */
void
test_vsoxei64_v_f64m2_m_vl31 (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0)
{
  vsoxei64_v_f64m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxei64_v_f64m2_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16m1 (float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei64_v_f16m1 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f16m1 )?} 1 } } */
void
test_vsoxei64_v_f16m1_vl31 (float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0)
{
  vsoxei64_v_f16m1 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, size_t vl)
{
  vsoxei64_v_f16m1_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f16m1_m )?} 1 } } */
void
test_vsoxei64_v_f16m1_m_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0)
{
  vsoxei64_v_f16m1_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f16m1_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m2 (float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei64_v_f32m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f32m2 )?} 1 } } */
void
test_vsoxei64_v_f32m2_vl31 (float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0)
{
  vsoxei64_v_f32m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f32m2_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m2_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, size_t vl)
{
  vsoxei64_v_f32m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f32m2_m )?} 1 } } */
void
test_vsoxei64_v_f32m2_m_vl31 (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0)
{
  vsoxei64_v_f32m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f32m2_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m4 (float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei64_v_f64m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f64m4 )?} 1 } } */
void
test_vsoxei64_v_f64m4_vl31 (float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0)
{
  vsoxei64_v_f64m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vsoxei64_v_f64m4_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m4_m (vbool16_t mask, float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0, size_t vl)
{
  vsoxei64_v_f64m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f64m4_m )?} 1 } } */
void
test_vsoxei64_v_f64m4_m_vl31 (vbool16_t mask, float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0)
{
  vsoxei64_v_f64m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxei64_v_f64m4_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16m2 (float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei64_v_f16m2 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f16m2 )?} 1 } } */
void
test_vsoxei64_v_f16m2_vl31 (float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0)
{
  vsoxei64_v_f16m2 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f16m2_vl31 )?} 1 } } */
void
test_vsoxei64_v_f16m2_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, size_t vl)
{
  vsoxei64_v_f16m2_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f16m2_m )?} 1 } } */
void
test_vsoxei64_v_f16m2_m_vl31 (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0)
{
  vsoxei64_v_f16m2_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f16m2_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m4 (float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei64_v_f32m4 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f32m4 )?} 1 } } */
void
test_vsoxei64_v_f32m4_vl31 (float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0)
{
  vsoxei64_v_f32m4 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f32m4_vl31 )?} 1 } } */
void
test_vsoxei64_v_f32m4_m (vbool8_t mask, float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0, size_t vl)
{
  vsoxei64_v_f32m4_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f32m4_m )?} 1 } } */
void
test_vsoxei64_v_f32m4_m_vl31 (vbool8_t mask, float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0)
{
  vsoxei64_v_f32m4_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f32m4_m_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m8 (float64_t *base, vuint64m8_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei64_v_f64m8 (base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f64m8 )?} 1 } } */
void
test_vsoxei64_v_f64m8_vl31 (float64_t *base, vuint64m8_t bindex, vfloat64m8_t v0)
{
  vsoxei64_v_f64m8 (base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vsoxei64_v_f64m8_vl31 )?} 1 } } */
void
test_vsoxei64_v_f64m8_m (vbool8_t mask, float64_t *base, vuint64m8_t bindex, vfloat64m8_t v0, size_t vl)
{
  vsoxei64_v_f64m8_m (mask, base, bindex, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f64m8_m )?} 1 } } */
void
test_vsoxei64_v_f64m8_m_vl31 (vbool8_t mask, float64_t *base, vuint64m8_t bindex, vfloat64m8_t v0)
{
  vsoxei64_v_f64m8_m (mask, base, bindex, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsoxei..?\.v).)*\s+vsoxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxei64_v_f64m8_m_vl31 )?} 1 } } */
