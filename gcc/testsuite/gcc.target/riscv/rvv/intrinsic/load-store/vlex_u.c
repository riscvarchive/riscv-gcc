
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8_t
test_vle8_v_u8mf8 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf8 )?} 1 } } */
vuint8mf8_t
test_vle8_v_u8mf8_vl31 (uint8_t *base)
{
  return vle8_v_u8mf8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf8_vl31 )?} 1 } } */
vuint8mf8_t
test_vle8_v_u8mf8_m (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf8_m )?} 1 } } */
vuint8mf8_t
test_vle8_v_u8mf8_m_vl31 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base)
{
  return vle8_v_u8mf8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf8_m_vl31 )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf4 )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4_vl31 (uint8_t *base)
{
  return vle8_v_u8mf4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf4_vl31 )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4_m (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf4_m )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4_m_vl31 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base)
{
  return vle8_v_u8mf4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf4_m_vl31 )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2 (uint8_t *base, size_t vl)
{
  return vle8_v_u8mf2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf2 )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2_vl31 (uint8_t *base)
{
  return vle8_v_u8mf2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf2_vl31 )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2_m (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8mf2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf2_m )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2_m_vl31 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base)
{
  return vle8_v_u8mf2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8mf2_m_vl31 )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m1 )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1_vl31 (uint8_t *base)
{
  return vle8_v_u8m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m1_vl31 )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1_m (vbool8_t mask, vuint8m1_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m1_m )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1_m_vl31 (vbool8_t mask, vuint8m1_t dest, uint8_t *base)
{
  return vle8_v_u8m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m1_m_vl31 )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m2 )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2_vl31 (uint8_t *base)
{
  return vle8_v_u8m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m2_vl31 )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2_m (vbool4_t mask, vuint8m2_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m2_m )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2_m_vl31 (vbool4_t mask, vuint8m2_t dest, uint8_t *base)
{
  return vle8_v_u8m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m2_m_vl31 )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m4 )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4_vl31 (uint8_t *base)
{
  return vle8_v_u8m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m4_vl31 )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4_m (vbool2_t mask, vuint8m4_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m4_m )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4_m_vl31 (vbool2_t mask, vuint8m4_t dest, uint8_t *base)
{
  return vle8_v_u8m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m4_m_vl31 )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8 (uint8_t *base, size_t vl)
{
  return vle8_v_u8m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m8 )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8_vl31 (uint8_t *base)
{
  return vle8_v_u8m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m8_vl31 )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8_m (vbool1_t mask, vuint8m8_t dest, uint8_t *base, size_t vl)
{
  return vle8_v_u8m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m8_m )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8_m_vl31 (vbool1_t mask, vuint8m8_t dest, uint8_t *base)
{
  return vle8_v_u8m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8_v_u8m8_m_vl31 )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4 (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf4 )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4_vl31 (uint16_t *base)
{
  return vle16_v_u16mf4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf4_vl31 )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4_m (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16mf4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16mf4_m )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4_m_vl31 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base)
{
  return vle16_v_u16mf4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16mf4_m_vl31 )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2 (uint16_t *base, size_t vl)
{
  return vle16_v_u16mf2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf2 )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2_vl31 (uint16_t *base)
{
  return vle16_v_u16mf2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf2_vl31 )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2_m (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16mf2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16mf2_m )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2_m_vl31 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base)
{
  return vle16_v_u16mf2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16mf2_m_vl31 )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m1 )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1_vl31 (uint16_t *base)
{
  return vle16_v_u16m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m1_vl31 )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1_m (vbool16_t mask, vuint16m1_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m1_m )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1_m_vl31 (vbool16_t mask, vuint16m1_t dest, uint16_t *base)
{
  return vle16_v_u16m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m1_m_vl31 )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m2 )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2_vl31 (uint16_t *base)
{
  return vle16_v_u16m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m2_vl31 )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2_m (vbool8_t mask, vuint16m2_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m2_m )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2_m_vl31 (vbool8_t mask, vuint16m2_t dest, uint16_t *base)
{
  return vle16_v_u16m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m2_m_vl31 )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m4 )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4_vl31 (uint16_t *base)
{
  return vle16_v_u16m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m4_vl31 )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4_m (vbool4_t mask, vuint16m4_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m4_m )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4_m_vl31 (vbool4_t mask, vuint16m4_t dest, uint16_t *base)
{
  return vle16_v_u16m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m4_m_vl31 )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8 (uint16_t *base, size_t vl)
{
  return vle16_v_u16m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m8 )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8_vl31 (uint16_t *base)
{
  return vle16_v_u16m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m8_vl31 )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8_m (vbool2_t mask, vuint16m8_t dest, uint16_t *base, size_t vl)
{
  return vle16_v_u16m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m8_m )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8_m_vl31 (vbool2_t mask, vuint16m8_t dest, uint16_t *base)
{
  return vle16_v_u16m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_u16m8_m_vl31 )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2 (uint32_t *base, size_t vl)
{
  return vle32_v_u32mf2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32mf2 )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2_vl31 (uint32_t *base)
{
  return vle32_v_u32mf2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32mf2_vl31 )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2_m (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, size_t vl)
{
  return vle32_v_u32mf2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32mf2_m )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2_m_vl31 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base)
{
  return vle32_v_u32mf2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32mf2_m_vl31 )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m1 )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1_vl31 (uint32_t *base)
{
  return vle32_v_u32m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m1_vl31 )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1_m (vbool32_t mask, vuint32m1_t dest, uint32_t *base, size_t vl)
{
  return vle32_v_u32m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m1_m )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1_m_vl31 (vbool32_t mask, vuint32m1_t dest, uint32_t *base)
{
  return vle32_v_u32m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m1_m_vl31 )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m2 )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2_vl31 (uint32_t *base)
{
  return vle32_v_u32m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m2_vl31 )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2_m (vbool16_t mask, vuint32m2_t dest, uint32_t *base, size_t vl)
{
  return vle32_v_u32m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m2_m )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2_m_vl31 (vbool16_t mask, vuint32m2_t dest, uint32_t *base)
{
  return vle32_v_u32m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m2_m_vl31 )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m4 )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4_vl31 (uint32_t *base)
{
  return vle32_v_u32m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m4_vl31 )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4_m (vbool8_t mask, vuint32m4_t dest, uint32_t *base, size_t vl)
{
  return vle32_v_u32m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m4_m )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4_m_vl31 (vbool8_t mask, vuint32m4_t dest, uint32_t *base)
{
  return vle32_v_u32m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m4_m_vl31 )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8 (uint32_t *base, size_t vl)
{
  return vle32_v_u32m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m8 )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8_vl31 (uint32_t *base)
{
  return vle32_v_u32m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m8_vl31 )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8_m (vbool4_t mask, vuint32m8_t dest, uint32_t *base, size_t vl)
{
  return vle32_v_u32m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m8_m )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8_m_vl31 (vbool4_t mask, vuint32m8_t dest, uint32_t *base)
{
  return vle32_v_u32m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_u32m8_m_vl31 )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m1 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m1 )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1_vl31 (uint64_t *base)
{
  return vle64_v_u64m1 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m1_vl31 )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1_m (vbool64_t mask, vuint64m1_t dest, uint64_t *base, size_t vl)
{
  return vle64_v_u64m1_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m1_m )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1_m_vl31 (vbool64_t mask, vuint64m1_t dest, uint64_t *base)
{
  return vle64_v_u64m1_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m1_m_vl31 )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m2 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m2 )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2_vl31 (uint64_t *base)
{
  return vle64_v_u64m2 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m2_vl31 )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2_m (vbool32_t mask, vuint64m2_t dest, uint64_t *base, size_t vl)
{
  return vle64_v_u64m2_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m2_m )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2_m_vl31 (vbool32_t mask, vuint64m2_t dest, uint64_t *base)
{
  return vle64_v_u64m2_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m2_m_vl31 )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m4 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m4 )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4_vl31 (uint64_t *base)
{
  return vle64_v_u64m4 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m4_vl31 )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4_m (vbool16_t mask, vuint64m4_t dest, uint64_t *base, size_t vl)
{
  return vle64_v_u64m4_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m4_m )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4_m_vl31 (vbool16_t mask, vuint64m4_t dest, uint64_t *base)
{
  return vle64_v_u64m4_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m4_m_vl31 )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8 (uint64_t *base, size_t vl)
{
  return vle64_v_u64m8 (base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m8 )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8_vl31 (uint64_t *base)
{
  return vle64_v_u64m8 (base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m8_vl31 )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8_m (vbool8_t mask, vuint64m8_t dest, uint64_t *base, size_t vl)
{
  return vle64_v_u64m8_m (mask, dest, base, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m8_m )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8_m_vl31 (vbool8_t mask, vuint64m8_t dest, uint64_t *base)
{
  return vle64_v_u64m8_m (mask, dest, base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_u64m8_m_vl31 )?} 1 } } */
