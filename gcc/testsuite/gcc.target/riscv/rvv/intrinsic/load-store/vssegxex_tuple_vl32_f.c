
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsseg2e16_v_f16mf4x2_vl32 (float16_t *base, vfloat16mf4x2_t v0)
{
  vsseg2e16_v_f16mf4x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_f16mf4x2_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x2_t v0)
{
  vsseg2e16_v_f16mf4x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e16_v_f16mf4x2_m_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16mf4x3_vl32 (float16_t *base, vfloat16mf4x3_t v0)
{
  vsseg3e16_v_f16mf4x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_f16mf4x3_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x3_t v0)
{
  vsseg3e16_v_f16mf4x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e16_v_f16mf4x3_m_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16mf4x4_vl32 (float16_t *base, vfloat16mf4x4_t v0)
{
  vsseg4e16_v_f16mf4x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_f16mf4x4_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x4_t v0)
{
  vsseg4e16_v_f16mf4x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e16_v_f16mf4x4_m_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16mf4x5_vl32 (float16_t *base, vfloat16mf4x5_t v0)
{
  vsseg5e16_v_f16mf4x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_f16mf4x5_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x5_t v0)
{
  vsseg5e16_v_f16mf4x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e16_v_f16mf4x5_m_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16mf4x6_vl32 (float16_t *base, vfloat16mf4x6_t v0)
{
  vsseg6e16_v_f16mf4x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_f16mf4x6_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x6_t v0)
{
  vsseg6e16_v_f16mf4x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e16_v_f16mf4x6_m_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16mf4x7_vl32 (float16_t *base, vfloat16mf4x7_t v0)
{
  vsseg7e16_v_f16mf4x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_f16mf4x7_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x7_t v0)
{
  vsseg7e16_v_f16mf4x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e16_v_f16mf4x7_m_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16mf4x8_vl32 (float16_t *base, vfloat16mf4x8_t v0)
{
  vsseg8e16_v_f16mf4x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_f16mf4x8_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, vfloat16mf4x8_t v0)
{
  vsseg8e16_v_f16mf4x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e16_v_f16mf4x8_m_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16mf2x2_vl32 (float16_t *base, vfloat16mf2x2_t v0)
{
  vsseg2e16_v_f16mf2x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_f16mf2x2_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x2_t v0)
{
  vsseg2e16_v_f16mf2x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e16_v_f16mf2x2_m_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16mf2x3_vl32 (float16_t *base, vfloat16mf2x3_t v0)
{
  vsseg3e16_v_f16mf2x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_f16mf2x3_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x3_t v0)
{
  vsseg3e16_v_f16mf2x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e16_v_f16mf2x3_m_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16mf2x4_vl32 (float16_t *base, vfloat16mf2x4_t v0)
{
  vsseg4e16_v_f16mf2x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_f16mf2x4_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x4_t v0)
{
  vsseg4e16_v_f16mf2x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e16_v_f16mf2x4_m_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16mf2x5_vl32 (float16_t *base, vfloat16mf2x5_t v0)
{
  vsseg5e16_v_f16mf2x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_f16mf2x5_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x5_t v0)
{
  vsseg5e16_v_f16mf2x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e16_v_f16mf2x5_m_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16mf2x6_vl32 (float16_t *base, vfloat16mf2x6_t v0)
{
  vsseg6e16_v_f16mf2x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_f16mf2x6_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x6_t v0)
{
  vsseg6e16_v_f16mf2x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e16_v_f16mf2x6_m_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16mf2x7_vl32 (float16_t *base, vfloat16mf2x7_t v0)
{
  vsseg7e16_v_f16mf2x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_f16mf2x7_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x7_t v0)
{
  vsseg7e16_v_f16mf2x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e16_v_f16mf2x7_m_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16mf2x8_vl32 (float16_t *base, vfloat16mf2x8_t v0)
{
  vsseg8e16_v_f16mf2x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_f16mf2x8_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, vfloat16mf2x8_t v0)
{
  vsseg8e16_v_f16mf2x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e16_v_f16mf2x8_m_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m1x2_vl32 (float16_t *base, vfloat16m1x2_t v0)
{
  vsseg2e16_v_f16m1x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_f16m1x2_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x2_t v0)
{
  vsseg2e16_v_f16m1x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e16_v_f16m1x2_m_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16m1x3_vl32 (float16_t *base, vfloat16m1x3_t v0)
{
  vsseg3e16_v_f16m1x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_f16m1x3_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x3_t v0)
{
  vsseg3e16_v_f16m1x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e16_v_f16m1x3_m_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16m1x4_vl32 (float16_t *base, vfloat16m1x4_t v0)
{
  vsseg4e16_v_f16m1x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_f16m1x4_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x4_t v0)
{
  vsseg4e16_v_f16m1x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e16_v_f16m1x4_m_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16m1x5_vl32 (float16_t *base, vfloat16m1x5_t v0)
{
  vsseg5e16_v_f16m1x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_f16m1x5_vl32 )?} 1 } } */
void
test_vsseg5e16_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x5_t v0)
{
  vsseg5e16_v_f16m1x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e16_v_f16m1x5_m_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16m1x6_vl32 (float16_t *base, vfloat16m1x6_t v0)
{
  vsseg6e16_v_f16m1x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_f16m1x6_vl32 )?} 1 } } */
void
test_vsseg6e16_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x6_t v0)
{
  vsseg6e16_v_f16m1x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e16_v_f16m1x6_m_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16m1x7_vl32 (float16_t *base, vfloat16m1x7_t v0)
{
  vsseg7e16_v_f16m1x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_f16m1x7_vl32 )?} 1 } } */
void
test_vsseg7e16_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x7_t v0)
{
  vsseg7e16_v_f16m1x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e16_v_f16m1x7_m_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16m1x8_vl32 (float16_t *base, vfloat16m1x8_t v0)
{
  vsseg8e16_v_f16m1x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_f16m1x8_vl32 )?} 1 } } */
void
test_vsseg8e16_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, vfloat16m1x8_t v0)
{
  vsseg8e16_v_f16m1x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e16_v_f16m1x8_m_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m2x2_vl32 (float16_t *base, vfloat16m2x2_t v0)
{
  vsseg2e16_v_f16m2x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_f16m2x2_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, vfloat16m2x2_t v0)
{
  vsseg2e16_v_f16m2x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e16_v_f16m2x2_m_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16m2x3_vl32 (float16_t *base, vfloat16m2x3_t v0)
{
  vsseg3e16_v_f16m2x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_f16m2x3_vl32 )?} 1 } } */
void
test_vsseg3e16_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, vfloat16m2x3_t v0)
{
  vsseg3e16_v_f16m2x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e16_v_f16m2x3_m_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16m2x4_vl32 (float16_t *base, vfloat16m2x4_t v0)
{
  vsseg4e16_v_f16m2x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_f16m2x4_vl32 )?} 1 } } */
