
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsuxseg2ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl)
{
  vsuxseg2ei8_v_f16mf4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1)
{
  vsuxseg2ei8_v_f16mf4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, size_t vl)
{
  vsuxseg3ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2)
{
  vsuxseg3ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, size_t vl)
{
  vsuxseg4ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3)
{
  vsuxseg4ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, size_t vl)
{
  vsuxseg5ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4)
{
  vsuxseg5ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl)
{
  vsuxseg6ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5)
{
  vsuxseg6ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl)
{
  vsuxseg7ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6)
{
  vsuxseg7ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl)
{
  vsuxseg8ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16mf4 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7)
{
  vsuxseg8ei8_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl)
{
  vsuxseg2ei8_v_f32mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1)
{
  vsuxseg2ei8_v_f32mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl)
{
  vsuxseg3ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2)
{
  vsuxseg3ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl)
{
  vsuxseg4ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3)
{
  vsuxseg4ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl)
{
  vsuxseg5ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg5ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4)
{
  vsuxseg5ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, size_t vl)
{
  vsuxseg6ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg6ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5)
{
  vsuxseg6ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, size_t vl)
{
  vsuxseg7ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg7ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6)
{
  vsuxseg7ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl)
{
  vsuxseg8ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f32mf2 )?} 1 } } */
void
test_vsuxseg8ei8_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7)
{
  vsuxseg8ei8_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vsuxseg2ei8_v_f64m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1)
{
  vsuxseg2ei8_v_f64m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vsuxseg3ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg3ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2)
{
  vsuxseg3ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vsuxseg4ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg4ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3)
{
  vsuxseg4ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vsuxseg5ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg5ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4)
{
  vsuxseg5ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vsuxseg6ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg6ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5)
{
  vsuxseg6ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vsuxseg7ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg7ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6)
{
  vsuxseg7ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f64m1_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vsuxseg8ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f64m1 )?} 1 } } */
void
test_vsuxseg8ei8_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7)
{
  vsuxseg8ei8_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl)
{
  vsuxseg2ei8_v_f16mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1)
{
  vsuxseg2ei8_v_f16mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, size_t vl)
{
  vsuxseg3ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2)
{
  vsuxseg3ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, size_t vl)
{
  vsuxseg4ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3)
{
  vsuxseg4ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, size_t vl)
{
  vsuxseg5ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4)
{
  vsuxseg5ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl)
{
  vsuxseg6ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5)
{
  vsuxseg6ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl)
{
  vsuxseg7ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6)
{
  vsuxseg7ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl)
{
  vsuxseg8ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16mf2 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7)
{
  vsuxseg8ei8_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vsuxseg2ei8_v_f32m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1)
{
  vsuxseg2ei8_v_f32m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vsuxseg3ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2)
{
  vsuxseg3ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vsuxseg4ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3)
{
  vsuxseg4ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vsuxseg5ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg5ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4)
{
  vsuxseg5ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vsuxseg6ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg6ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5)
{
  vsuxseg6ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vsuxseg7ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg7ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6)
{
  vsuxseg7ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f32m1_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vsuxseg8ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f32m1 )?} 1 } } */
void
test_vsuxseg8ei8_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7)
{
  vsuxseg8ei8_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m2_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vsuxseg2ei8_v_f64m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m2 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1)
{
  vsuxseg2ei8_v_f64m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f64m2_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vsuxseg3ei8_v_f64m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f64m2 )?} 1 } } */
void
test_vsuxseg3ei8_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2)
{
  vsuxseg3ei8_v_f64m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f64m2_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vsuxseg4ei8_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f64m2 )?} 1 } } */
void
test_vsuxseg4ei8_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3)
{
  vsuxseg4ei8_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vsuxseg2ei8_v_f16m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1)
{
  vsuxseg2ei8_v_f16m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vsuxseg3ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2)
{
  vsuxseg3ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vsuxseg4ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3)
{
  vsuxseg4ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vsuxseg5ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg5ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4)
{
  vsuxseg5ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vsuxseg6ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg6ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5)
{
  vsuxseg6ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vsuxseg7ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg7ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6)
{
  vsuxseg7ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16m1_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vsuxseg8ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16m1 )?} 1 } } */
