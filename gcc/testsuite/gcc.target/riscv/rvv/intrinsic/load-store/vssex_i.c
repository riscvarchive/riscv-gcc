
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsse8_v_i8mf8 (int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, size_t vl)
{
  vsse8_v_i8mf8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf8 )?} 1 } } */
void
test_vsse8_v_i8mf8_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf8_vl31 )?} 1 } } */
void
test_vsse8_v_i8mf8_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, size_t vl)
{
  vsse8_v_i8mf8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf8_m )?} 1 } } */
void
test_vsse8_v_i8mf8_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf8_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8mf4 (int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, size_t vl)
{
  vsse8_v_i8mf4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf4 )?} 1 } } */
void
test_vsse8_v_i8mf4_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf4_vl31 )?} 1 } } */
void
test_vsse8_v_i8mf4_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, size_t vl)
{
  vsse8_v_i8mf4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf4_m )?} 1 } } */
void
test_vsse8_v_i8mf4_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf4_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8mf2 (int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, size_t vl)
{
  vsse8_v_i8mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf2 )?} 1 } } */
void
test_vsse8_v_i8mf2_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8mf2_vl31 )?} 1 } } */
void
test_vsse8_v_i8mf2_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, size_t vl)
{
  vsse8_v_i8mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf2_m )?} 1 } } */
void
test_vsse8_v_i8mf2_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8mf2_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8m1 (int8_t *base, ptrdiff_t bstride, vint8m1_t v0, size_t vl)
{
  vsse8_v_i8m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m1 )?} 1 } } */
void
test_vsse8_v_i8m1_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m1_vl31 )?} 1 } } */
void
test_vsse8_v_i8m1_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0, size_t vl)
{
  vsse8_v_i8m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m1_m )?} 1 } } */
void
test_vsse8_v_i8m1_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m1_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8m2 (int8_t *base, ptrdiff_t bstride, vint8m2_t v0, size_t vl)
{
  vsse8_v_i8m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m2 )?} 1 } } */
void
test_vsse8_v_i8m2_vl31 (int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m2_vl31 )?} 1 } } */
void
test_vsse8_v_i8m2_m (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0, size_t vl)
{
  vsse8_v_i8m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m2_m )?} 1 } } */
void
test_vsse8_v_i8m2_m_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m2_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8m4 (int8_t *base, ptrdiff_t bstride, vint8m4_t v0, size_t vl)
{
  vsse8_v_i8m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m4 )?} 1 } } */
void
test_vsse8_v_i8m4_vl31 (int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m4_vl31 )?} 1 } } */
void
test_vsse8_v_i8m4_m (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t v0, size_t vl)
{
  vsse8_v_i8m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m4_m )?} 1 } } */
void
test_vsse8_v_i8m4_m_vl31 (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m4_m_vl31 )?} 1 } } */
void
test_vsse8_v_i8m8 (int8_t *base, ptrdiff_t bstride, vint8m8_t v0, size_t vl)
{
  vsse8_v_i8m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m8 )?} 1 } } */
void
test_vsse8_v_i8m8_vl31 (int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse8_v_i8m8_vl31 )?} 1 } } */
void
test_vsse8_v_i8m8_m (vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t v0, size_t vl)
{
  vsse8_v_i8m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m8_m )?} 1 } } */
void
test_vsse8_v_i8m8_m_vl31 (vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse8_v_i8m8_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16mf4 (int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, size_t vl)
{
  vsse16_v_i16mf4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16mf4 )?} 1 } } */
void
test_vsse16_v_i16mf4_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16mf4_vl31 )?} 1 } } */
void
test_vsse16_v_i16mf4_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, size_t vl)
{
  vsse16_v_i16mf4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16mf4_m )?} 1 } } */
void
test_vsse16_v_i16mf4_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16mf4_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16mf2 (int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, size_t vl)
{
  vsse16_v_i16mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16mf2 )?} 1 } } */
void
test_vsse16_v_i16mf2_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16mf2_vl31 )?} 1 } } */
void
test_vsse16_v_i16mf2_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, size_t vl)
{
  vsse16_v_i16mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16mf2_m )?} 1 } } */
void
test_vsse16_v_i16mf2_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16mf2_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16m1 (int16_t *base, ptrdiff_t bstride, vint16m1_t v0, size_t vl)
{
  vsse16_v_i16m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m1 )?} 1 } } */
void
test_vsse16_v_i16m1_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m1_vl31 )?} 1 } } */
void
test_vsse16_v_i16m1_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0, size_t vl)
{
  vsse16_v_i16m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m1_m )?} 1 } } */
void
test_vsse16_v_i16m1_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m1_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16m2 (int16_t *base, ptrdiff_t bstride, vint16m2_t v0, size_t vl)
{
  vsse16_v_i16m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m2 )?} 1 } } */
void
test_vsse16_v_i16m2_vl31 (int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m2_vl31 )?} 1 } } */
void
test_vsse16_v_i16m2_m (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0, size_t vl)
{
  vsse16_v_i16m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m2_m )?} 1 } } */
void
test_vsse16_v_i16m2_m_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m2_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16m4 (int16_t *base, ptrdiff_t bstride, vint16m4_t v0, size_t vl)
{
  vsse16_v_i16m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m4 )?} 1 } } */
void
test_vsse16_v_i16m4_vl31 (int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m4_vl31 )?} 1 } } */
void
test_vsse16_v_i16m4_m (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0, size_t vl)
{
  vsse16_v_i16m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m4_m )?} 1 } } */
