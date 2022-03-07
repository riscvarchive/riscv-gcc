
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf8x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf8x2 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf8x2_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf8x2_m )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf8x2_m_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf8x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf8x3 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf8x3_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf8x3_m )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf8x3_m_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf8x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf8x4 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf8x4_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf8x4_m )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf8x4_m_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf8x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf8x5 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf8x5_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf8x5_m )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf8x5_m_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf8x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf8x6 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf8x6_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf8x6_m )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf8x6_m_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf8x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf8x7 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf8x7_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf8x7_m )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf8x7_m_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf8x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf8x8 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf8x8_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf8x8_m )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf8x8_m_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16mf4x2 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16mf4x2_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16mf4x2_m )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16mf4x2_m_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16mf4x3 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16mf4x3_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16mf4x3_m )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16mf4x3_m_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16mf4x4 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16mf4x4_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16mf4x4_m )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16mf4x4_m_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16mf4x5 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16mf4x5_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16mf4x5_m )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16mf4x5_m_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16mf4x6 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16mf4x6_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16mf4x6_m )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16mf4x6_m_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16mf4x7 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16mf4x7_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16mf4x7_m )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16mf4x7_m_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16mf4x8 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16mf4x8_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16mf4x8_m )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16mf4x8_m_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32mf2x2 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32mf2x2_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32mf2x2_m )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32mf2x2_m_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32mf2x3 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32mf2x3_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32mf2x3_m )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32mf2x3_m_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32mf2x4 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32mf2x4_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32mf2x4_m )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32mf2x4_m_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u32mf2x5 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u32mf2x5_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u32mf2x5_m )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u32mf2x5_m_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u32mf2x6 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u32mf2x6_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u32mf2x6_m )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u32mf2x6_m_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u32mf2x7 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u32mf2x7_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u32mf2x7_m )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u32mf2x7_m_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u32mf2x8 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u32mf2x8_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u32mf2x8_m )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u32mf2x8_m_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m1x2 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m1x2_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m1x2_m )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m1x2_m_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u64m1x3 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u64m1x3_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u64m1x3_m )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u64m1x3_m_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u64m1x4 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u64m1x4_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u64m1x4_m )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u64m1x4_m_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u64m1x5 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u64m1x5_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u64m1x5_m )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u64m1x5_m_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u64m1x6 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u64m1x6_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u64m1x6_m )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u64m1x6_m_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u64m1x7 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u64m1x7_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u64m1x7_m )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u64m1x7_m_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u64m1x8 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u64m1x8_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u64m1x8_m )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u64m1x8_m_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf4x2 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf4x2_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf4x2_m )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf4x2_m_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf4x3 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf4x3_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf4x3_m )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf4x3_m_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf4x4 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf4x4_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf4x4_m )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf4x4_m_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf4x5 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf4x5_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf4x5_m )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf4x5_m_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf4x6 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf4x6_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf4x6_m )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf4x6_m_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf4x7 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf4x7_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf4x7_m )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf4x7_m_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf4x8 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf4x8_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf4x8_m )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf4x8_m_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16mf2x2 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16mf2x2_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16mf2x2_m )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16mf2x2_m_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16mf2x3 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16mf2x3_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16mf2x3_m )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16mf2x3_m_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16mf2x4 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16mf2x4_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16mf2x4_m )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16mf2x4_m_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16mf2x5 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16mf2x5_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16mf2x5_m )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16mf2x5_m_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16mf2x6 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16mf2x6_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16mf2x6_m )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16mf2x6_m_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16mf2x7 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16mf2x7_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16mf2x7_m )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16mf2x7_m_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16mf2x8 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16mf2x8_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16mf2x8_m )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16mf2x8_m_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m1x2 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m1x2_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m1x2_m )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m1x2_m_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32m1x3 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32m1x3_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32m1x3_m )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32m1x3_m_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32m1x4 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32m1x4_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32m1x4_m )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32m1x4_m_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u32m1x5 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u32m1x5_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u32m1x5_m )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u32m1x5_m_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u32m1x6 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u32m1x6_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u32m1x6_m )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u32m1x6_m_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u32m1x7 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u32m1x7_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u32m1x7_m )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u32m1x7_m_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u32m1x8 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u32m1x8_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u32m1x8_m )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u32m1x8_m_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m2x2 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m2x2_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m2x2_m )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m2x2_m_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u64m2x3 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u64m2x3_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u64m2x3_m )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u64m2x3_m_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u64m2x4 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u64m2x4_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u64m2x4_m )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u64m2x4_m_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf2x2 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8mf2x2_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf2x2_m )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8mf2x2_m_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf2x3 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8mf2x3_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf2x3_m )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8mf2x3_m_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf2x4 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8mf2x4_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf2x4_m )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8mf2x4_m_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf2x5 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8mf2x5_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf2x5_m )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8mf2x5_m_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf2x6 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8mf2x6_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf2x6_m )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8mf2x6_m_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf2x7 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8mf2x7_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf2x7_m )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8mf2x7_m_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf2x8 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8mf2x8_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf2x8_m )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8mf2x8_m_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16m1x2 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16m1x2_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m1x2_m )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m1x2_m_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16m1x3 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16m1x3_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16m1x3_m )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16m1x3_m_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16m1x4 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16m1x4_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16m1x4_m )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16m1x4_m_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16m1x5 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u16m1x5_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16m1x5_m )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u16m1x5_m_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16m1x6 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u16m1x6_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16m1x6_m )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u16m1x6_m_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16m1x7 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u16m1x7_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16m1x7_m )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u16m1x7_m_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16m1x8 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u16m1x8_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16m1x8_m )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u16m1x8_m_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m2x2 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m2x2_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m2x2_m )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m2x2_m_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32m2x3 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u32m2x3_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32m2x3_m )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u32m2x3_m_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32m2x4 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u32m2x4_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32m2x4_m )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u32m2x4_m_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2 (uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m4x2 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_vl31 (uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u64m4x2_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m4x2_m )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u64m4x2_m_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8m1x2 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u8m1x2_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m1x2_m )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m1x2_m_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8m1x3 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u8m1x3_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8m1x3_m )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8m1x3_m_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8m1x4 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u8m1x4_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8m1x4_m )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8m1x4_m_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8m1x5 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei8_v_u8m1x5_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8m1x5_m )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei8_v_u8m1x5_m_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8m1x6 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei8_v_u8m1x6_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8m1x6_m )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei8_v_u8m1x6_m_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8m1x7 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei8_v_u8m1x7_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8m1x7_m )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei8_v_u8m1x7_m_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8m1x8 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei8_v_u8m1x8_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8m1x8_m )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei8_v_u8m1x8_m_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16m2x2 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u16m2x2_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m2x2_m )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m2x2_m_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16m2x3 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei8_v_u16m2x3_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16m2x3_m )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei8_v_u16m2x3_m_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16m2x4 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei8_v_u16m2x4_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16m2x4_m )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei8_v_u16m2x4_m_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2 (uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m4x2 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_vl31 (uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei8_v_u32m4x2_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m4x2_m )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u32m4x2_m_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei8_v_u8m2x2 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei8_v_u8m2x2_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m2x2_m )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_m_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m2x2_m_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei8_v_u8m2x3 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei8_v_u8m2x3_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8m2x3_m )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_m_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei8_v_u8m2x3_m_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei8_v_u8m2x4 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei8_v_u8m2x4_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8m2x4_m )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_m_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei8_v_u8m2x4_m_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2 (uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei8_v_u16m4x2 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_vl31 (uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei8_v_u16m4x2_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m4x2_m )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_m_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei8_v_u16m4x2_m_vl31 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2 (uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei8_v_u8m4x2 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_vl31 (uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei8_v_u8m4x2_vl31 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m4x2_m )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_m_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei8_v_u8m4x2_m_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf8x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf8x2 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf8x2_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf8x2_m )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf8x2_m_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf8x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf8x3 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf8x3_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf8x3_m )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf8x3_m_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf8x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf8x4 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf8x4_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf8x4_m )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf8x4_m_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf8x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf8x5 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf8x5_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf8x5_m )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf8x5_m_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf8x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf8x6 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf8x6_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf8x6_m )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf8x6_m_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf8x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf8x7 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf8x7_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf8x7_m )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf8x7_m_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf8x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf8x8 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf8x8_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf8x8_m )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf8x8_m_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16mf4x2 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16mf4x2_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16mf4x2_m )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16mf4x2_m_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16mf4x3 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16mf4x3_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16mf4x3_m )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16mf4x3_m_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16mf4x4 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16mf4x4_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16mf4x4_m )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16mf4x4_m_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16mf4x5 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16mf4x5_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16mf4x5_m )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16mf4x5_m_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16mf4x6 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16mf4x6_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16mf4x6_m )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16mf4x6_m_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16mf4x7 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16mf4x7_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16mf4x7_m )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16mf4x7_m_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16mf4x8 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16mf4x8_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16mf4x8_m )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16mf4x8_m_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32mf2x2 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32mf2x2_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32mf2x2_m )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32mf2x2_m_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32mf2x3 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32mf2x3_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32mf2x3_m )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32mf2x3_m_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32mf2x4 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32mf2x4_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32mf2x4_m )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32mf2x4_m_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u32mf2x5 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u32mf2x5_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u32mf2x5_m )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u32mf2x5_m_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u32mf2x6 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u32mf2x6_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u32mf2x6_m )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u32mf2x6_m_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u32mf2x7 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u32mf2x7_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u32mf2x7_m )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u32mf2x7_m_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u32mf2x8 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u32mf2x8_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u32mf2x8_m )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u32mf2x8_m_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m1x2 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m1x2_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m1x2_m )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m1x2_m_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u64m1x3 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u64m1x3_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u64m1x3_m )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u64m1x3_m_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u64m1x4 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u64m1x4_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u64m1x4_m )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u64m1x4_m_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u64m1x5 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u64m1x5_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u64m1x5_m )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u64m1x5_m_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u64m1x6 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u64m1x6_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u64m1x6_m )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u64m1x6_m_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u64m1x7 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u64m1x7_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u64m1x7_m )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u64m1x7_m_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8 (uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u64m1x8 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8_vl31 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u64m1x8_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u64m1x8_m )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u64m1x8_m_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf4x2 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u8mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf4x2_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf4x2_m )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u8mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf4x2_m_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf4x3 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u8mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf4x3_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf4x3_m )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u8mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf4x3_m_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf4x4 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u8mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf4x4_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf4x4_m )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u8mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf4x4_m_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf4x5 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u8mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf4x5_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf4x5_m )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u8mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf4x5_m_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf4x6 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u8mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf4x6_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf4x6_m )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u8mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf4x6_m_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf4x7 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u8mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf4x7_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf4x7_m )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u8mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf4x7_m_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8 (uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf4x8 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8_vl31 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u8mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf4x8_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf4x8_m )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u8mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf4x8_m_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16mf2x2 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16mf2x2_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16mf2x2_m )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16mf2x2_m_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16mf2x3 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16mf2x3_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16mf2x3_m )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16mf2x3_m_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16mf2x4 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16mf2x4_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16mf2x4_m )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16mf2x4_m_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16mf2x5 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16mf2x5_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16mf2x5_m )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16mf2x5_m_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16mf2x6 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16mf2x6_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16mf2x6_m )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16mf2x6_m_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16mf2x7 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16mf2x7_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16mf2x7_m )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16mf2x7_m_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8 (uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16mf2x8 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8_vl31 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16mf2x8_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16mf2x8_m )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16mf2x8_m_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32m1x2 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32m1x2_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m1x2_m )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m1x2_m_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32m1x3 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32m1x3_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32m1x3_m )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32m1x3_m_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32m1x4 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32m1x4_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32m1x4_m )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32m1x4_m_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u32m1x5 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u32m1x5_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u32m1x5_m )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u32m1x5_m_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u32m1x6 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u32m1x6_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u32m1x6_m )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u32m1x6_m_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u32m1x7 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u32m1x7_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u32m1x7_m )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u32m1x7_m_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8 (uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u32m1x8 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8_vl31 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u32m1x8_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u32m1x8_m )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u32m1x8_m_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2 (uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m2x2 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2_vl31 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m2x2_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m2x2_m )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m2x2_m_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3 (uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u64m2x3 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3_vl31 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u64m2x3_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u64m2x3_m )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u64m2x3_m_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4 (uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u64m2x4 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4_vl31 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u64m2x4_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u64m2x4_m )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u64m2x4_m_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf2x2 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u8mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u8mf2x2_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf2x2_m )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u8mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8mf2x2_m_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf2x3 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u8mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u8mf2x3_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf2x3_m )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u8mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8mf2x3_m_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf2x4 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u8mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u8mf2x4_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf2x4_m )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u8mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8mf2x4_m_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf2x5 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u8mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u8mf2x5_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf2x5_m )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u8mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8mf2x5_m_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf2x6 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u8mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u8mf2x6_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf2x6_m )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u8mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8mf2x6_m_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf2x7 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u8mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u8mf2x7_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf2x7_m )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u8mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8mf2x7_m_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8 (uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf2x8 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8_vl31 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u8mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u8mf2x8_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf2x8_m )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u8mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8mf2x8_m_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16m1x2 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u16m1x2_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m1x2_m )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m1x2_m_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16m1x3 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u16m1x3_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16m1x3_m )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16m1x3_m_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16m1x4 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u16m1x4_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16m1x4_m )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16m1x4_m_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16m1x5 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei16_v_u16m1x5_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16m1x5_m )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei16_v_u16m1x5_m_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16m1x6 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei16_v_u16m1x6_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16m1x6_m )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei16_v_u16m1x6_m_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16m1x7 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei16_v_u16m1x7_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16m1x7_m )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei16_v_u16m1x7_m_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8 (uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16m1x8 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8_vl31 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei16_v_u16m1x8_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16m1x8_m )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei16_v_u16m1x8_m_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2 (uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32m2x2 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2_vl31 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u32m2x2_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m2x2_m )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m2x2_m_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3 (uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32m2x3 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3_vl31 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei16_v_u32m2x3_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32m2x3_m )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u32m2x3_m_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4 (uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32m2x4 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4_vl31 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei16_v_u32m2x4_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32m2x4_m )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u32m2x4_m_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2 (uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m4x2 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2_vl31 (uint64_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei16_v_u64m4x2_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m4x2_m )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u64m4x2_m_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u8m1x2 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u8m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u8m1x2_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m1x2_m )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u8m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m1x2_m_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei16_v_u8m1x3 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u8m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei16_v_u8m1x3_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8m1x3_m )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u8m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8m1x3_m_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei16_v_u8m1x4 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u8m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei16_v_u8m1x4_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8m1x4_m )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u8m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8m1x4_m_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei16_v_u8m1x5 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg5ei16_v_u8m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei16_v_u8m1x5_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8m1x5_m )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg5ei16_v_u8m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei16_v_u8m1x5_m_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei16_v_u8m1x6 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg6ei16_v_u8m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei16_v_u8m1x6_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8m1x6_m )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg6ei16_v_u8m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei16_v_u8m1x6_m_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei16_v_u8m1x7 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg7ei16_v_u8m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei16_v_u8m1x7_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8m1x7_m )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg7ei16_v_u8m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei16_v_u8m1x7_m_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8 (uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei16_v_u8m1x8 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8_vl31 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg8ei16_v_u8m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei16_v_u8m1x8_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8m1x8_m )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg8ei16_v_u8m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei16_v_u8m1x8_m_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2 (uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u16m2x2 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2_vl31 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u16m2x2_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m2x2_m )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m2x2_m_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3 (uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei16_v_u16m2x3 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3_vl31 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei16_v_u16m2x3_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16m2x3_m )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei16_v_u16m2x3_m_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4 (uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei16_v_u16m2x4 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4_vl31 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei16_v_u16m2x4_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16m2x4_m )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei16_v_u16m2x4_m_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2 (uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u32m4x2 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2_vl31 (uint32_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei16_v_u32m4x2_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m4x2_m )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei16_v_u32m4x2_m_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2 (uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei16_v_u8m2x2 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2_vl31 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u8m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei16_v_u8m2x2_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m2x2_m )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2_m_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u8m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m2x2_m_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3 (uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei16_v_u8m2x3 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3_vl31 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg3ei16_v_u8m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei16_v_u8m2x3_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8m2x3_m )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3_m_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg3ei16_v_u8m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei16_v_u8m2x3_m_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4 (uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei16_v_u8m2x4 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4_vl31 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg4ei16_v_u8m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei16_v_u8m2x4_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8m2x4_m )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4_m_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg4ei16_v_u8m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei16_v_u8m2x4_m_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2 (uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei16_v_u16m4x2 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_vl31 (uint16_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei16_v_u16m4x2_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m4x2_m )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_m_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei16_v_u16m4x2_m_vl31 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2 (uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei16_v_u8m4x2 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_vl31 (uint8_t *base, vuint16m8_t bindex)
{
  return vloxseg2ei16_v_u8m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei16_v_u8m4x2_vl31 )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m4x2_m )?} 1 } } */
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_m_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vloxseg2ei16_v_u8m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei16_v_u8m4x2_m_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf8x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u8mf8x2 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u8mf8x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u8mf8x2_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf8x2_m )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf8x2_m_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf8x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u8mf8x3 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u8mf8x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u8mf8x3_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf8x3_m )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf8x3_m_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf8x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u8mf8x4 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u8mf8x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u8mf8x4_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf8x4_m )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf8x4_m_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf8x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u8mf8x5 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u8mf8x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u8mf8x5_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf8x5_m )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf8x5_m_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf8x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u8mf8x6 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u8mf8x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u8mf8x6_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf8x6_m )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf8x6_m_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf8x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u8mf8x7 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u8mf8x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u8mf8x7_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf8x7_m )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf8x7_m_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8 (uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf8x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u8mf8x8 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_vl31 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u8mf8x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u8mf8x8_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf8x8_m )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf8x8_m_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u16mf4x2 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u16mf4x2_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16mf4x2_m )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16mf4x2_m_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u16mf4x3 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u16mf4x3_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16mf4x3_m )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16mf4x3_m_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u16mf4x4 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u16mf4x4_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16mf4x4_m )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16mf4x4_m_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u16mf4x5 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u16mf4x5_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16mf4x5_m )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16mf4x5_m_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u16mf4x6 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u16mf4x6_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16mf4x6_m )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16mf4x6_m_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u16mf4x7 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u16mf4x7_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16mf4x7_m )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16mf4x7_m_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8 (uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u16mf4x8 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_vl31 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u16mf4x8_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16mf4x8_m )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16mf4x8_m_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u32mf2x2 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u32mf2x2_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32mf2x2_m )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32mf2x2_m_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u32mf2x3 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u32mf2x3_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32mf2x3_m )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32mf2x3_m_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u32mf2x4 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u32mf2x4_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32mf2x4_m )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32mf2x4_m_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u32mf2x5 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u32mf2x5_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u32mf2x5_m )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u32mf2x5_m_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u32mf2x6 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u32mf2x6_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u32mf2x6_m )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u32mf2x6_m_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u32mf2x7 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u32mf2x7_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u32mf2x7_m )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u32mf2x7_m_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8 (uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u32mf2x8 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_vl31 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u32mf2x8_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u32mf2x8_m )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u32mf2x8_m_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u64m1x2 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u64m1x2_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m1x2_m )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m1x2_m_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u64m1x3 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u64m1x3_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u64m1x3_m )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u64m1x3_m_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u64m1x4 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u64m1x4_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u64m1x4_m )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u64m1x4_m_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u64m1x5 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u64m1x5_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u64m1x5_m )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u64m1x5_m_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u64m1x6 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u64m1x6_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u64m1x6_m )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u64m1x6_m_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u64m1x7 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u64m1x7_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u64m1x7_m )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u64m1x7_m_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8 (uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u64m1x8 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_vl31 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u64m1x8_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u64m1x8_m )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u64m1x8_m_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u8mf4x2 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u8mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u8mf4x2_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf4x2_m )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u8mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf4x2_m_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u8mf4x3 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u8mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u8mf4x3_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf4x3_m )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u8mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf4x3_m_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u8mf4x4 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u8mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u8mf4x4_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf4x4_m )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u8mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf4x4_m_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u8mf4x5 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u8mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u8mf4x5_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf4x5_m )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u8mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf4x5_m_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u8mf4x6 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u8mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u8mf4x6_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf4x6_m )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u8mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf4x6_m_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u8mf4x7 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u8mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u8mf4x7_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf4x7_m )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u8mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf4x7_m_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8 (uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u8mf4x8 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_vl31 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u8mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u8mf4x8_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf4x8_m )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u8mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf4x8_m_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u16mf2x2 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u16mf2x2_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16mf2x2_m )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16mf2x2_m_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u16mf2x3 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u16mf2x3_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16mf2x3_m )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16mf2x3_m_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u16mf2x4 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u16mf2x4_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16mf2x4_m )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16mf2x4_m_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u16mf2x5 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u16mf2x5_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16mf2x5_m )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16mf2x5_m_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u16mf2x6 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u16mf2x6_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16mf2x6_m )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16mf2x6_m_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u16mf2x7 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u16mf2x7_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16mf2x7_m )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16mf2x7_m_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8 (uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u16mf2x8 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_vl31 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u16mf2x8_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16mf2x8_m )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16mf2x8_m_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u32m1x2 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u32m1x2_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m1x2_m )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m1x2_m_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u32m1x3 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u32m1x3_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32m1x3_m )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32m1x3_m_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u32m1x4 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u32m1x4_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32m1x4_m )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32m1x4_m_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u32m1x5 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei32_v_u32m1x5_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u32m1x5_m )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u32m1x5_m_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u32m1x6 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei32_v_u32m1x6_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u32m1x6_m )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u32m1x6_m_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u32m1x7 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei32_v_u32m1x7_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u32m1x7_m )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u32m1x7_m_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8 (uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u32m1x8 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_vl31 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei32_v_u32m1x8_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u32m1x8_m )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u32m1x8_m_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2 (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u64m2x2 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_vl31 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei32_v_u64m2x2_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m2x2_m )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m2x2_m_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3 (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u64m2x3 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_vl31 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei32_v_u64m2x3_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u64m2x3_m )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u64m2x3_m_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4 (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u64m2x4 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_vl31 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei32_v_u64m2x4_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u64m2x4_m )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u64m2x4_m_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u8mf2x2 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u8mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u8mf2x2_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf2x2_m )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u8mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8mf2x2_m_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u8mf2x3 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u8mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u8mf2x3_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf2x3_m )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u8mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8mf2x3_m_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u8mf2x4 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u8mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u8mf2x4_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf2x4_m )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u8mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8mf2x4_m_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei32_v_u8mf2x5 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u8mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei32_v_u8mf2x5_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf2x5_m )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u8mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8mf2x5_m_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei32_v_u8mf2x6 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u8mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei32_v_u8mf2x6_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf2x6_m )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u8mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8mf2x6_m_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei32_v_u8mf2x7 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u8mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei32_v_u8mf2x7_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf2x7_m )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u8mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8mf2x7_m_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8 (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei32_v_u8mf2x8 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_vl31 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u8mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei32_v_u8mf2x8_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf2x8_m )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u8mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8mf2x8_m_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u16m1x2 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u16m1x2_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m1x2_m )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m1x2_m_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u16m1x3 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u16m1x3_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16m1x3_m )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16m1x3_m_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u16m1x4 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u16m1x4_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16m1x4_m )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16m1x4_m_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei32_v_u16m1x5 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei32_v_u16m1x5_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16m1x5_m )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei32_v_u16m1x5_m_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei32_v_u16m1x6 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei32_v_u16m1x6_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16m1x6_m )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei32_v_u16m1x6_m_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei32_v_u16m1x7 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei32_v_u16m1x7_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16m1x7_m )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei32_v_u16m1x7_m_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8 (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei32_v_u16m1x8 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_vl31 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei32_v_u16m1x8_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16m1x8_m )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei32_v_u16m1x8_m_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2 (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u32m2x2 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_vl31 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u32m2x2_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m2x2_m )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m2x2_m_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3 (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u32m2x3 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_vl31 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei32_v_u32m2x3_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32m2x3_m )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei32_v_u32m2x3_m_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4 (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u32m2x4 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_vl31 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei32_v_u32m2x4_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32m2x4_m )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei32_v_u32m2x4_m_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2 (uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u64m4x2 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_vl31 (uint64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei32_v_u64m4x2_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m4x2_m )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei32_v_u64m4x2_m_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u8m1x2 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u8m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u8m1x2_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8m1x2_m )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u8m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8m1x2_m_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei32_v_u8m1x3 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u8m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei32_v_u8m1x3_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8m1x3_m )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u8m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8m1x3_m_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei32_v_u8m1x4 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u8m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei32_v_u8m1x4_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8m1x4_m )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u8m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8m1x4_m_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei32_v_u8m1x5 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_u8m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei32_v_u8m1x5_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_v_u8m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8m1x5_m )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_u8m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei32_v_u8m1x5_m_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei32_v_u8m1x6 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_u8m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei32_v_u8m1x6_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_v_u8m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8m1x6_m )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_u8m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei32_v_u8m1x6_m_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei32_v_u8m1x7 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_u8m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei32_v_u8m1x7_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_v_u8m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8m1x7_m )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_u8m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei32_v_u8m1x7_m_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8 (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei32_v_u8m1x8 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_vl31 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_u8m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei32_v_u8m1x8_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_v_u8m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8m1x8_m )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_u8m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei32_v_u8m1x8_m_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2 (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u16m2x2 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_vl31 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u16m2x2_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m2x2_m )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m2x2_m_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3 (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei32_v_u16m2x3 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_vl31 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei32_v_u16m2x3_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16m2x3_m )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei32_v_u16m2x3_m_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4 (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei32_v_u16m2x4 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_vl31 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei32_v_u16m2x4_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16m2x4_m )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei32_v_u16m2x4_m_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2 (uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u32m4x2 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_vl31 (uint32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei32_v_u32m4x2_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m4x2_m )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei32_v_u32m4x2_m_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2 (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei32_v_u8m2x2 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_vl31 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u8m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei32_v_u8m2x2_vl31 )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u8m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8m2x2_m )?} 1 } } */
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_m_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u8m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei32_v_u8m2x2_m_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3 (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei32_v_u8m2x3 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_vl31 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_u8m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei32_v_u8m2x3_vl31 )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_v_u8m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8m2x3_m )?} 1 } } */
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_m_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_u8m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei32_v_u8m2x3_m_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4 (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei32_v_u8m2x4 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_vl31 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_u8m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei32_v_u8m2x4_vl31 )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_v_u8m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8m2x4_m )?} 1 } } */
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_m_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_u8m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei32_v_u8m2x4_m_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2 (uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei32_v_u16m4x2 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_vl31 (uint16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei32_v_u16m4x2_vl31 )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_v_u16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m4x2_m )?} 1 } } */
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_m_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei32_v_u16m4x2_m_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf8x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u8mf8x2 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u8mf8x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u8mf8x2_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf8x2_m )?} 1 } } */
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf8x2_m_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf8x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u8mf8x3 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u8mf8x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u8mf8x3_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf8x3_m )?} 1 } } */
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf8x3_m_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf8x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u8mf8x4 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u8mf8x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u8mf8x4_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf8x4_m )?} 1 } } */
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf8x4_m_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf8x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u8mf8x5 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u8mf8x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u8mf8x5_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf8x5_m )?} 1 } } */
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf8x5_m_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf8x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u8mf8x6 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u8mf8x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u8mf8x6_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf8x6_m )?} 1 } } */
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf8x6_m_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf8x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u8mf8x7 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u8mf8x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u8mf8x7_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf8x7_m )?} 1 } } */
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf8x7_m_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8 (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf8x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u8mf8x8 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_vl31 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u8mf8x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u8mf8x8_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf8x8_m )?} 1 } } */
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf8x8_m_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u16mf4x2 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u16mf4x2_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16mf4x2_m )?} 1 } } */
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16mf4x2_m_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u16mf4x3 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u16mf4x3_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16mf4x3_m )?} 1 } } */
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16mf4x3_m_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u16mf4x4 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u16mf4x4_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16mf4x4_m )?} 1 } } */
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16mf4x4_m_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u16mf4x5 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u16mf4x5_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16mf4x5_m )?} 1 } } */
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16mf4x5_m_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u16mf4x6 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u16mf4x6_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16mf4x6_m )?} 1 } } */
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16mf4x6_m_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u16mf4x7 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u16mf4x7_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16mf4x7_m )?} 1 } } */
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16mf4x7_m_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8 (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u16mf4x8 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_vl31 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u16mf4x8_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16mf4x8_m )?} 1 } } */
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16mf4x8_m_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u32mf2x2 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u32mf2x2_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32mf2x2_m )?} 1 } } */
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32mf2x2_m_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u32mf2x3 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u32mf2x3_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32mf2x3_m )?} 1 } } */
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32mf2x3_m_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u32mf2x4 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u32mf2x4_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32mf2x4_m )?} 1 } } */
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32mf2x4_m_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u32mf2x5 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u32mf2x5_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u32mf2x5_m )?} 1 } } */
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u32mf2x5_m_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u32mf2x6 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u32mf2x6_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u32mf2x6_m )?} 1 } } */
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u32mf2x6_m_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u32mf2x7 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u32mf2x7_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u32mf2x7_m )?} 1 } } */
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u32mf2x7_m_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8 (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u32mf2x8 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_vl31 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u32mf2x8_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u32mf2x8_m )?} 1 } } */
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u32mf2x8_m_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u64m1x2 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg2ei64_v_u64m1x2_vl31 )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m1x2_m )?} 1 } } */
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m1x2_m_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u64m1x3 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg3ei64_v_u64m1x3_vl31 )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u64m1x3_m )?} 1 } } */
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u64m1x3_m_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u64m1x4 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg4ei64_v_u64m1x4_vl31 )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u64m1x4_m )?} 1 } } */
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u64m1x4_m_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u64m1x5 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg5ei64_v_u64m1x5_vl31 )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u64m1x5_m )?} 1 } } */
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u64m1x5_m_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u64m1x6 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg6ei64_v_u64m1x6_vl31 )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u64m1x6_m )?} 1 } } */
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u64m1x6_m_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u64m1x7 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg7ei64_v_u64m1x7_vl31 )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u64m1x7_m )?} 1 } } */
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u64m1x7_m_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8 (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u64m1x8 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_vl31 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxseg8ei64_v_u64m1x8_vl31 )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u64m1x8_m )?} 1 } } */
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u64m1x8_m_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u8mf4x2 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u8mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u8mf4x2_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf4x2_m )?} 1 } } */
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u8mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf4x2_m_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u8mf4x3 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u8mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u8mf4x3_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf4x3_m )?} 1 } } */
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u8mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf4x3_m_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u8mf4x4 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u8mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u8mf4x4_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf4x4_m )?} 1 } } */
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u8mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf4x4_m_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u8mf4x5 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u8mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u8mf4x5_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf4x5_m )?} 1 } } */
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u8mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf4x5_m_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u8mf4x6 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u8mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u8mf4x6_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf4x6_m )?} 1 } } */
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u8mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf4x6_m_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u8mf4x7 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u8mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u8mf4x7_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf4x7_m )?} 1 } } */
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u8mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf4x7_m_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8 (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u8mf4x8 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_vl31 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u8mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u8mf4x8_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf4x8_m )?} 1 } } */
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u8mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf4x8_m_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u16mf2x2 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u16mf2x2_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16mf2x2_m )?} 1 } } */
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16mf2x2_m_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u16mf2x3 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u16mf2x3_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16mf2x3_m )?} 1 } } */
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16mf2x3_m_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u16mf2x4 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u16mf2x4_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16mf2x4_m )?} 1 } } */
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16mf2x4_m_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u16mf2x5 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u16mf2x5_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16mf2x5_m )?} 1 } } */
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16mf2x5_m_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u16mf2x6 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u16mf2x6_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16mf2x6_m )?} 1 } } */
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16mf2x6_m_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u16mf2x7 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u16mf2x7_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16mf2x7_m )?} 1 } } */
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16mf2x7_m_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8 (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u16mf2x8 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_vl31 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u16mf2x8_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16mf2x8_m )?} 1 } } */
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16mf2x8_m_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u32m1x2 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u32m1x2_vl31 )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m1x2_m )?} 1 } } */
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m1x2_m_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u32m1x3 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u32m1x3_vl31 )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32m1x3_m )?} 1 } } */
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32m1x3_m_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u32m1x4 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u32m1x4_vl31 )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32m1x4_m )?} 1 } } */
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32m1x4_m_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u32m1x5 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg5ei64_v_u32m1x5_vl31 )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u32m1x5_m )?} 1 } } */
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg5ei64_v_u32m1x5_m_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u32m1x6 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg6ei64_v_u32m1x6_vl31 )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u32m1x6_m )?} 1 } } */
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg6ei64_v_u32m1x6_m_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u32m1x7 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg7ei64_v_u32m1x7_vl31 )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u32m1x7_m )?} 1 } } */
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg7ei64_v_u32m1x7_m_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8 (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u32m1x8 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_vl31 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg8ei64_v_u32m1x8_vl31 )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u32m1x8_m )?} 1 } } */
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg8ei64_v_u32m1x8_m_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2 (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u64m2x2 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_vl31 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg2ei64_v_u64m2x2_vl31 )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m2x2_m )?} 1 } } */
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m2x2_m_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3 (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u64m2x3 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_vl31 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg3ei64_v_u64m2x3_vl31 )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u64m2x3_m )?} 1 } } */
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg3ei64_v_u64m2x3_m_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4 (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u64m2x4 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_vl31 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxseg4ei64_v_u64m2x4_vl31 )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u64m2x4_m )?} 1 } } */
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vloxseg4ei64_v_u64m2x4_m_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u8mf2x2 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u8mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u8mf2x2_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf2x2_m )?} 1 } } */
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u8mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8mf2x2_m_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u8mf2x3 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u8mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u8mf2x3_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf2x3_m )?} 1 } } */
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u8mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8mf2x3_m_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u8mf2x4 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u8mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u8mf2x4_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf2x4_m )?} 1 } } */
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u8mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8mf2x4_m_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei64_v_u8mf2x5 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u8mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei64_v_u8mf2x5_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf2x5_m )?} 1 } } */
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u8mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8mf2x5_m_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei64_v_u8mf2x6 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u8mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei64_v_u8mf2x6_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf2x6_m )?} 1 } } */
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u8mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8mf2x6_m_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei64_v_u8mf2x7 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u8mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei64_v_u8mf2x7_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf2x7_m )?} 1 } } */
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u8mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8mf2x7_m_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8 (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei64_v_u8mf2x8 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_vl31 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u8mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei64_v_u8mf2x8_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf2x8_m )?} 1 } } */
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u8mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8mf2x8_m_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u16m1x2 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u16m1x2_vl31 )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16m1x2_m )?} 1 } } */
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16m1x2_m_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u16m1x3 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u16m1x3_vl31 )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16m1x3_m )?} 1 } } */
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16m1x3_m_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u16m1x4 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u16m1x4_vl31 )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16m1x4_m )?} 1 } } */
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16m1x4_m_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei64_v_u16m1x5 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg5ei64_v_u16m1x5_vl31 )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16m1x5_m )?} 1 } } */
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg5ei64_v_u16m1x5_m_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei64_v_u16m1x6 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg6ei64_v_u16m1x6_vl31 )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16m1x6_m )?} 1 } } */
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg6ei64_v_u16m1x6_m_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei64_v_u16m1x7 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg7ei64_v_u16m1x7_vl31 )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16m1x7_m )?} 1 } } */
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg7ei64_v_u16m1x7_m_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8 (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei64_v_u16m1x8 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_vl31 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg8ei64_v_u16m1x8_vl31 )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16m1x8_m )?} 1 } } */
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg8ei64_v_u16m1x8_m_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2 (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u32m2x2 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_vl31 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u32m2x2_vl31 )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m2x2_m )?} 1 } } */
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m2x2_m_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3 (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u32m2x3 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_vl31 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg3ei64_v_u32m2x3_vl31 )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32m2x3_m )?} 1 } } */
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg3ei64_v_u32m2x3_m_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4 (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u32m2x4 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_vl31 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg4ei64_v_u32m2x4_vl31 )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32m2x4_m )?} 1 } } */
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg4ei64_v_u32m2x4_m_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2 (uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u64m4x2 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_vl31 (uint64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxseg2ei64_v_u64m4x2_vl31 )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m4x2_m )?} 1 } } */
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vloxseg2ei64_v_u64m4x2_m_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u8m1x2 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u8m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u8m1x2_vl31 )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u8m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8m1x2_m )?} 1 } } */
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u8m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u8m1x2_m_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei64_v_u8m1x3 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u8m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei64_v_u8m1x3_vl31 )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u8m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8m1x3_m )?} 1 } } */
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u8m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei64_v_u8m1x3_m_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei64_v_u8m1x4 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u8m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei64_v_u8m1x4_vl31 )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u8m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8m1x4_m )?} 1 } } */
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u8m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei64_v_u8m1x4_m_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg5ei64_v_u8m1x5 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_u8m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg5ei64_v_u8m1x5_vl31 )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_v_u8m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8m1x5_m )?} 1 } } */
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_u8m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg5ei64_v_u8m1x5_m_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg6ei64_v_u8m1x6 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_u8m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg6ei64_v_u8m1x6_vl31 )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_v_u8m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8m1x6_m )?} 1 } } */
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_u8m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg6ei64_v_u8m1x6_m_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg7ei64_v_u8m1x7 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_u8m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg7ei64_v_u8m1x7_vl31 )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_v_u8m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8m1x7_m )?} 1 } } */
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_u8m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg7ei64_v_u8m1x7_m_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8 (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg8ei64_v_u8m1x8 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_vl31 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_u8m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg8ei64_v_u8m1x8_vl31 )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_v_u8m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8m1x8_m )?} 1 } } */
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_u8m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg8ei64_v_u8m1x8_m_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2 (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u16m2x2 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_vl31 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u16m2x2_vl31 )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16m2x2_m )?} 1 } } */
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u16m2x2_m_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3 (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei64_v_u16m2x3 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_vl31 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg3ei64_v_u16m2x3_vl31 )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_v_u16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16m2x3_m )?} 1 } } */
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg3ei64_v_u16m2x3_m_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4 (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei64_v_u16m2x4 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_vl31 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg4ei64_v_u16m2x4_vl31 )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_v_u16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16m2x4_m )?} 1 } } */
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg4ei64_v_u16m2x4_m_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2 (uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u32m4x2 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_vl31 (uint32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxseg2ei64_v_u32m4x2_vl31 )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_v_u32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m4x2_m )?} 1 } } */
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vloxseg.ei..?\.v).)*\s+vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vloxseg2ei64_v_u32m4x2_m_vl31 )?} 1 } } */
