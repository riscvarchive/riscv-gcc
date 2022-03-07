
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vssseg2e16_v_f16mf4x2 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf4x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16mf4x2 )?} 1 } } */
void
test_vssseg2e16_v_f16mf4x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16mf4x2_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16mf4x2_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf4x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16mf4x2_m )?} 1 } } */
void
test_vssseg2e16_v_f16mf4x2_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16mf4x2_m_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16mf4x3 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf4x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16mf4x3 )?} 1 } } */
void
test_vssseg3e16_v_f16mf4x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16mf4x3_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16mf4x3_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf4x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16mf4x3_m )?} 1 } } */
void
test_vssseg3e16_v_f16mf4x3_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16mf4x3_m_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16mf4x4 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf4x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16mf4x4 )?} 1 } } */
void
test_vssseg4e16_v_f16mf4x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16mf4x4_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16mf4x4_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf4x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16mf4x4_m )?} 1 } } */
void
test_vssseg4e16_v_f16mf4x4_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16mf4x4_m_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16mf4x5 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf4x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16mf4x5 )?} 1 } } */
void
test_vssseg5e16_v_f16mf4x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16mf4x5_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16mf4x5_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf4x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16mf4x5_m )?} 1 } } */
void
test_vssseg5e16_v_f16mf4x5_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16mf4x5_m_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16mf4x6 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf4x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16mf4x6 )?} 1 } } */
void
test_vssseg6e16_v_f16mf4x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16mf4x6_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16mf4x6_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf4x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16mf4x6_m )?} 1 } } */
void
test_vssseg6e16_v_f16mf4x6_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16mf4x6_m_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16mf4x7 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf4x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16mf4x7 )?} 1 } } */
void
test_vssseg7e16_v_f16mf4x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16mf4x7_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16mf4x7_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf4x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16mf4x7_m )?} 1 } } */
void
test_vssseg7e16_v_f16mf4x7_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16mf4x7_m_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16mf4x8 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf4x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16mf4x8 )?} 1 } } */
void
test_vssseg8e16_v_f16mf4x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16mf4x8_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16mf4x8_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf4x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16mf4x8_m )?} 1 } } */
void
test_vssseg8e16_v_f16mf4x8_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16mf4x8_m_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16mf2x2 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf2x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16mf2x2 )?} 1 } } */
void
test_vssseg2e16_v_f16mf2x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16mf2x2_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16mf2x2_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf2x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16mf2x2_m )?} 1 } } */
void
test_vssseg2e16_v_f16mf2x2_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16mf2x2_m_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16mf2x3 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf2x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16mf2x3 )?} 1 } } */
void
test_vssseg3e16_v_f16mf2x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16mf2x3_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16mf2x3_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf2x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16mf2x3_m )?} 1 } } */
void
test_vssseg3e16_v_f16mf2x3_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16mf2x3_m_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16mf2x4 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf2x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16mf2x4 )?} 1 } } */
void
test_vssseg4e16_v_f16mf2x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16mf2x4_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16mf2x4_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf2x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16mf2x4_m )?} 1 } } */
void
test_vssseg4e16_v_f16mf2x4_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16mf2x4_m_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16mf2x5 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf2x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16mf2x5 )?} 1 } } */
void
test_vssseg5e16_v_f16mf2x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16mf2x5_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16mf2x5_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf2x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16mf2x5_m )?} 1 } } */
void
test_vssseg5e16_v_f16mf2x5_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16mf2x5_m_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16mf2x6 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf2x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16mf2x6 )?} 1 } } */
void
test_vssseg6e16_v_f16mf2x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16mf2x6_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16mf2x6_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf2x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16mf2x6_m )?} 1 } } */
void
test_vssseg6e16_v_f16mf2x6_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16mf2x6_m_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16mf2x7 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf2x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16mf2x7 )?} 1 } } */
void
test_vssseg7e16_v_f16mf2x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16mf2x7_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16mf2x7_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf2x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16mf2x7_m )?} 1 } } */
void
test_vssseg7e16_v_f16mf2x7_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16mf2x7_m_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16mf2x8 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf2x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16mf2x8 )?} 1 } } */
void
test_vssseg8e16_v_f16mf2x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16mf2x8_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16mf2x8_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf2x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16mf2x8_m )?} 1 } } */
void
test_vssseg8e16_v_f16mf2x8_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16mf2x8_m_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m1x2 (float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m1x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m1x2 )?} 1 } } */
void
test_vssseg2e16_v_f16m1x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m1x2_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m1x2_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m1x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m1x2_m )?} 1 } } */
void
test_vssseg2e16_v_f16m1x2_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m1x2_m_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16m1x3 (float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m1x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16m1x3 )?} 1 } } */
void
test_vssseg3e16_v_f16m1x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16m1x3_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16m1x3_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m1x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16m1x3_m )?} 1 } } */
void
test_vssseg3e16_v_f16m1x3_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16m1x3_m_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16m1x4 (float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m1x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16m1x4 )?} 1 } } */
void
test_vssseg4e16_v_f16m1x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16m1x4_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16m1x4_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m1x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16m1x4_m )?} 1 } } */
void
test_vssseg4e16_v_f16m1x4_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16m1x4_m_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16m1x5 (float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_f16m1x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16m1x5 )?} 1 } } */
void
test_vssseg5e16_v_f16m1x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e16_v_f16m1x5_vl31 )?} 1 } } */
void
test_vssseg5e16_v_f16m1x5_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_f16m1x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16m1x5_m )?} 1 } } */
void
test_vssseg5e16_v_f16m1x5_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e16_v_f16m1x5_m_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16m1x6 (float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_f16m1x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16m1x6 )?} 1 } } */
void
test_vssseg6e16_v_f16m1x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e16_v_f16m1x6_vl31 )?} 1 } } */
void
test_vssseg6e16_v_f16m1x6_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_f16m1x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16m1x6_m )?} 1 } } */
void
test_vssseg6e16_v_f16m1x6_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e16_v_f16m1x6_m_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16m1x7 (float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_f16m1x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16m1x7 )?} 1 } } */
void
test_vssseg7e16_v_f16m1x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e16_v_f16m1x7_vl31 )?} 1 } } */
void
test_vssseg7e16_v_f16m1x7_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_f16m1x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16m1x7_m )?} 1 } } */
void
test_vssseg7e16_v_f16m1x7_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e16_v_f16m1x7_m_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16m1x8 (float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_f16m1x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16m1x8 )?} 1 } } */
void
test_vssseg8e16_v_f16m1x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e16_v_f16m1x8_vl31 )?} 1 } } */
void
test_vssseg8e16_v_f16m1x8_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_f16m1x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16m1x8_m )?} 1 } } */
void
test_vssseg8e16_v_f16m1x8_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e16_v_f16m1x8_m_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m2x2 (float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m2x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m2x2 )?} 1 } } */
void
test_vssseg2e16_v_f16m2x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m2x2_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m2x2_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m2x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m2x2_m )?} 1 } } */
void
test_vssseg2e16_v_f16m2x2_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m2x2_m_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16m2x3 (float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m2x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16m2x3 )?} 1 } } */
void
test_vssseg3e16_v_f16m2x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e16_v_f16m2x3_vl31 )?} 1 } } */
void
test_vssseg3e16_v_f16m2x3_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m2x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16m2x3_m )?} 1 } } */
void
test_vssseg3e16_v_f16m2x3_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e16_v_f16m2x3_m_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16m2x4 (float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m2x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16m2x4 )?} 1 } } */
void
test_vssseg4e16_v_f16m2x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e16_v_f16m2x4_vl31 )?} 1 } } */
void
test_vssseg4e16_v_f16m2x4_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m2x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16m2x4_m )?} 1 } } */
void
test_vssseg4e16_v_f16m2x4_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e16_v_f16m2x4_m_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m4x2 (float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m4x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m4x2 )?} 1 } } */
void
test_vssseg2e16_v_f16m4x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e16_v_f16m4x2_vl31 )?} 1 } } */
void
test_vssseg2e16_v_f16m4x2_m (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m4x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m4x2_m )?} 1 } } */
void
test_vssseg2e16_v_f16m4x2_m_vl31 (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e16_v_f16m4x2_m_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32mf2x2 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32mf2x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32mf2x2 )?} 1 } } */
void
test_vssseg2e32_v_f32mf2x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32mf2x2_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32mf2x2_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32mf2x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32mf2x2_m )?} 1 } } */
void
test_vssseg2e32_v_f32mf2x2_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32mf2x2_m_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32mf2x3 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32mf2x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32mf2x3 )?} 1 } } */
void
test_vssseg3e32_v_f32mf2x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32mf2x3_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32mf2x3_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32mf2x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32mf2x3_m )?} 1 } } */
void
test_vssseg3e32_v_f32mf2x3_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32mf2x3_m_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32mf2x4 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32mf2x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32mf2x4 )?} 1 } } */
void
test_vssseg4e32_v_f32mf2x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32mf2x4_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32mf2x4_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32mf2x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32mf2x4_m )?} 1 } } */
void
test_vssseg4e32_v_f32mf2x4_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32mf2x4_m_vl31 )?} 1 } } */
void
test_vssseg5e32_v_f32mf2x5 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_f32mf2x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e32_v_f32mf2x5 )?} 1 } } */
void
test_vssseg5e32_v_f32mf2x5_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e32_v_f32mf2x5_vl31 )?} 1 } } */
void
test_vssseg5e32_v_f32mf2x5_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_f32mf2x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e32_v_f32mf2x5_m )?} 1 } } */
void
test_vssseg5e32_v_f32mf2x5_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e32_v_f32mf2x5_m_vl31 )?} 1 } } */
void
test_vssseg6e32_v_f32mf2x6 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_f32mf2x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e32_v_f32mf2x6 )?} 1 } } */
void
test_vssseg6e32_v_f32mf2x6_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e32_v_f32mf2x6_vl31 )?} 1 } } */
void
test_vssseg6e32_v_f32mf2x6_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_f32mf2x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e32_v_f32mf2x6_m )?} 1 } } */
void
test_vssseg6e32_v_f32mf2x6_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e32_v_f32mf2x6_m_vl31 )?} 1 } } */
void
test_vssseg7e32_v_f32mf2x7 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_f32mf2x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e32_v_f32mf2x7 )?} 1 } } */
void
test_vssseg7e32_v_f32mf2x7_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e32_v_f32mf2x7_vl31 )?} 1 } } */
void
test_vssseg7e32_v_f32mf2x7_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_f32mf2x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e32_v_f32mf2x7_m )?} 1 } } */
void
test_vssseg7e32_v_f32mf2x7_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e32_v_f32mf2x7_m_vl31 )?} 1 } } */
void
test_vssseg8e32_v_f32mf2x8 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_f32mf2x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e32_v_f32mf2x8 )?} 1 } } */
void
test_vssseg8e32_v_f32mf2x8_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e32_v_f32mf2x8_vl31 )?} 1 } } */
void
test_vssseg8e32_v_f32mf2x8_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_f32mf2x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e32_v_f32mf2x8_m )?} 1 } } */
void
test_vssseg8e32_v_f32mf2x8_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e32_v_f32mf2x8_m_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m1x2 (float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m1x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m1x2 )?} 1 } } */
void
test_vssseg2e32_v_f32m1x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m1x2_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m1x2_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m1x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m1x2_m )?} 1 } } */
void
test_vssseg2e32_v_f32m1x2_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m1x2_m_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32m1x3 (float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m1x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32m1x3 )?} 1 } } */
void
test_vssseg3e32_v_f32m1x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32m1x3_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32m1x3_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m1x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32m1x3_m )?} 1 } } */
void
test_vssseg3e32_v_f32m1x3_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32m1x3_m_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32m1x4 (float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m1x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32m1x4 )?} 1 } } */
void
test_vssseg4e32_v_f32m1x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32m1x4_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32m1x4_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m1x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32m1x4_m )?} 1 } } */
void
test_vssseg4e32_v_f32m1x4_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32m1x4_m_vl31 )?} 1 } } */
void
test_vssseg5e32_v_f32m1x5 (float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_f32m1x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e32_v_f32m1x5 )?} 1 } } */
void
test_vssseg5e32_v_f32m1x5_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e32_v_f32m1x5_vl31 )?} 1 } } */
void
test_vssseg5e32_v_f32m1x5_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_f32m1x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e32_v_f32m1x5_m )?} 1 } } */
void
test_vssseg5e32_v_f32m1x5_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e32_v_f32m1x5_m_vl31 )?} 1 } } */
void
test_vssseg6e32_v_f32m1x6 (float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_f32m1x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e32_v_f32m1x6 )?} 1 } } */
void
test_vssseg6e32_v_f32m1x6_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e32_v_f32m1x6_vl31 )?} 1 } } */
void
test_vssseg6e32_v_f32m1x6_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_f32m1x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e32_v_f32m1x6_m )?} 1 } } */
void
test_vssseg6e32_v_f32m1x6_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e32_v_f32m1x6_m_vl31 )?} 1 } } */
void
test_vssseg7e32_v_f32m1x7 (float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_f32m1x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e32_v_f32m1x7 )?} 1 } } */
void
test_vssseg7e32_v_f32m1x7_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e32_v_f32m1x7_vl31 )?} 1 } } */
void
test_vssseg7e32_v_f32m1x7_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_f32m1x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e32_v_f32m1x7_m )?} 1 } } */
void
test_vssseg7e32_v_f32m1x7_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e32_v_f32m1x7_m_vl31 )?} 1 } } */
void
test_vssseg8e32_v_f32m1x8 (float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_f32m1x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e32_v_f32m1x8 )?} 1 } } */
void
test_vssseg8e32_v_f32m1x8_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e32_v_f32m1x8_vl31 )?} 1 } } */
void
test_vssseg8e32_v_f32m1x8_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_f32m1x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e32_v_f32m1x8_m )?} 1 } } */
void
test_vssseg8e32_v_f32m1x8_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e32_v_f32m1x8_m_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m2x2 (float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m2x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m2x2 )?} 1 } } */
void
test_vssseg2e32_v_f32m2x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m2x2_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m2x2_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m2x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m2x2_m )?} 1 } } */
void
test_vssseg2e32_v_f32m2x2_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m2x2_m_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32m2x3 (float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m2x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32m2x3 )?} 1 } } */
void
test_vssseg3e32_v_f32m2x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e32_v_f32m2x3_vl31 )?} 1 } } */
void
test_vssseg3e32_v_f32m2x3_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m2x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32m2x3_m )?} 1 } } */
void
test_vssseg3e32_v_f32m2x3_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e32_v_f32m2x3_m_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32m2x4 (float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m2x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32m2x4 )?} 1 } } */
void
test_vssseg4e32_v_f32m2x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e32_v_f32m2x4_vl31 )?} 1 } } */
void
test_vssseg4e32_v_f32m2x4_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m2x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32m2x4_m )?} 1 } } */
void
test_vssseg4e32_v_f32m2x4_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e32_v_f32m2x4_m_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m4x2 (float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m4x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m4x2 )?} 1 } } */
void
test_vssseg2e32_v_f32m4x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e32_v_f32m4x2_vl31 )?} 1 } } */
void
test_vssseg2e32_v_f32m4x2_m (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m4x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m4x2_m )?} 1 } } */
void
test_vssseg2e32_v_f32m4x2_m_vl31 (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e32_v_f32m4x2_m_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m1x2 (float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m1x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m1x2 )?} 1 } } */
void
test_vssseg2e64_v_f64m1x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m1x2_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m1x2_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m1x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m1x2_m )?} 1 } } */
void
test_vssseg2e64_v_f64m1x2_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m1x2_m_vl31 )?} 1 } } */
void
test_vssseg3e64_v_f64m1x3 (float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m1x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e64_v_f64m1x3 )?} 1 } } */
void
test_vssseg3e64_v_f64m1x3_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e64_v_f64m1x3_vl31 )?} 1 } } */
void
test_vssseg3e64_v_f64m1x3_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m1x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e64_v_f64m1x3_m )?} 1 } } */
void
test_vssseg3e64_v_f64m1x3_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e64_v_f64m1x3_m_vl31 )?} 1 } } */
void
test_vssseg4e64_v_f64m1x4 (float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m1x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e64_v_f64m1x4 )?} 1 } } */
void
test_vssseg4e64_v_f64m1x4_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e64_v_f64m1x4_vl31 )?} 1 } } */
void
test_vssseg4e64_v_f64m1x4_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m1x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e64_v_f64m1x4_m )?} 1 } } */
void
test_vssseg4e64_v_f64m1x4_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e64_v_f64m1x4_m_vl31 )?} 1 } } */
void
test_vssseg5e64_v_f64m1x5 (float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_f64m1x5 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e64_v_f64m1x5 )?} 1 } } */
void
test_vssseg5e64_v_f64m1x5_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg5e64_v_f64m1x5_vl31 )?} 1 } } */
void
test_vssseg5e64_v_f64m1x5_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_f64m1x5_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e64_v_f64m1x5_m )?} 1 } } */
void
test_vssseg5e64_v_f64m1x5_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg5e64_v_f64m1x5_m_vl31 )?} 1 } } */
void
test_vssseg6e64_v_f64m1x6 (float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_f64m1x6 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e64_v_f64m1x6 )?} 1 } } */
void
test_vssseg6e64_v_f64m1x6_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg6e64_v_f64m1x6_vl31 )?} 1 } } */
void
test_vssseg6e64_v_f64m1x6_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_f64m1x6_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e64_v_f64m1x6_m )?} 1 } } */
void
test_vssseg6e64_v_f64m1x6_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg6e64_v_f64m1x6_m_vl31 )?} 1 } } */
void
test_vssseg7e64_v_f64m1x7 (float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_f64m1x7 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e64_v_f64m1x7 )?} 1 } } */
void
test_vssseg7e64_v_f64m1x7_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg7e64_v_f64m1x7_vl31 )?} 1 } } */
void
test_vssseg7e64_v_f64m1x7_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_f64m1x7_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e64_v_f64m1x7_m )?} 1 } } */
void
test_vssseg7e64_v_f64m1x7_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg7e64_v_f64m1x7_m_vl31 )?} 1 } } */
void
test_vssseg8e64_v_f64m1x8 (float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_f64m1x8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e64_v_f64m1x8 )?} 1 } } */
void
test_vssseg8e64_v_f64m1x8_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg8e64_v_f64m1x8_vl31 )?} 1 } } */
void
test_vssseg8e64_v_f64m1x8_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_f64m1x8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e64_v_f64m1x8_m )?} 1 } } */
void
test_vssseg8e64_v_f64m1x8_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg8e64_v_f64m1x8_m_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m2x2 (float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m2x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m2x2 )?} 1 } } */
void
test_vssseg2e64_v_f64m2x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m2x2_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m2x2_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m2x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m2x2_m )?} 1 } } */
void
test_vssseg2e64_v_f64m2x2_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m2x2_m_vl31 )?} 1 } } */
void
test_vssseg3e64_v_f64m2x3 (float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m2x3 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e64_v_f64m2x3 )?} 1 } } */
void
test_vssseg3e64_v_f64m2x3_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg3e64_v_f64m2x3_vl31 )?} 1 } } */
void
test_vssseg3e64_v_f64m2x3_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m2x3_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e64_v_f64m2x3_m )?} 1 } } */
void
test_vssseg3e64_v_f64m2x3_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg3e64_v_f64m2x3_m_vl31 )?} 1 } } */
void
test_vssseg4e64_v_f64m2x4 (float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m2x4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e64_v_f64m2x4 )?} 1 } } */
void
test_vssseg4e64_v_f64m2x4_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg4e64_v_f64m2x4_vl31 )?} 1 } } */
void
test_vssseg4e64_v_f64m2x4_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m2x4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e64_v_f64m2x4_m )?} 1 } } */
void
test_vssseg4e64_v_f64m2x4_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg4e64_v_f64m2x4_m_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m4x2 (float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m4x2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m4x2 )?} 1 } } */
void
test_vssseg2e64_v_f64m4x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vssseg2e64_v_f64m4x2_vl31 )?} 1 } } */
void
test_vssseg2e64_v_f64m4x2_m (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m4x2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m4x2_m )?} 1 } } */
void
test_vssseg2e64_v_f64m4x2_m_vl31 (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vssseg.e..?\.v).)*\s+vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vssseg2e64_v_f64m4x2_m_vl31 )?} 1 } } */