void
test_vsse16_v_i16m4_m_vl31 (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m4_m_vl31 )?} 1 } } */
void
test_vsse16_v_i16m8 (int16_t *base, ptrdiff_t bstride, vint16m8_t v0, size_t vl)
{
  vsse16_v_i16m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m8 )?} 1 } } */
void
test_vsse16_v_i16m8_vl31 (int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse16_v_i16m8_vl31 )?} 1 } } */
void
test_vsse16_v_i16m8_m (vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t v0, size_t vl)
{
  vsse16_v_i16m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m8_m )?} 1 } } */
void
test_vsse16_v_i16m8_m_vl31 (vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse16_v_i16m8_m_vl31 )?} 1 } } */
void
test_vsse32_v_i32mf2 (int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, size_t vl)
{
  vsse32_v_i32mf2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32mf2 )?} 1 } } */
void
test_vsse32_v_i32mf2_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32mf2_vl31 )?} 1 } } */
void
test_vsse32_v_i32mf2_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, size_t vl)
{
  vsse32_v_i32mf2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32mf2_m )?} 1 } } */
void
test_vsse32_v_i32mf2_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32mf2_m_vl31 )?} 1 } } */
void
test_vsse32_v_i32m1 (int32_t *base, ptrdiff_t bstride, vint32m1_t v0, size_t vl)
{
  vsse32_v_i32m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m1 )?} 1 } } */
void
test_vsse32_v_i32m1_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m1_vl31 )?} 1 } } */
void
test_vsse32_v_i32m1_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0, size_t vl)
{
  vsse32_v_i32m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m1_m )?} 1 } } */
void
test_vsse32_v_i32m1_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m1_m_vl31 )?} 1 } } */
void
test_vsse32_v_i32m2 (int32_t *base, ptrdiff_t bstride, vint32m2_t v0, size_t vl)
{
  vsse32_v_i32m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m2 )?} 1 } } */
void
test_vsse32_v_i32m2_vl31 (int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m2_vl31 )?} 1 } } */
void
test_vsse32_v_i32m2_m (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0, size_t vl)
{
  vsse32_v_i32m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m2_m )?} 1 } } */
void
test_vsse32_v_i32m2_m_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m2_m_vl31 )?} 1 } } */
void
test_vsse32_v_i32m4 (int32_t *base, ptrdiff_t bstride, vint32m4_t v0, size_t vl)
{
  vsse32_v_i32m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m4 )?} 1 } } */
void
test_vsse32_v_i32m4_vl31 (int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m4_vl31 )?} 1 } } */
void
test_vsse32_v_i32m4_m (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0, size_t vl)
{
  vsse32_v_i32m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m4_m )?} 1 } } */
void
test_vsse32_v_i32m4_m_vl31 (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m4_m_vl31 )?} 1 } } */
void
test_vsse32_v_i32m8 (int32_t *base, ptrdiff_t bstride, vint32m8_t v0, size_t vl)
{
  vsse32_v_i32m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m8 )?} 1 } } */
void
test_vsse32_v_i32m8_vl31 (int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse32_v_i32m8_vl31 )?} 1 } } */
void
test_vsse32_v_i32m8_m (vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t v0, size_t vl)
{
  vsse32_v_i32m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m8_m )?} 1 } } */
void
test_vsse32_v_i32m8_m_vl31 (vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse32_v_i32m8_m_vl31 )?} 1 } } */
void
test_vsse64_v_i64m1 (int64_t *base, ptrdiff_t bstride, vint64m1_t v0, size_t vl)
{
  vsse64_v_i64m1 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m1 )?} 1 } } */
void
test_vsse64_v_i64m1_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m1_vl31 )?} 1 } } */
void
test_vsse64_v_i64m1_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0, size_t vl)
{
  vsse64_v_i64m1_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m1_m )?} 1 } } */
void
test_vsse64_v_i64m1_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m1_m_vl31 )?} 1 } } */
void
test_vsse64_v_i64m2 (int64_t *base, ptrdiff_t bstride, vint64m2_t v0, size_t vl)
{
  vsse64_v_i64m2 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m2 )?} 1 } } */
void
test_vsse64_v_i64m2_vl31 (int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m2_vl31 )?} 1 } } */
void
test_vsse64_v_i64m2_m (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0, size_t vl)
{
  vsse64_v_i64m2_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m2_m )?} 1 } } */
void
test_vsse64_v_i64m2_m_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m2_m_vl31 )?} 1 } } */
void
test_vsse64_v_i64m4 (int64_t *base, ptrdiff_t bstride, vint64m4_t v0, size_t vl)
{
  vsse64_v_i64m4 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m4 )?} 1 } } */
void
test_vsse64_v_i64m4_vl31 (int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m4_vl31 )?} 1 } } */
void
test_vsse64_v_i64m4_m (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0, size_t vl)
{
  vsse64_v_i64m4_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m4_m )?} 1 } } */
void
test_vsse64_v_i64m4_m_vl31 (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m4_m_vl31 )?} 1 } } */
void
test_vsse64_v_i64m8 (int64_t *base, ptrdiff_t bstride, vint64m8_t v0, size_t vl)
{
  vsse64_v_i64m8 (base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m8 )?} 1 } } */
void
test_vsse64_v_i64m8_vl31 (int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8 (base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vsse64_v_i64m8_vl31 )?} 1 } } */
void
test_vsse64_v_i64m8_m (vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t v0, size_t vl)
{
  vsse64_v_i64m8_m (mask, base, bstride, v0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m8_m )?} 1 } } */
void
test_vsse64_v_i64m8_m_vl31 (vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8_m (mask, base, bstride, v0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsse..?\.v).)*\s+vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vsse64_v_i64m8_m_vl31 )?} 1 } } */