void
test_vsuxseg8ei8_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7)
{
  vsuxseg8ei8_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei8_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m2_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vsuxseg2ei8_v_f32m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m2 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1)
{
  vsuxseg2ei8_v_f32m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32m2_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vsuxseg3ei8_v_f32m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32m2 )?} 1 } } */
void
test_vsuxseg3ei8_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2)
{
  vsuxseg3ei8_v_f32m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32m2_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vsuxseg4ei8_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32m2 )?} 1 } } */
void
test_vsuxseg4ei8_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3)
{
  vsuxseg4ei8_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m4_m (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vsuxseg2ei8_v_f64m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m4 )?} 1 } } */
void
test_vsuxseg2ei8_v_f64m4_vl31_m (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, vfloat64m4_t v0, vfloat64m4_t v1)
{
  vsuxseg2ei8_v_f64m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f64m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m2_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vsuxseg2ei8_v_f16m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m2 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1)
{
  vsuxseg2ei8_v_f16m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16m2_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vsuxseg3ei8_v_f16m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16m2 )?} 1 } } */
void
test_vsuxseg3ei8_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2)
{
  vsuxseg3ei8_v_f16m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei8_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16m2_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vsuxseg4ei8_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16m2 )?} 1 } } */
void
test_vsuxseg4ei8_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3)
{
  vsuxseg4ei8_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei8_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m4_m (vbool8_t mask, float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vsuxseg2ei8_v_f32m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m4 )?} 1 } } */
void
test_vsuxseg2ei8_v_f32m4_vl31_m (vbool8_t mask, float32_t *base, vuint8m1_t bindex, vfloat32m4_t v0, vfloat32m4_t v1)
{
  vsuxseg2ei8_v_f32m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f32m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m4_m (vbool4_t mask, float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vsuxseg2ei8_v_f16m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m4 )?} 1 } } */
void
test_vsuxseg2ei8_v_f16m4_vl31_m (vbool4_t mask, float16_t *base, vuint8m2_t bindex, vfloat16m4_t v0, vfloat16m4_t v1)
{
  vsuxseg2ei8_v_f16m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei8_v_f16m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl)
{
  vsuxseg2ei16_v_f16mf4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1)
{
  vsuxseg2ei16_v_f16mf4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, size_t vl)
{
  vsuxseg3ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2)
{
  vsuxseg3ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, size_t vl)
{
  vsuxseg4ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3)
{
  vsuxseg4ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, size_t vl)
{
  vsuxseg5ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4)
{
  vsuxseg5ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl)
{
  vsuxseg6ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5)
{
  vsuxseg6ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl)
{
  vsuxseg7ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6)
{
  vsuxseg7ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl)
{
  vsuxseg8ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16mf4 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7)
{
  vsuxseg8ei16_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl)
{
  vsuxseg2ei16_v_f32mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1)
{
  vsuxseg2ei16_v_f32mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl)
{
  vsuxseg3ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2)
{
  vsuxseg3ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl)
{
  vsuxseg4ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3)
{
  vsuxseg4ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl)
{
  vsuxseg5ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg5ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4)
{
  vsuxseg5ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, size_t vl)
{
  vsuxseg6ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg6ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5)
{
  vsuxseg6ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, size_t vl)
{
  vsuxseg7ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg7ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6)
{
  vsuxseg7ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl)
{
  vsuxseg8ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f32mf2 )?} 1 } } */
void
test_vsuxseg8ei16_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7)
{
  vsuxseg8ei16_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vsuxseg2ei16_v_f64m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1)
{
  vsuxseg2ei16_v_f64m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vsuxseg3ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg3ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2)
{
  vsuxseg3ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vsuxseg4ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg4ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3)
{
  vsuxseg4ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vsuxseg5ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg5ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4)
{
  vsuxseg5ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vsuxseg6ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg6ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5)
{
  vsuxseg6ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vsuxseg7ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg7ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6)
{
  vsuxseg7ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f64m1_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vsuxseg8ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f64m1 )?} 1 } } */
