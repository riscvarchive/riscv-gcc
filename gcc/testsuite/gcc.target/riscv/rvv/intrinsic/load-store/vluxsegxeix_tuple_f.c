
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16mf4x2 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16mf4x2_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16mf4x2_m )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_m_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16mf4x2_m_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16mf4x3 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16mf4x3_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16mf4x3_m )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_m_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16mf4x3_m_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16mf4x4 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16mf4x4_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16mf4x4_m )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_m_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16mf4x4_m_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16mf4x5 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16mf4x5_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16mf4x5_m )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_m_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16mf4x5_m_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16mf4x6 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16mf4x6_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16mf4x6_m )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_m_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16mf4x6_m_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16mf4x7 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16mf4x7_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16mf4x7_m )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_m_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16mf4x7_m_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16mf4x8 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16mf4x8_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16mf4x8_m )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_m_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16mf4x8_m_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32mf2x2 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32mf2x2_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32mf2x2_m )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_m_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32mf2x2_m_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32mf2x3 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32mf2x3_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32mf2x3_m )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_m_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32mf2x3_m_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32mf2x4 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32mf2x4_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32mf2x4_m )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_m_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32mf2x4_m_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f32mf2x5 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f32mf2x5_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f32mf2x5_m )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_m_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f32mf2x5_m_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f32mf2x6 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f32mf2x6_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f32mf2x6_m )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_m_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f32mf2x6_m_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f32mf2x7 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f32mf2x7_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f32mf2x7_m )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_m_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f32mf2x7_m_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f32mf2x8 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f32mf2x8_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f32mf2x8_m )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_m_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f32mf2x8_m_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m1x2 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m1x2_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m1x2_m )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_m_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m1x2_m_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f64m1x3 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f64m1x3_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f64m1x3_m )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_m_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f64m1x3_m_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f64m1x4 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f64m1x4_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f64m1x4_m )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_m_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f64m1x4_m_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f64m1x5 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f64m1x5_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f64m1x5_m )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_m_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f64m1x5_m_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f64m1x6 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f64m1x6_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f64m1x6_m )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_m_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f64m1x6_m_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f64m1x7 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f64m1x7_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f64m1x7_m )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_m_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f64m1x7_m_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f64m1x8 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f64m1x8_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f64m1x8_m )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_m_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f64m1x8_m_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16mf2x2 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16mf2x2_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16mf2x2_m )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_m_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16mf2x2_m_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16mf2x3 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16mf2x3_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16mf2x3_m )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_m_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16mf2x3_m_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16mf2x4 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16mf2x4_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16mf2x4_m )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_m_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16mf2x4_m_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16mf2x5 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16mf2x5_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16mf2x5_m )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_m_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16mf2x5_m_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16mf2x6 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16mf2x6_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16mf2x6_m )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_m_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16mf2x6_m_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16mf2x7 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16mf2x7_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16mf2x7_m )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_m_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16mf2x7_m_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16mf2x8 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16mf2x8_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16mf2x8_m )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_m_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16mf2x8_m_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m1x2 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m1x2_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m1x2_m )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_m_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m1x2_m_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32m1x3 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32m1x3_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32m1x3_m )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_m_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32m1x3_m_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32m1x4 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32m1x4_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32m1x4_m )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_m_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32m1x4_m_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f32m1x5 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f32m1x5_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f32m1x5_m )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_m_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f32m1x5_m_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f32m1x6 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f32m1x6_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f32m1x6_m )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_m_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f32m1x6_m_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f32m1x7 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f32m1x7_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f32m1x7_m )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_m_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f32m1x7_m_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f32m1x8 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f32m1x8_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f32m1x8_m )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_m_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f32m1x8_m_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m2x2 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m2x2_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m2x2_m )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_m_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m2x2_m_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f64m2x3 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f64m2x3_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f64m2x3_m )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_m_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f64m2x3_m_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f64m2x4 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f64m2x4_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f64m2x4_m )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_m_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f64m2x4_m_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16m1x2 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16m1x2_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m1x2_m )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_m_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m1x2_m_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16m1x3 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16m1x3_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16m1x3_m )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_m_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16m1x3_m_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16m1x4 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16m1x4_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16m1x4_m )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_m_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16m1x4_m_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16m1x5 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_f16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_f16m1x5_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16m1x5_m )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_m_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_f16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_f16m1x5_m_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16m1x6 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_f16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_f16m1x6_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16m1x6_m )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_m_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_f16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_f16m1x6_m_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16m1x7 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_f16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_f16m1x7_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16m1x7_m )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_m_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_f16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_f16m1x7_m_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16m1x8 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_f16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_f16m1x8_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16m1x8_m )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_m_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_f16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_f16m1x8_m_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m2x2 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m2x2_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m2x2_m )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_m_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m2x2_m_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32m2x3 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f32m2x3_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32m2x3_m )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_m_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f32m2x3_m_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32m2x4 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f32m2x4_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32m2x4_m )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_m_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f32m2x4_m_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2 (float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m4x2 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_vl31 (float64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f64m4x2_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m4x2_m )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_m_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f64m4x2_m_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16m2x2 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f16m2x2_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m2x2_m )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_m_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m2x2_m_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16m2x3 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_f16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_f16m2x3_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16m2x3_m )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_m_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_f16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_f16m2x3_m_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16m2x4 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_f16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_f16m2x4_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16m2x4_m )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_m_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_f16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_f16m2x4_m_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2 (float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m4x2 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_vl31 (float32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_f32m4x2_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m4x2_m )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_m_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_f32m4x2_m_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2 (float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_f16m4x2 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_vl31 (float16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_f16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_f16m4x2_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m4x2_m )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_m_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_f16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_f16m4x2_m_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16mf4x2 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16mf4x2_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16mf4x2_m )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_m_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16mf4x2_m_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16mf4x3 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16mf4x3_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16mf4x3_m )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_m_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16mf4x3_m_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16mf4x4 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16mf4x4_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16mf4x4_m )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_m_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16mf4x4_m_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16mf4x5 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16mf4x5_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16mf4x5_m )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_m_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16mf4x5_m_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16mf4x6 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16mf4x6_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16mf4x6_m )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_m_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16mf4x6_m_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16mf4x7 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16mf4x7_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16mf4x7_m )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_m_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16mf4x7_m_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16mf4x8 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16mf4x8_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16mf4x8_m )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_m_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16mf4x8_m_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32mf2x2 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32mf2x2_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32mf2x2_m )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_m_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32mf2x2_m_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32mf2x3 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32mf2x3_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32mf2x3_m )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_m_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32mf2x3_m_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32mf2x4 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32mf2x4_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32mf2x4_m )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_m_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32mf2x4_m_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f32mf2x5 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f32mf2x5_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f32mf2x5_m )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_m_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f32mf2x5_m_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f32mf2x6 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f32mf2x6_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f32mf2x6_m )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_m_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f32mf2x6_m_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f32mf2x7 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f32mf2x7_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f32mf2x7_m )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_m_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f32mf2x7_m_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f32mf2x8 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f32mf2x8_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f32mf2x8_m )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_m_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f32mf2x8_m_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m1x2 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m1x2_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m1x2_m )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_m_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m1x2_m_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f64m1x3 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f64m1x3_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f64m1x3_m )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_m_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f64m1x3_m_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f64m1x4 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f64m1x4_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f64m1x4_m )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_m_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f64m1x4_m_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f64m1x5 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f64m1x5_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f64m1x5_m )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_m_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f64m1x5_m_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f64m1x6 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f64m1x6_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f64m1x6_m )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_m_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f64m1x6_m_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f64m1x7 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f64m1x7_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f64m1x7_m )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_m_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f64m1x7_m_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f64m1x8 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f64m1x8_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f64m1x8_m )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_m_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f64m1x8_m_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16mf2x2 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16mf2x2_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16mf2x2_m )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_m_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16mf2x2_m_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16mf2x3 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16mf2x3_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16mf2x3_m )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_m_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16mf2x3_m_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16mf2x4 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16mf2x4_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16mf2x4_m )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_m_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16mf2x4_m_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16mf2x5 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16mf2x5_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16mf2x5_m )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_m_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16mf2x5_m_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16mf2x6 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16mf2x6_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16mf2x6_m )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_m_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16mf2x6_m_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16mf2x7 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16mf2x7_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16mf2x7_m )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_m_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16mf2x7_m_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16mf2x8 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16mf2x8_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16mf2x8_m )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_m_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16mf2x8_m_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32m1x2 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32m1x2_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m1x2_m )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_m_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m1x2_m_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32m1x3 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32m1x3_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32m1x3_m )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_m_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32m1x3_m_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32m1x4 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32m1x4_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32m1x4_m )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_m_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32m1x4_m_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f32m1x5 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f32m1x5_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f32m1x5_m )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_m_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f32m1x5_m_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f32m1x6 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f32m1x6_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f32m1x6_m )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_m_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f32m1x6_m_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f32m1x7 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f32m1x7_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f32m1x7_m )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_m_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f32m1x7_m_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f32m1x8 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f32m1x8_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f32m1x8_m )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_m_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f32m1x8_m_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m2x2 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m2x2_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m2x2_m )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_m_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m2x2_m_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f64m2x3 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f64m2x3_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f64m2x3_m )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_m_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f64m2x3_m_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f64m2x4 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f64m2x4_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f64m2x4_m )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_m_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f64m2x4_m_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16m1x2 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f16m1x2_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m1x2_m )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_m_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m1x2_m_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16m1x3 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f16m1x3_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16m1x3_m )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_m_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16m1x3_m_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16m1x4 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f16m1x4_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16m1x4_m )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_m_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16m1x4_m_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16m1x5 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_f16m1x5_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16m1x5_m )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_m_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_f16m1x5_m_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16m1x6 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_f16m1x6_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16m1x6_m )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_m_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_f16m1x6_m_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16m1x7 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_f16m1x7_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16m1x7_m )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_m_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_f16m1x7_m_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16m1x8 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_f16m1x8_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16m1x8_m )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_m_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_f16m1x8_m_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32m2x2 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f32m2x2_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m2x2_m )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_m_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m2x2_m_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32m2x3 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_f32m2x3_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32m2x3_m )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_m_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_f32m2x3_m_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32m2x4 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_f32m2x4_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32m2x4_m )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_m_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_f32m2x4_m_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2 (float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m4x2 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_vl31 (float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_f64m4x2_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m4x2_m )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_m_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f64m4x2_m_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_f16m2x2 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_f16m2x2_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m2x2_m )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_m_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m2x2_m_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_f16m2x3 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_f16m2x3_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16m2x3_m )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_m_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_f16m2x3_m_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_f16m2x4 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_f16m2x4_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16m2x4_m )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_m_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_f16m2x4_m_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2 (float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_f32m4x2 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_vl31 (float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_f32m4x2_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m4x2_m )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_m_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_f32m4x2_m_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2 (float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_f16m4x2 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_vl31 (float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_f16m4x2_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m4x2_m )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_m_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_f16m4x2_m_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f16mf4x2 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f16mf4x2_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16mf4x2_m )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_m_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16mf4x2_m_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f16mf4x3 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f16mf4x3_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16mf4x3_m )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_m_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16mf4x3_m_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f16mf4x4 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f16mf4x4_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16mf4x4_m )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_m_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16mf4x4_m_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f16mf4x5 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f16mf4x5_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16mf4x5_m )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_m_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16mf4x5_m_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f16mf4x6 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f16mf4x6_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16mf4x6_m )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_m_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16mf4x6_m_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f16mf4x7 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f16mf4x7_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16mf4x7_m )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_m_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16mf4x7_m_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f16mf4x8 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_vl31 (float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f16mf4x8_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16mf4x8_m )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_m_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16mf4x8_m_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f32mf2x2 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f32mf2x2_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32mf2x2_m )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_m_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32mf2x2_m_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f32mf2x3 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f32mf2x3_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32mf2x3_m )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_m_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32mf2x3_m_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f32mf2x4 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f32mf2x4_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32mf2x4_m )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_m_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32mf2x4_m_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f32mf2x5 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f32mf2x5_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f32mf2x5_m )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_m_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f32mf2x5_m_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f32mf2x6 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f32mf2x6_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f32mf2x6_m )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_m_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f32mf2x6_m_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f32mf2x7 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f32mf2x7_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f32mf2x7_m )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_m_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f32mf2x7_m_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f32mf2x8 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_vl31 (float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f32mf2x8_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f32mf2x8_m )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_m_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f32mf2x8_m_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f64m1x2 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f64m1x2_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m1x2_m )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_m_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m1x2_m_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f64m1x3 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f64m1x3_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f64m1x3_m )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_m_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f64m1x3_m_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f64m1x4 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f64m1x4_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f64m1x4_m )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_m_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f64m1x4_m_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f64m1x5 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f64m1x5_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f64m1x5_m )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_m_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f64m1x5_m_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f64m1x6 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f64m1x6_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f64m1x6_m )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_m_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f64m1x6_m_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f64m1x7 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f64m1x7_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f64m1x7_m )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_m_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f64m1x7_m_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f64m1x8 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_vl31 (float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f64m1x8_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f64m1x8_m )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_m_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f64m1x8_m_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f16mf2x2 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f16mf2x2_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16mf2x2_m )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_m_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16mf2x2_m_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f16mf2x3 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f16mf2x3_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16mf2x3_m )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_m_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16mf2x3_m_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f16mf2x4 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f16mf2x4_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16mf2x4_m )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_m_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16mf2x4_m_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f16mf2x5 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f16mf2x5_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16mf2x5_m )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_m_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16mf2x5_m_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f16mf2x6 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f16mf2x6_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16mf2x6_m )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_m_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16mf2x6_m_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f16mf2x7 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f16mf2x7_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16mf2x7_m )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_m_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16mf2x7_m_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f16mf2x8 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_vl31 (float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f16mf2x8_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16mf2x8_m )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_m_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16mf2x8_m_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f32m1x2 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f32m1x2_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m1x2_m )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_m_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m1x2_m_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f32m1x3 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f32m1x3_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32m1x3_m )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_m_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32m1x3_m_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f32m1x4 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f32m1x4_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32m1x4_m )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_m_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32m1x4_m_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f32m1x5 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_f32m1x5_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f32m1x5_m )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_m_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_f32m1x5_m_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f32m1x6 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_f32m1x6_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f32m1x6_m )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_m_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_f32m1x6_m_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f32m1x7 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_f32m1x7_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f32m1x7_m )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_m_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_f32m1x7_m_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f32m1x8 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_vl31 (float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_f32m1x8_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f32m1x8_m )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_m_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_f32m1x8_m_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f64m2x2 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_vl31 (float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_f64m2x2_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m2x2_m )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_m_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m2x2_m_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f64m2x3 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_vl31 (float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_f64m2x3_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f64m2x3_m )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_m_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f64m2x3_m_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f64m2x4 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_vl31 (float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_f64m2x4_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f64m2x4_m )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_m_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f64m2x4_m_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f16m1x2 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f16m1x2_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m1x2_m )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_m_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m1x2_m_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_f16m1x3 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_f16m1x3_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16m1x3_m )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_m_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16m1x3_m_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_f16m1x4 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_f16m1x4_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16m1x4_m )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_m_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16m1x4_m_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_f16m1x5 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_f16m1x5_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16m1x5_m )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_m_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_f16m1x5_m_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_f16m1x6 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_f16m1x6_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16m1x6_m )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_m_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_f16m1x6_m_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_f16m1x7 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_f16m1x7_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16m1x7_m )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_m_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_f16m1x7_m_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_f16m1x8 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_vl31 (float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_f16m1x8_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16m1x8_m )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_m_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_f16m1x8_m_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f32m2x2 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_vl31 (float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f32m2x2_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m2x2_m )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_m_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m2x2_m_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_f32m2x3 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_vl31 (float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_f32m2x3_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32m2x3_m )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_m_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_f32m2x3_m_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_f32m2x4 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_vl31 (float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_f32m2x4_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32m2x4_m )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_m_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_f32m2x4_m_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2 (float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f64m4x2 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_vl31 (float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_f64m4x2_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m4x2_m )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_m_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_f64m4x2_m_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_f16m2x2 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_vl31 (float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_f16m2x2_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m2x2_m )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_m_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m2x2_m_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_f16m2x3 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_vl31 (float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_f16m2x3_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16m2x3_m )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_m_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_f16m2x3_m_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_f16m2x4 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_vl31 (float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_f16m2x4_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16m2x4_m )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_m_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_f16m2x4_m_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2 (float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_f32m4x2 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_vl31 (float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_f32m4x2_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m4x2_m )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_m_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_f32m4x2_m_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2 (float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_f16m4x2 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_vl31 (float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_f16m4x2_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m4x2_m )?} 1 } } */
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_m_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_f16m4x2_m_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f16mf4x2 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f16mf4x2_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16mf4x2_m )?} 1 } } */
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_m_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16mf4x2_m_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f16mf4x3 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f16mf4x3_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16mf4x3_m )?} 1 } } */
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_m_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16mf4x3_m_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f16mf4x4 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f16mf4x4_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16mf4x4_m )?} 1 } } */
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_m_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16mf4x4_m_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f16mf4x5 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f16mf4x5_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16mf4x5_m )?} 1 } } */
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_m_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16mf4x5_m_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f16mf4x6 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f16mf4x6_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16mf4x6_m )?} 1 } } */
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_m_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16mf4x6_m_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f16mf4x7 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f16mf4x7_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16mf4x7_m )?} 1 } } */
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_m_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16mf4x7_m_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f16mf4x8 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_vl31 (float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f16mf4x8_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16mf4x8_m )?} 1 } } */
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_m_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16mf4x8_m_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f32mf2x2 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f32mf2x2_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32mf2x2_m )?} 1 } } */
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_m_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32mf2x2_m_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f32mf2x3 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f32mf2x3_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32mf2x3_m )?} 1 } } */
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_m_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32mf2x3_m_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f32mf2x4 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f32mf2x4_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32mf2x4_m )?} 1 } } */
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_m_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32mf2x4_m_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f32mf2x5 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f32mf2x5_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f32mf2x5_m )?} 1 } } */
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_m_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f32mf2x5_m_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f32mf2x6 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f32mf2x6_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f32mf2x6_m )?} 1 } } */
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_m_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f32mf2x6_m_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f32mf2x7 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f32mf2x7_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f32mf2x7_m )?} 1 } } */
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_m_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f32mf2x7_m_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f32mf2x8 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_vl31 (float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f32mf2x8_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f32mf2x8_m )?} 1 } } */
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_m_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f32mf2x8_m_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f64m1x2 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_f64m1x2_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m1x2_m )?} 1 } } */
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_m_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m1x2_m_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f64m1x3 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_f64m1x3_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f64m1x3_m )?} 1 } } */
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_m_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f64m1x3_m_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f64m1x4 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_f64m1x4_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f64m1x4_m )?} 1 } } */
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_m_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f64m1x4_m_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f64m1x5 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_f64m1x5_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f64m1x5_m )?} 1 } } */
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_m_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f64m1x5_m_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f64m1x6 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_f64m1x6_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f64m1x6_m )?} 1 } } */
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_m_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f64m1x6_m_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f64m1x7 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_f64m1x7_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f64m1x7_m )?} 1 } } */
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_m_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f64m1x7_m_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f64m1x8 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_vl31 (float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_f64m1x8_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f64m1x8_m )?} 1 } } */
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_m_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f64m1x8_m_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f16mf2x2 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f16mf2x2_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16mf2x2_m )?} 1 } } */
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_m_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16mf2x2_m_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f16mf2x3 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f16mf2x3_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16mf2x3_m )?} 1 } } */
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_m_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16mf2x3_m_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f16mf2x4 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f16mf2x4_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16mf2x4_m )?} 1 } } */
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_m_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16mf2x4_m_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_f16mf2x5 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_f16mf2x5_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16mf2x5_m )?} 1 } } */
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_m_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16mf2x5_m_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_f16mf2x6 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_f16mf2x6_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16mf2x6_m )?} 1 } } */
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_m_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16mf2x6_m_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_f16mf2x7 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_f16mf2x7_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16mf2x7_m )?} 1 } } */
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_m_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16mf2x7_m_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_f16mf2x8 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_vl31 (float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_f16mf2x8_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16mf2x8_m )?} 1 } } */
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_m_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16mf2x8_m_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f32m1x2 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f32m1x2_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m1x2_m )?} 1 } } */
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_m_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m1x2_m_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f32m1x3 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f32m1x3_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32m1x3_m )?} 1 } } */
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_m_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32m1x3_m_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f32m1x4 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f32m1x4_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32m1x4_m )?} 1 } } */
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_m_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32m1x4_m_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_f32m1x5 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_f32m1x5_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_f32m1x5_m )?} 1 } } */
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_m_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_f32m1x5_m_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_f32m1x6 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_f32m1x6_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_f32m1x6_m )?} 1 } } */
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_m_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_f32m1x6_m_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_f32m1x7 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_f32m1x7_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_f32m1x7_m )?} 1 } } */
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_m_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_f32m1x7_m_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_f32m1x8 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_vl31 (float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_f32m1x8_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_f32m1x8_m )?} 1 } } */
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_m_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_f32m1x8_m_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f64m2x2 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_vl31 (float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_f64m2x2_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m2x2_m )?} 1 } } */
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_m_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m2x2_m_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f64m2x3 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_vl31 (float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_f64m2x3_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f64m2x3_m )?} 1 } } */
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_m_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_f64m2x3_m_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f64m2x4 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_vl31 (float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_f64m2x4_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f64m2x4_m )?} 1 } } */
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_m_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_f64m2x4_m_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f16m1x2 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f16m1x2_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16m1x2_m )?} 1 } } */
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_m_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16m1x2_m_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_f16m1x3 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_f16m1x3_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16m1x3_m )?} 1 } } */
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_m_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16m1x3_m_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_f16m1x4 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_f16m1x4_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16m1x4_m )?} 1 } } */
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_m_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16m1x4_m_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_f16m1x5 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_f16m1x5_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16m1x5_m )?} 1 } } */
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_m_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_f16m1x5_m_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_f16m1x6 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_f16m1x6_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16m1x6_m )?} 1 } } */
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_m_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_f16m1x6_m_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_f16m1x7 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_f16m1x7_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16m1x7_m )?} 1 } } */
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_m_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_f16m1x7_m_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_f16m1x8 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_vl31 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_f16m1x8_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16m1x8_m )?} 1 } } */
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_m_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_f16m1x8_m_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f32m2x2 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_vl31 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f32m2x2_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m2x2_m )?} 1 } } */
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_m_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m2x2_m_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_f32m2x3 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_vl31 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_f32m2x3_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32m2x3_m )?} 1 } } */
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_m_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_f32m2x3_m_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_f32m2x4 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_vl31 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_f32m2x4_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32m2x4_m )?} 1 } } */
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_m_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_f32m2x4_m_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2 (float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f64m4x2 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_vl31 (float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_f64m4x2_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m4x2_m )?} 1 } } */
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_m_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_f64m4x2_m_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_f16m2x2 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_vl31 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_f16m2x2_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16m2x2_m )?} 1 } } */
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_m_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_f16m2x2_m_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_f16m2x3 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_vl31 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_f16m2x3_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16m2x3_m )?} 1 } } */
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_m_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_f16m2x3_m_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_f16m2x4 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_vl31 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_f16m2x4_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16m2x4_m )?} 1 } } */
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_m_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_f16m2x4_m_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2 (float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2 (base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_f32m4x2 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_vl31 (float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2 (base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_f32m4x2_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2_m (mask, dest, base, bindex, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m4x2_m )?} 1 } } */
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_m_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_m (mask, dest, base, bindex, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_f32m4x2_m_vl31 )?} 1 } } */
