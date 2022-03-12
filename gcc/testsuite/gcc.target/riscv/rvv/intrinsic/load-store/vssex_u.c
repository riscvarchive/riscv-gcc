
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsse8_v_u8mf8 (uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, size_t vl)
{
  vsse8_v_u8mf8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf8 )?} 1 } } */
void
test_vsse8_v_u8mf8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsse8_v_u8mf8_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, size_t vl)
{
  vsse8_v_u8mf8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf8_m )?} 1 } } */
void
test_vsse8_v_u8mf8_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf8_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8mf4 (uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, size_t vl)
{
  vsse8_v_u8mf4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf4 )?} 1 } } */
void
test_vsse8_v_u8mf4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsse8_v_u8mf4_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, size_t vl)
{
  vsse8_v_u8mf4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf4_m )?} 1 } } */
void
test_vsse8_v_u8mf4_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf4_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8mf2 (uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, size_t vl)
{
  vsse8_v_u8mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf2 )?} 1 } } */
void
test_vsse8_v_u8mf2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsse8_v_u8mf2_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, size_t vl)
{
  vsse8_v_u8mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf2_m )?} 1 } } */
void
test_vsse8_v_u8mf2_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8mf2_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8m1 (uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, size_t vl)
{
  vsse8_v_u8m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m1 )?} 1 } } */
void
test_vsse8_v_u8m1_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m1_vl31 )?} 1 } } */
void
test_vsse8_v_u8m1_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, size_t vl)
{
  vsse8_v_u8m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m1_m )?} 1 } } */
void
test_vsse8_v_u8m1_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m1_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8m2 (uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, size_t vl)
{
  vsse8_v_u8m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m2 )?} 1 } } */
void
test_vsse8_v_u8m2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m2_vl31 )?} 1 } } */
void
test_vsse8_v_u8m2_m (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, size_t vl)
{
  vsse8_v_u8m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m2_m )?} 1 } } */
void
test_vsse8_v_u8m2_m_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m2_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8m4 (uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0, size_t vl)
{
  vsse8_v_u8m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m4 )?} 1 } } */
void
test_vsse8_v_u8m4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m4_vl31 )?} 1 } } */
void
test_vsse8_v_u8m4_m (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0, size_t vl)
{
  vsse8_v_u8m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m4_m )?} 1 } } */
void
test_vsse8_v_u8m4_m_vl31 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m4_m_vl31 )?} 1 } } */
void
test_vsse8_v_u8m8 (uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0, size_t vl)
{
  vsse8_v_u8m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m8 )?} 1 } } */
void
test_vsse8_v_u8m8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_u8m8_vl31 )?} 1 } } */
void
test_vsse8_v_u8m8_m (vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0, size_t vl)
{
  vsse8_v_u8m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m8_m )?} 1 } } */
void
test_vsse8_v_u8m8_m_vl31 (vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_u8m8_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16mf4 (uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, size_t vl)
{
  vsse16_v_u16mf4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16mf4 )?} 1 } } */
void
test_vsse16_v_u16mf4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsse16_v_u16mf4_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, size_t vl)
{
  vsse16_v_u16mf4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16mf4_m )?} 1 } } */
void
test_vsse16_v_u16mf4_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16mf4_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16mf2 (uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, size_t vl)
{
  vsse16_v_u16mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16mf2 )?} 1 } } */
void
test_vsse16_v_u16mf2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsse16_v_u16mf2_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, size_t vl)
{
  vsse16_v_u16mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16mf2_m )?} 1 } } */
void
test_vsse16_v_u16mf2_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16mf2_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16m1 (uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, size_t vl)
{
  vsse16_v_u16m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m1 )?} 1 } } */
void
test_vsse16_v_u16m1_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m1_vl31 )?} 1 } } */
void
test_vsse16_v_u16m1_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, size_t vl)
{
  vsse16_v_u16m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m1_m )?} 1 } } */
void
test_vsse16_v_u16m1_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m1_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16m2 (uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, size_t vl)
{
  vsse16_v_u16m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m2 )?} 1 } } */
void
test_vsse16_v_u16m2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m2_vl31 )?} 1 } } */
void
test_vsse16_v_u16m2_m (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, size_t vl)
{
  vsse16_v_u16m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m2_m )?} 1 } } */
void
test_vsse16_v_u16m2_m_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m2_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16m4 (uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, size_t vl)
{
  vsse16_v_u16m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m4 )?} 1 } } */
void
test_vsse16_v_u16m4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m4_vl31 )?} 1 } } */
void
test_vsse16_v_u16m4_m (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, size_t vl)
{
  vsse16_v_u16m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m4_m )?} 1 } } */