void
test_vsuxseg8ei16_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7)
{
  vsuxseg8ei16_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl)
{
  vsuxseg2ei16_v_f16mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1)
{
  vsuxseg2ei16_v_f16mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, size_t vl)
{
  vsuxseg3ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2)
{
  vsuxseg3ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, size_t vl)
{
  vsuxseg4ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3)
{
  vsuxseg4ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, size_t vl)
{
  vsuxseg5ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4)
{
  vsuxseg5ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl)
{
  vsuxseg6ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5)
{
  vsuxseg6ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl)
{
  vsuxseg7ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6)
{
  vsuxseg7ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl)
{
  vsuxseg8ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16mf2 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7)
{
  vsuxseg8ei16_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vsuxseg2ei16_v_f32m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1)
{
  vsuxseg2ei16_v_f32m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vsuxseg3ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2)
{
  vsuxseg3ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vsuxseg4ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3)
{
  vsuxseg4ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vsuxseg5ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg5ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4)
{
  vsuxseg5ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vsuxseg6ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg6ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5)
{
  vsuxseg6ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vsuxseg7ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg7ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6)
{
  vsuxseg7ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f32m1_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vsuxseg8ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f32m1 )?} 1 } } */
void
test_vsuxseg8ei16_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7)
{
  vsuxseg8ei16_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m2_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vsuxseg2ei16_v_f64m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m2 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1)
{
  vsuxseg2ei16_v_f64m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f64m2_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vsuxseg3ei16_v_f64m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f64m2 )?} 1 } } */
void
test_vsuxseg3ei16_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2)
{
  vsuxseg3ei16_v_f64m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f64m2_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vsuxseg4ei16_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f64m2 )?} 1 } } */
void
test_vsuxseg4ei16_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3)
{
  vsuxseg4ei16_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vsuxseg2ei16_v_f16m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1)
{
  vsuxseg2ei16_v_f16m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vsuxseg3ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2)
{
  vsuxseg3ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vsuxseg4ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3)
{
  vsuxseg4ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vsuxseg5ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg5ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4)
{
  vsuxseg5ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vsuxseg6ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg6ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5)
{
  vsuxseg6ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vsuxseg7ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg7ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6)
{
  vsuxseg7ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16m1_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vsuxseg8ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16m1 )?} 1 } } */
void
test_vsuxseg8ei16_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7)
{
  vsuxseg8ei16_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei16_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m2_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vsuxseg2ei16_v_f32m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m2 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1)
{
  vsuxseg2ei16_v_f32m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32m2_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vsuxseg3ei16_v_f32m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32m2 )?} 1 } } */
void
test_vsuxseg3ei16_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2)
{
  vsuxseg3ei16_v_f32m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32m2_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vsuxseg4ei16_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32m2 )?} 1 } } */
void
test_vsuxseg4ei16_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3)
{
  vsuxseg4ei16_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m4_m (vbool16_t mask, float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vsuxseg2ei16_v_f64m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m4 )?} 1 } } */
void
test_vsuxseg2ei16_v_f64m4_vl31_m (vbool16_t mask, float64_t *base, vuint16m1_t bindex, vfloat64m4_t v0, vfloat64m4_t v1)
{
  vsuxseg2ei16_v_f64m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f64m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m2_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vsuxseg2ei16_v_f16m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m2 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1)
{
  vsuxseg2ei16_v_f16m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16m2_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vsuxseg3ei16_v_f16m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16m2 )?} 1 } } */
void
test_vsuxseg3ei16_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2)
{
  vsuxseg3ei16_v_f16m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei16_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16m2_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vsuxseg4ei16_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16m2 )?} 1 } } */
