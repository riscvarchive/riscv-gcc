
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test_vle16_v_f16mf4 (float16_t *base, size_t vl)
{
  return vle16_v_f16mf4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16mf4 )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_vl31 (float16_t *base)
{
  return vle16_v_f16mf4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16mf4_vl31 )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_m (vbool64_t mask, vfloat16mf4_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16mf4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_m )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_m_vl31 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base)
{
  return vle16_v_f16mf4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_m_vl31 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2 (float16_t *base, size_t vl)
{
  return vle16_v_f16mf2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16mf2 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_vl31 (float16_t *base)
{
  return vle16_v_f16mf2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16mf2_vl31 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_m (vbool32_t mask, vfloat16mf2_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16mf2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_m )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_m_vl31 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base)
{
  return vle16_v_f16mf2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_m_vl31 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1 (float16_t *base, size_t vl)
{
  return vle16_v_f16m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m1 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_vl31 (float16_t *base)
{
  return vle16_v_f16m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m1_vl31 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_m (vbool16_t mask, vfloat16m1_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_m )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_m_vl31 (vbool16_t mask, vfloat16m1_t dest, float16_t *base)
{
  return vle16_v_f16m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_m_vl31 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2 (float16_t *base, size_t vl)
{
  return vle16_v_f16m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m2 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_vl31 (float16_t *base)
{
  return vle16_v_f16m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m2_vl31 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_m (vbool8_t mask, vfloat16m2_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_m )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_m_vl31 (vbool8_t mask, vfloat16m2_t dest, float16_t *base)
{
  return vle16_v_f16m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_m_vl31 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4 (float16_t *base, size_t vl)
{
  return vle16_v_f16m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m4 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_vl31 (float16_t *base)
{
  return vle16_v_f16m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m4_vl31 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_m (vbool4_t mask, vfloat16m4_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_m )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_m_vl31 (vbool4_t mask, vfloat16m4_t dest, float16_t *base)
{
  return vle16_v_f16m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_m_vl31 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8 (float16_t *base, size_t vl)
{
  return vle16_v_f16m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m8 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_vl31 (float16_t *base)
{
  return vle16_v_f16m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_f16m8_vl31 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_m (vbool2_t mask, vfloat16m8_t dest, float16_t *base, size_t vl)
{
  return vle16_v_f16m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_m )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_m_vl31 (vbool2_t mask, vfloat16m8_t dest, float16_t *base)
{
  return vle16_v_f16m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_m_vl31 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2 (float32_t *base, size_t vl)
{
  return vle32_v_f32mf2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32mf2 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_vl31 (float32_t *base)
{
  return vle32_v_f32mf2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32mf2_vl31 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_m (vbool64_t mask, vfloat32mf2_t dest, float32_t *base, size_t vl)
{
  return vle32_v_f32mf2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_m )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_m_vl31 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base)
{
  return vle32_v_f32mf2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_m_vl31 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1 (float32_t *base, size_t vl)
{
  return vle32_v_f32m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m1 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_vl31 (float32_t *base)
{
  return vle32_v_f32m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m1_vl31 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_m (vbool32_t mask, vfloat32m1_t dest, float32_t *base, size_t vl)
{
  return vle32_v_f32m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_m )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_m_vl31 (vbool32_t mask, vfloat32m1_t dest, float32_t *base)
{
  return vle32_v_f32m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_m_vl31 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2 (float32_t *base, size_t vl)
{
  return vle32_v_f32m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m2 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_vl31 (float32_t *base)
{
  return vle32_v_f32m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m2_vl31 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_m (vbool16_t mask, vfloat32m2_t dest, float32_t *base, size_t vl)
{
  return vle32_v_f32m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_m )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_m_vl31 (vbool16_t mask, vfloat32m2_t dest, float32_t *base)
{
  return vle32_v_f32m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_m_vl31 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4 (float32_t *base, size_t vl)
{
  return vle32_v_f32m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m4 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_vl31 (float32_t *base)
{
  return vle32_v_f32m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m4_vl31 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_m (vbool8_t mask, vfloat32m4_t dest, float32_t *base, size_t vl)
{
  return vle32_v_f32m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_m )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_m_vl31 (vbool8_t mask, vfloat32m4_t dest, float32_t *base)
{
  return vle32_v_f32m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_m_vl31 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8 (float32_t *base, size_t vl)
{
  return vle32_v_f32m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m8 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_vl31 (float32_t *base)
{
  return vle32_v_f32m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_f32m8_vl31 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_m (vbool4_t mask, vfloat32m8_t dest, float32_t *base, size_t vl)
{
  return vle32_v_f32m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_m )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_m_vl31 (vbool4_t mask, vfloat32m8_t dest, float32_t *base)
{
  return vle32_v_f32m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_m_vl31 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1 (float64_t *base, size_t vl)
{
  return vle64_v_f64m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m1 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_vl31 (float64_t *base)
{
  return vle64_v_f64m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m1_vl31 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_m (vbool64_t mask, vfloat64m1_t dest, float64_t *base, size_t vl)
{
  return vle64_v_f64m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_m )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_m_vl31 (vbool64_t mask, vfloat64m1_t dest, float64_t *base)
{
  return vle64_v_f64m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_m_vl31 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2 (float64_t *base, size_t vl)
{
  return vle64_v_f64m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m2 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_vl31 (float64_t *base)
{
  return vle64_v_f64m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m2_vl31 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_m (vbool32_t mask, vfloat64m2_t dest, float64_t *base, size_t vl)
{
  return vle64_v_f64m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_m )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_m_vl31 (vbool32_t mask, vfloat64m2_t dest, float64_t *base)
{
  return vle64_v_f64m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_m_vl31 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4 (float64_t *base, size_t vl)
{
  return vle64_v_f64m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m4 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_vl31 (float64_t *base)
{
  return vle64_v_f64m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m4_vl31 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_m (vbool16_t mask, vfloat64m4_t dest, float64_t *base, size_t vl)
{
  return vle64_v_f64m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_m )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_m_vl31 (vbool16_t mask, vfloat64m4_t dest, float64_t *base)
{
  return vle64_v_f64m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_m_vl31 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8 (float64_t *base, size_t vl)
{
  return vle64_v_f64m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m8 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_vl31 (float64_t *base)
{
  return vle64_v_f64m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_f64m8_vl31 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_m (vbool8_t mask, vfloat64m8_t dest, float64_t *base, size_t vl)
{
  return vle64_v_f64m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_m )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_m_vl31 (vbool8_t mask, vfloat64m8_t dest, float64_t *base)
{
  return vle64_v_f64m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_m_vl31 )?} 1 } } */