void
test_vsse16_v_u16m4_m_vl31 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m4_m_vl31 )?} 1 } } */
void
test_vsse16_v_u16m8 (uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0, size_t vl)
{
  vsse16_v_u16m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m8 )?} 1 } } */
void
test_vsse16_v_u16m8_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_u16m8_vl31 )?} 1 } } */
void
test_vsse16_v_u16m8_m (vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0, size_t vl)
{
  vsse16_v_u16m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m8_m )?} 1 } } */
void
test_vsse16_v_u16m8_m_vl31 (vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_u16m8_m_vl31 )?} 1 } } */
void
test_vsse32_v_u32mf2 (uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, size_t vl)
{
  vsse32_v_u32mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32mf2 )?} 1 } } */
void
test_vsse32_v_u32mf2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsse32_v_u32mf2_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, size_t vl)
{
  vsse32_v_u32mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32mf2_m )?} 1 } } */
void
test_vsse32_v_u32mf2_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32mf2_m_vl31 )?} 1 } } */
void
test_vsse32_v_u32m1 (uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, size_t vl)
{
  vsse32_v_u32m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m1 )?} 1 } } */
void
test_vsse32_v_u32m1_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m1_vl31 )?} 1 } } */
void
test_vsse32_v_u32m1_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, size_t vl)
{
  vsse32_v_u32m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m1_m )?} 1 } } */
void
test_vsse32_v_u32m1_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m1_m_vl31 )?} 1 } } */
void
test_vsse32_v_u32m2 (uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, size_t vl)
{
  vsse32_v_u32m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m2 )?} 1 } } */
void
test_vsse32_v_u32m2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m2_vl31 )?} 1 } } */
void
test_vsse32_v_u32m2_m (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, size_t vl)
{
  vsse32_v_u32m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m2_m )?} 1 } } */
void
test_vsse32_v_u32m2_m_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m2_m_vl31 )?} 1 } } */
void
test_vsse32_v_u32m4 (uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, size_t vl)
{
  vsse32_v_u32m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m4 )?} 1 } } */
void
test_vsse32_v_u32m4_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m4_vl31 )?} 1 } } */
void
test_vsse32_v_u32m4_m (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, size_t vl)
{
  vsse32_v_u32m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m4_m )?} 1 } } */
void
test_vsse32_v_u32m4_m_vl31 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m4_m_vl31 )?} 1 } } */
void
test_vsse32_v_u32m8 (uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0, size_t vl)
{
  vsse32_v_u32m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m8 )?} 1 } } */
void
test_vsse32_v_u32m8_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_u32m8_vl31 )?} 1 } } */
void
test_vsse32_v_u32m8_m (vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0, size_t vl)
{
  vsse32_v_u32m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m8_m )?} 1 } } */
void
test_vsse32_v_u32m8_m_vl31 (vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_u32m8_m_vl31 )?} 1 } } */
void
test_vsse64_v_u64m1 (uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, size_t vl)
{
  vsse64_v_u64m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m1 )?} 1 } } */
void
test_vsse64_v_u64m1_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m1_vl31 )?} 1 } } */
void
test_vsse64_v_u64m1_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, size_t vl)
{
  vsse64_v_u64m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m1_m )?} 1 } } */
void
test_vsse64_v_u64m1_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m1_m_vl31 )?} 1 } } */
void
test_vsse64_v_u64m2 (uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, size_t vl)
{
  vsse64_v_u64m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m2 )?} 1 } } */
void
test_vsse64_v_u64m2_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m2_vl31 )?} 1 } } */
void
test_vsse64_v_u64m2_m (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, size_t vl)
{
  vsse64_v_u64m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m2_m )?} 1 } } */
void
test_vsse64_v_u64m2_m_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m2_m_vl31 )?} 1 } } */
void
test_vsse64_v_u64m4 (uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, size_t vl)
{
  vsse64_v_u64m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m4 )?} 1 } } */
void
test_vsse64_v_u64m4_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m4_vl31 )?} 1 } } */
void
test_vsse64_v_u64m4_m (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, size_t vl)
{
  vsse64_v_u64m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m4_m )?} 1 } } */
void
test_vsse64_v_u64m4_m_vl31 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m4_m_vl31 )?} 1 } } */
void
test_vsse64_v_u64m8 (uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0, size_t vl)
{
  vsse64_v_u64m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m8 )?} 1 } } */
void
test_vsse64_v_u64m8_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_u64m8_vl31 )?} 1 } } */
void
test_vsse64_v_u64m8_m (vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0, size_t vl)
{
  vsse64_v_u64m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m8_m )?} 1 } } */
void
test_vsse64_v_u64m8_m_vl31 (vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_u64m8_m_vl31 )?} 1 } } */