void
test_vsuxseg4ei16_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3)
{
  vsuxseg4ei16_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei16_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m4_m (vbool8_t mask, float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vsuxseg2ei16_v_f32m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m4 )?} 1 } } */
void
test_vsuxseg2ei16_v_f32m4_vl31_m (vbool8_t mask, float32_t *base, vuint16m2_t bindex, vfloat32m4_t v0, vfloat32m4_t v1)
{
  vsuxseg2ei16_v_f32m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f32m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m4_m (vbool4_t mask, float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vsuxseg2ei16_v_f16m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m4 )?} 1 } } */
void
test_vsuxseg2ei16_v_f16m4_vl31_m (vbool4_t mask, float16_t *base, vuint16m4_t bindex, vfloat16m4_t v0, vfloat16m4_t v1)
{
  vsuxseg2ei16_v_f16m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei16_v_f16m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl)
{
  vsuxseg2ei32_v_f16mf4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1)
{
  vsuxseg2ei32_v_f16mf4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, size_t vl)
{
  vsuxseg3ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2)
{
  vsuxseg3ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, size_t vl)
{
  vsuxseg4ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3)
{
  vsuxseg4ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, size_t vl)
{
  vsuxseg5ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4)
{
  vsuxseg5ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl)
{
  vsuxseg6ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5)
{
  vsuxseg6ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl)
{
  vsuxseg7ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6)
{
  vsuxseg7ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl)
{
  vsuxseg8ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16mf4 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7)
{
  vsuxseg8ei32_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl)
{
  vsuxseg2ei32_v_f32mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1)
{
  vsuxseg2ei32_v_f32mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl)
{
  vsuxseg3ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2)
{
  vsuxseg3ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl)
{
  vsuxseg4ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3)
{
  vsuxseg4ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl)
{
  vsuxseg5ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg5ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4)
{
  vsuxseg5ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, size_t vl)
{
  vsuxseg6ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg6ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5)
{
  vsuxseg6ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, size_t vl)
{
  vsuxseg7ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg7ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6)
{
  vsuxseg7ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl)
{
  vsuxseg8ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f32mf2 )?} 1 } } */
void
test_vsuxseg8ei32_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7)
{
  vsuxseg8ei32_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vsuxseg2ei32_v_f64m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1)
{
  vsuxseg2ei32_v_f64m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vsuxseg3ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg3ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2)
{
  vsuxseg3ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vsuxseg4ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg4ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3)
{
  vsuxseg4ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vsuxseg5ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg5ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4)
{
  vsuxseg5ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vsuxseg6ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg6ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5)
{
  vsuxseg6ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vsuxseg7ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg7ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6)
{
  vsuxseg7ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f64m1_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vsuxseg8ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f64m1 )?} 1 } } */
void
test_vsuxseg8ei32_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7)
{
  vsuxseg8ei32_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl)
{
  vsuxseg2ei32_v_f16mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1)
{
  vsuxseg2ei32_v_f16mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, size_t vl)
{
  vsuxseg3ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2)
{
  vsuxseg3ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, size_t vl)
{
  vsuxseg4ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3)
{
  vsuxseg4ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, size_t vl)
{
  vsuxseg5ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4)
{
  vsuxseg5ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl)
{
  vsuxseg6ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5)
{
  vsuxseg6ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl)
{
  vsuxseg7ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6)
{
  vsuxseg7ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl)
{
  vsuxseg8ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16mf2 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7)
{
  vsuxseg8ei32_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vsuxseg2ei32_v_f32m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1)
{
  vsuxseg2ei32_v_f32m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vsuxseg3ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2)
{
  vsuxseg3ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vsuxseg4ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3)
{
  vsuxseg4ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vsuxseg5ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg5ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4)
{
  vsuxseg5ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vsuxseg6ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg6ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5)
{
  vsuxseg6ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vsuxseg7ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg7ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6)
{
  vsuxseg7ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f32m1_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vsuxseg8ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f32m1 )?} 1 } } */