void
test_vsseg4e16_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, vfloat16m2x4_t v0)
{
  vsseg4e16_v_f16m2x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e16_v_f16m2x4_m_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m4x2_vl32 (float16_t *base, vfloat16m4x2_t v0)
{
  vsseg2e16_v_f16m4x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_f16m4x2_vl32 )?} 1 } } */
void
test_vsseg2e16_v_f16m4x2_m_vl32 (vbool4_t mask, float16_t *base, vfloat16m4x2_t v0)
{
  vsseg2e16_v_f16m4x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e16_v_f16m4x2_m_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32mf2x2_vl32 (float32_t *base, vfloat32mf2x2_t v0)
{
  vsseg2e32_v_f32mf2x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_f32mf2x2_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x2_t v0)
{
  vsseg2e32_v_f32mf2x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e32_v_f32mf2x2_m_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32mf2x3_vl32 (float32_t *base, vfloat32mf2x3_t v0)
{
  vsseg3e32_v_f32mf2x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_f32mf2x3_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x3_t v0)
{
  vsseg3e32_v_f32mf2x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e32_v_f32mf2x3_m_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32mf2x4_vl32 (float32_t *base, vfloat32mf2x4_t v0)
{
  vsseg4e32_v_f32mf2x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_f32mf2x4_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x4_t v0)
{
  vsseg4e32_v_f32mf2x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e32_v_f32mf2x4_m_vl32 )?} 1 } } */
void
test_vsseg5e32_v_f32mf2x5_vl32 (float32_t *base, vfloat32mf2x5_t v0)
{
  vsseg5e32_v_f32mf2x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_f32mf2x5_vl32 )?} 1 } } */
void
test_vsseg5e32_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x5_t v0)
{
  vsseg5e32_v_f32mf2x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e32_v_f32mf2x5_m_vl32 )?} 1 } } */
void
test_vsseg6e32_v_f32mf2x6_vl32 (float32_t *base, vfloat32mf2x6_t v0)
{
  vsseg6e32_v_f32mf2x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_f32mf2x6_vl32 )?} 1 } } */