void
test_vsuxseg8ei32_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7)
{
  vsuxseg8ei32_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m2_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vsuxseg2ei32_v_f64m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m2 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1)
{
  vsuxseg2ei32_v_f64m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f64m2_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vsuxseg3ei32_v_f64m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f64m2 )?} 1 } } */
void
test_vsuxseg3ei32_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2)
{
  vsuxseg3ei32_v_f64m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f64m2_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vsuxseg4ei32_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f64m2 )?} 1 } } */
void
test_vsuxseg4ei32_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3)
{
  vsuxseg4ei32_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vsuxseg2ei32_v_f16m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1)
{
  vsuxseg2ei32_v_f16m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vsuxseg3ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2)
{
  vsuxseg3ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vsuxseg4ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3)
{
  vsuxseg4ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vsuxseg5ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg5ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4)
{
  vsuxseg5ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vsuxseg6ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg6ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5)
{
  vsuxseg6ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vsuxseg7ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg7ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6)
{
  vsuxseg7ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16m1_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vsuxseg8ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16m1 )?} 1 } } */
void
test_vsuxseg8ei32_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7)
{
  vsuxseg8ei32_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei32_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m2_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vsuxseg2ei32_v_f32m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m2 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1)
{
  vsuxseg2ei32_v_f32m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32m2_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vsuxseg3ei32_v_f32m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32m2 )?} 1 } } */
void
test_vsuxseg3ei32_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2)
{
  vsuxseg3ei32_v_f32m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32m2_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vsuxseg4ei32_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32m2 )?} 1 } } */
void
test_vsuxseg4ei32_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3)
{
  vsuxseg4ei32_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m4_m (vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vsuxseg2ei32_v_f64m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m4 )?} 1 } } */
void
test_vsuxseg2ei32_v_f64m4_vl31_m (vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4_t v0, vfloat64m4_t v1)
{
  vsuxseg2ei32_v_f64m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f64m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m2_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vsuxseg2ei32_v_f16m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m2 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1)
{
  vsuxseg2ei32_v_f16m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16m2_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vsuxseg3ei32_v_f16m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16m2 )?} 1 } } */
void
test_vsuxseg3ei32_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2)
{
  vsuxseg3ei32_v_f16m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei32_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16m2_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vsuxseg4ei32_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16m2 )?} 1 } } */
void
test_vsuxseg4ei32_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3)
{
  vsuxseg4ei32_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei32_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m4_m (vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vsuxseg2ei32_v_f32m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m4 )?} 1 } } */
void
test_vsuxseg2ei32_v_f32m4_vl31_m (vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4_t v0, vfloat32m4_t v1)
{
  vsuxseg2ei32_v_f32m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f32m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m4_m (vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl)
{
  vsuxseg2ei32_v_f16m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m4 )?} 1 } } */
void
test_vsuxseg2ei32_v_f16m4_vl31_m (vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4_t v0, vfloat16m4_t v1)
{
  vsuxseg2ei32_v_f16m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei32_v_f16m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl)
{
  vsuxseg2ei64_v_f16mf4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1)
{
  vsuxseg2ei64_v_f16mf4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, size_t vl)
{
  vsuxseg3ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2)
{
  vsuxseg3ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, size_t vl)
{
  vsuxseg4ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3)
{
  vsuxseg4ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, size_t vl)
{
  vsuxseg5ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4)
{
  vsuxseg5ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, size_t vl)
{
  vsuxseg6ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5)
{
  vsuxseg6ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, size_t vl)
{
  vsuxseg7ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6)
{
  vsuxseg7ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16mf4_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7, size_t vl)
{
  vsuxseg8ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16mf4 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16mf4_vl31_m (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4_t v0, vfloat16mf4_t v1, vfloat16mf4_t v2, vfloat16mf4_t v3, vfloat16mf4_t v4, vfloat16mf4_t v5, vfloat16mf4_t v6, vfloat16mf4_t v7)
{
  vsuxseg8ei64_v_f16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16mf4_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl)
{
  vsuxseg2ei64_v_f32mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1)
{
  vsuxseg2ei64_v_f32mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl)
{
  vsuxseg3ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2)
{
  vsuxseg3ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl)
{
  vsuxseg4ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3)
{
  vsuxseg4ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl)
{
  vsuxseg5ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg5ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4)
{
  vsuxseg5ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, size_t vl)
{
  vsuxseg6ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg6ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5)
{
  vsuxseg6ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, size_t vl)
{
  vsuxseg7ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg7ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6)
{
  vsuxseg7ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f32mf2_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7, size_t vl)
{
  vsuxseg8ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f32mf2 )?} 1 } } */
void
test_vsuxseg8ei64_v_f32mf2_vl31_m (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, vfloat32mf2_t v5, vfloat32mf2_t v6, vfloat32mf2_t v7)
{
  vsuxseg8ei64_v_f32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f32mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl)
{
  vsuxseg2ei64_v_f64m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1)
{
  vsuxseg2ei64_v_f64m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, size_t vl)
{
  vsuxseg3ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg3ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2)
{
  vsuxseg3ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl)
{
  vsuxseg4ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg4ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3)
{
  vsuxseg4ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl)
{
  vsuxseg5ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg5ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4)
{
  vsuxseg5ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl)
{
  vsuxseg6ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg6ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5)
{
  vsuxseg6ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, size_t vl)
{
  vsuxseg7ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg7ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6)
{
  vsuxseg7ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f64m1_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7, size_t vl)
{
  vsuxseg8ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f64m1 )?} 1 } } */
void
test_vsuxseg8ei64_v_f64m1_vl31_m (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, vfloat64m1_t v6, vfloat64m1_t v7)
{
  vsuxseg8ei64_v_f64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f64m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl)
{
  vsuxseg2ei64_v_f16mf2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1)
{
  vsuxseg2ei64_v_f16mf2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, size_t vl)
{
  vsuxseg3ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2)
{
  vsuxseg3ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, size_t vl)
{
  vsuxseg4ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3)
{
  vsuxseg4ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, size_t vl)
{
  vsuxseg5ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4)
{
  vsuxseg5ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, size_t vl)
{
  vsuxseg6ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5)
{
  vsuxseg6ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, size_t vl)
{
  vsuxseg7ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6)
{
  vsuxseg7ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16mf2_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7, size_t vl)
{
  vsuxseg8ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16mf2 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16mf2_vl31_m (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2_t v0, vfloat16mf2_t v1, vfloat16mf2_t v2, vfloat16mf2_t v3, vfloat16mf2_t v4, vfloat16mf2_t v5, vfloat16mf2_t v6, vfloat16mf2_t v7)
{
  vsuxseg8ei64_v_f16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16mf2_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl)
{
  vsuxseg2ei64_v_f32m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1)
{
  vsuxseg2ei64_v_f32m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl)
{
  vsuxseg3ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2)
{
  vsuxseg3ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl)
{
  vsuxseg4ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3)
{
  vsuxseg4ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl)
{
  vsuxseg5ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg5ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4)
{
  vsuxseg5ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, size_t vl)
{
  vsuxseg6ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg6ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5)
{
  vsuxseg6ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, size_t vl)
{
  vsuxseg7ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg7ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6)
{
  vsuxseg7ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f32m1_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7, size_t vl)
{
  vsuxseg8ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f32m1 )?} 1 } } */
void
test_vsuxseg8ei64_v_f32m1_vl31_m (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, vfloat32m1_t v5, vfloat32m1_t v6, vfloat32m1_t v7)
{
  vsuxseg8ei64_v_f32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f32m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m2_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl)
{
  vsuxseg2ei64_v_f64m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m2 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1)
{
  vsuxseg2ei64_v_f64m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f64m2_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, size_t vl)
{
  vsuxseg3ei64_v_f64m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f64m2 )?} 1 } } */