void
test_vsseg6e32_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x6_t v0)
{
  vsseg6e32_v_f32mf2x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e32_v_f32mf2x6_m_vl32 )?} 1 } } */
void
test_vsseg7e32_v_f32mf2x7_vl32 (float32_t *base, vfloat32mf2x7_t v0)
{
  vsseg7e32_v_f32mf2x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_f32mf2x7_vl32 )?} 1 } } */
void
test_vsseg7e32_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x7_t v0)
{
  vsseg7e32_v_f32mf2x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e32_v_f32mf2x7_m_vl32 )?} 1 } } */
void
test_vsseg8e32_v_f32mf2x8_vl32 (float32_t *base, vfloat32mf2x8_t v0)
{
  vsseg8e32_v_f32mf2x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_f32mf2x8_vl32 )?} 1 } } */
void
test_vsseg8e32_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, vfloat32mf2x8_t v0)
{
  vsseg8e32_v_f32mf2x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e32_v_f32mf2x8_m_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m1x2_vl32 (float32_t *base, vfloat32m1x2_t v0)
{
  vsseg2e32_v_f32m1x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_f32m1x2_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x2_t v0)
{
  vsseg2e32_v_f32m1x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e32_v_f32m1x2_m_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32m1x3_vl32 (float32_t *base, vfloat32m1x3_t v0)
{
  vsseg3e32_v_f32m1x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_f32m1x3_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x3_t v0)
{
  vsseg3e32_v_f32m1x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e32_v_f32m1x3_m_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32m1x4_vl32 (float32_t *base, vfloat32m1x4_t v0)
{
  vsseg4e32_v_f32m1x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_f32m1x4_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x4_t v0)
{
  vsseg4e32_v_f32m1x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e32_v_f32m1x4_m_vl32 )?} 1 } } */
void
test_vsseg5e32_v_f32m1x5_vl32 (float32_t *base, vfloat32m1x5_t v0)
{
  vsseg5e32_v_f32m1x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_f32m1x5_vl32 )?} 1 } } */
void
test_vsseg5e32_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x5_t v0)
{
  vsseg5e32_v_f32m1x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e32_v_f32m1x5_m_vl32 )?} 1 } } */
void
test_vsseg6e32_v_f32m1x6_vl32 (float32_t *base, vfloat32m1x6_t v0)
{
  vsseg6e32_v_f32m1x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_f32m1x6_vl32 )?} 1 } } */
void
test_vsseg6e32_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x6_t v0)
{
  vsseg6e32_v_f32m1x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e32_v_f32m1x6_m_vl32 )?} 1 } } */
void
test_vsseg7e32_v_f32m1x7_vl32 (float32_t *base, vfloat32m1x7_t v0)
{
  vsseg7e32_v_f32m1x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_f32m1x7_vl32 )?} 1 } } */
void
test_vsseg7e32_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x7_t v0)
{
  vsseg7e32_v_f32m1x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e32_v_f32m1x7_m_vl32 )?} 1 } } */
void
test_vsseg8e32_v_f32m1x8_vl32 (float32_t *base, vfloat32m1x8_t v0)
{
  vsseg8e32_v_f32m1x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_f32m1x8_vl32 )?} 1 } } */
void
test_vsseg8e32_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, vfloat32m1x8_t v0)
{
  vsseg8e32_v_f32m1x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e32_v_f32m1x8_m_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m2x2_vl32 (float32_t *base, vfloat32m2x2_t v0)
{
  vsseg2e32_v_f32m2x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_f32m2x2_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, vfloat32m2x2_t v0)
{
  vsseg2e32_v_f32m2x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e32_v_f32m2x2_m_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32m2x3_vl32 (float32_t *base, vfloat32m2x3_t v0)
{
  vsseg3e32_v_f32m2x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_f32m2x3_vl32 )?} 1 } } */
void
test_vsseg3e32_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, vfloat32m2x3_t v0)
{
  vsseg3e32_v_f32m2x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e32_v_f32m2x3_m_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32m2x4_vl32 (float32_t *base, vfloat32m2x4_t v0)
{
  vsseg4e32_v_f32m2x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_f32m2x4_vl32 )?} 1 } } */
void
test_vsseg4e32_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, vfloat32m2x4_t v0)
{
  vsseg4e32_v_f32m2x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e32_v_f32m2x4_m_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m4x2_vl32 (float32_t *base, vfloat32m4x2_t v0)
{
  vsseg2e32_v_f32m4x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_f32m4x2_vl32 )?} 1 } } */