void
test_vsuxseg3ei64_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2)
{
  vsuxseg3ei64_v_f64m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f64m2_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl)
{
  vsuxseg4ei64_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f64m2 )?} 1 } } */
void
test_vsuxseg4ei64_v_f64m2_vl31_m (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3)
{
  vsuxseg4ei64_v_f64m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f64m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl)
{
  vsuxseg2ei64_v_f16m1_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1)
{
  vsuxseg2ei64_v_f16m1_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  vsuxseg3ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2)
{
  vsuxseg3ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, size_t vl)
{
  vsuxseg4ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3)
{
  vsuxseg4ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, size_t vl)
{
  vsuxseg5ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg5ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4)
{
  vsuxseg5ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg5ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, size_t vl)
{
  vsuxseg6ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg6ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5)
{
  vsuxseg6ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg6ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, size_t vl)
{
  vsuxseg7ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg7ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6)
{
  vsuxseg7ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg7ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16m1_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7, size_t vl)
{
  vsuxseg8ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16m1 )?} 1 } } */
void
test_vsuxseg8ei64_v_f16m1_vl31_m (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1_t v0, vfloat16m1_t v1, vfloat16m1_t v2, vfloat16m1_t v3, vfloat16m1_t v4, vfloat16m1_t v5, vfloat16m1_t v6, vfloat16m1_t v7)
{
  vsuxseg8ei64_v_f16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg8ei64_v_f16m1_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m2_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl)
{
  vsuxseg2ei64_v_f32m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m2 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1)
{
  vsuxseg2ei64_v_f32m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32m2_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl)
{
  vsuxseg3ei64_v_f32m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32m2 )?} 1 } } */
void
test_vsuxseg3ei64_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2)
{
  vsuxseg3ei64_v_f32m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32m2_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl)
{
  vsuxseg4ei64_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32m2 )?} 1 } } */
void
test_vsuxseg4ei64_v_f32m2_vl31_m (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3)
{
  vsuxseg4ei64_v_f32m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f32m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m4_m (vbool16_t mask, float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl)
{
  vsuxseg2ei64_v_f64m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m4 )?} 1 } } */
void
test_vsuxseg2ei64_v_f64m4_vl31_m (vbool16_t mask, float64_t *base, vuint64m4_t bindex, vfloat64m4_t v0, vfloat64m4_t v1)
{
  vsuxseg2ei64_v_f64m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f64m4_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16m2_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl)
{
  vsuxseg2ei64_v_f16m2_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16m2 )?} 1 } } */
void
test_vsuxseg2ei64_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1)
{
  vsuxseg2ei64_v_f16m2_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16m2_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, size_t vl)
{
  vsuxseg3ei64_v_f16m2_m (mask, base, bindex, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16m2 )?} 1 } } */
void
test_vsuxseg3ei64_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2)
{
  vsuxseg3ei64_v_f16m2_m (mask, base, bindex, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg3ei64_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16m2_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3, size_t vl)
{
  vsuxseg4ei64_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16m2 )?} 1 } } */
void
test_vsuxseg4ei64_v_f16m2_vl31_m (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2_t v0, vfloat16m2_t v1, vfloat16m2_t v2, vfloat16m2_t v3)
{
  vsuxseg4ei64_v_f16m2_m (mask, base, bindex, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg4ei64_v_f16m2_vl31 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m4_m (vbool8_t mask, float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl)
{
  vsuxseg2ei64_v_f32m4_m (mask, base, bindex, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m4 )?} 1 } } */
void
test_vsuxseg2ei64_v_f32m4_vl31_m (vbool8_t mask, float32_t *base, vuint64m8_t bindex, vfloat32m4_t v0, vfloat32m4_t v1)
{
  vsuxseg2ei64_v_f32m4_m (mask, base, bindex, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsuxseg.ei..?\.v).)*\s+vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsuxseg2ei64_v_f32m4_vl31 )?} 1 } } */