void
test_vsseg2e32_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, vfloat32m4x2_t v0)
{
  vsseg2e32_v_f32m4x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e32_v_f32m4x2_m_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m1x2_vl32 (float64_t *base, vfloat64m1x2_t v0)
{
  vsseg2e64_v_f64m1x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_f64m1x2_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x2_t v0)
{
  vsseg2e64_v_f64m1x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e64_v_f64m1x2_m_vl32 )?} 1 } } */
void
test_vsseg3e64_v_f64m1x3_vl32 (float64_t *base, vfloat64m1x3_t v0)
{
  vsseg3e64_v_f64m1x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_f64m1x3_vl32 )?} 1 } } */
void
test_vsseg3e64_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x3_t v0)
{
  vsseg3e64_v_f64m1x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e64_v_f64m1x3_m_vl32 )?} 1 } } */
void
test_vsseg4e64_v_f64m1x4_vl32 (float64_t *base, vfloat64m1x4_t v0)
{
  vsseg4e64_v_f64m1x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_f64m1x4_vl32 )?} 1 } } */
void
test_vsseg4e64_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x4_t v0)
{
  vsseg4e64_v_f64m1x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e64_v_f64m1x4_m_vl32 )?} 1 } } */
void
test_vsseg5e64_v_f64m1x5_vl32 (float64_t *base, vfloat64m1x5_t v0)
{
  vsseg5e64_v_f64m1x5 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e64_v_f64m1x5_vl32 )?} 1 } } */
void
test_vsseg5e64_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x5_t v0)
{
  vsseg5e64_v_f64m1x5_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg5e64_v_f64m1x5_m_vl32 )?} 1 } } */
void
test_vsseg6e64_v_f64m1x6_vl32 (float64_t *base, vfloat64m1x6_t v0)
{
  vsseg6e64_v_f64m1x6 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e64_v_f64m1x6_vl32 )?} 1 } } */
void
test_vsseg6e64_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x6_t v0)
{
  vsseg6e64_v_f64m1x6_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg6e64_v_f64m1x6_m_vl32 )?} 1 } } */
void
test_vsseg7e64_v_f64m1x7_vl32 (float64_t *base, vfloat64m1x7_t v0)
{
  vsseg7e64_v_f64m1x7 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e64_v_f64m1x7_vl32 )?} 1 } } */
void
test_vsseg7e64_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x7_t v0)
{
  vsseg7e64_v_f64m1x7_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg7e64_v_f64m1x7_m_vl32 )?} 1 } } */
void
test_vsseg8e64_v_f64m1x8_vl32 (float64_t *base, vfloat64m1x8_t v0)
{
  vsseg8e64_v_f64m1x8 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e64_v_f64m1x8_vl32 )?} 1 } } */
void
test_vsseg8e64_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, vfloat64m1x8_t v0)
{
  vsseg8e64_v_f64m1x8_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg8e64_v_f64m1x8_m_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m2x2_vl32 (float64_t *base, vfloat64m2x2_t v0)
{
  vsseg2e64_v_f64m2x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_f64m2x2_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, vfloat64m2x2_t v0)
{
  vsseg2e64_v_f64m2x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e64_v_f64m2x2_m_vl32 )?} 1 } } */
void
test_vsseg3e64_v_f64m2x3_vl32 (float64_t *base, vfloat64m2x3_t v0)
{
  vsseg3e64_v_f64m2x3 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_f64m2x3_vl32 )?} 1 } } */
void
test_vsseg3e64_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, vfloat64m2x3_t v0)
{
  vsseg3e64_v_f64m2x3_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg3e64_v_f64m2x3_m_vl32 )?} 1 } } */
void
test_vsseg4e64_v_f64m2x4_vl32 (float64_t *base, vfloat64m2x4_t v0)
{
  vsseg4e64_v_f64m2x4 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_f64m2x4_vl32 )?} 1 } } */
void
test_vsseg4e64_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, vfloat64m2x4_t v0)
{
  vsseg4e64_v_f64m2x4_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg4e64_v_f64m2x4_m_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m4x2_vl32 (float64_t *base, vfloat64m4x2_t v0)
{
  vsseg2e64_v_f64m4x2 (base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_f64m4x2_vl32 )?} 1 } } */
void
test_vsseg2e64_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, vfloat64m4x2_t v0)
{
  vsseg2e64_v_f64m4x2_m (mask, base, v0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vsseg2e64_v_f64m4x2_m_vl32 )?} 1 } } */
