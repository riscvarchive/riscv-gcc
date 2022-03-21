
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u8mf8x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf8x2_ta_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u8mf8x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf8x2_tu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u8mf8x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf8x3_ta_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u8mf8x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf8x3_tu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u8mf8x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf8x4_ta_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u8mf8x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf8x4_tu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u8mf8x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf8x5_ta_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u8mf8x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf8x5_tu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u8mf8x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf8x6_ta_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u8mf8x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf8x6_tu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u8mf8x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf8x7_ta_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u8mf8x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf8x7_tu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u8mf8x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf8x8_ta_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u8mf8x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf8x8_tu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u16mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16mf4x2_ta_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u16mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16mf4x2_tu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u16mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16mf4x3_ta_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u16mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16mf4x3_tu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u16mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16mf4x4_ta_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u16mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16mf4x4_tu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u16mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16mf4x5_ta_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u16mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16mf4x5_tu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u16mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16mf4x6_ta_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u16mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16mf4x6_tu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u16mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16mf4x7_ta_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u16mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16mf4x7_tu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u16mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16mf4x8_ta_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u16mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16mf4x8_tu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u32mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32mf2x2_ta_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u32mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32mf2x2_tu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u32mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32mf2x3_ta_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u32mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32mf2x3_tu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u32mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32mf2x4_ta_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u32mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32mf2x4_tu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u32mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u32mf2x5_ta_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u32mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u32mf2x5_tu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u32mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u32mf2x6_ta_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u32mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u32mf2x6_tu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u32mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u32mf2x7_ta_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u32mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u32mf2x7_tu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u32mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u32mf2x8_ta_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u32mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u32mf2x8_tu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u64m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m1x2_ta_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u64m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m1x2_tu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u64m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u64m1x3_ta_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u64m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u64m1x3_tu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u64m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u64m1x4_ta_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u64m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u64m1x4_tu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u64m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u64m1x5_ta_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u64m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u64m1x5_tu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u64m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u64m1x6_ta_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u64m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u64m1x6_tu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u64m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u64m1x7_ta_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u64m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u64m1x7_tu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u64m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u64m1x8_ta_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u64m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u64m1x8_tu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u8mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf4x2_ta_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u8mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf4x2_tu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u8mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf4x3_ta_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u8mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf4x3_tu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u8mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf4x4_ta_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u8mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf4x4_tu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u8mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf4x5_ta_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u8mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf4x5_tu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u8mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf4x6_ta_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u8mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf4x6_tu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u8mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf4x7_ta_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u8mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf4x7_tu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u8mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf4x8_ta_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u8mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf4x8_tu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u16mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16mf2x2_ta_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u16mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16mf2x2_tu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u16mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16mf2x3_ta_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u16mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16mf2x3_tu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u16mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16mf2x4_ta_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u16mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16mf2x4_tu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u16mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16mf2x5_ta_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u16mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16mf2x5_tu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u16mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16mf2x6_ta_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u16mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16mf2x6_tu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u16mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16mf2x7_ta_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u16mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16mf2x7_tu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u16mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16mf2x8_ta_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u16mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16mf2x8_tu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u32m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m1x2_ta_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u32m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m1x2_tu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u32m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32m1x3_ta_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u32m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32m1x3_tu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u32m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32m1x4_ta_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u32m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32m1x4_tu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u32m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u32m1x5_ta_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u32m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u32m1x5_tu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u32m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u32m1x6_ta_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u32m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u32m1x6_tu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u32m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u32m1x7_ta_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u32m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u32m1x7_tu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u32m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u32m1x8_ta_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u32m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u32m1x8_tu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u64m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m2x2_ta_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u64m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m2x2_tu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u64m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u64m2x3_ta_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u64m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u64m2x3_tu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u64m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u64m2x4_ta_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u64m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u64m2x4_tu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u8mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf2x2_ta_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u8mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8mf2x2_tu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u8mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf2x3_ta_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u8mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8mf2x3_tu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u8mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf2x4_ta_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u8mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8mf2x4_tu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u8mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf2x5_ta_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u8mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8mf2x5_tu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u8mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf2x6_ta_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u8mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8mf2x6_tu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u8mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf2x7_ta_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u8mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8mf2x7_tu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u8mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf2x8_ta_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u8mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8mf2x8_tu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u16m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16m1x2_ta_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u16m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16m1x2_tu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u16m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16m1x3_ta_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u16m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16m1x3_tu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u16m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16m1x4_ta_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u16m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16m1x4_tu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u16m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16m1x5_ta_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u16m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u16m1x5_tu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u16m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16m1x6_ta_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u16m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u16m1x6_tu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u16m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16m1x7_ta_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u16m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u16m1x7_tu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u16m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16m1x8_ta_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u16m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u16m1x8_tu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u32m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m2x2_ta_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u32m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m2x2_tu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u32m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32m2x3_ta_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u32m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u32m2x3_tu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u32m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32m2x4_ta_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u32m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u32m2x4_tu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2_ta_vl32 (uint64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u64m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m4x2_ta_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u64m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u64m4x2_tu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u8m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8m1x2_ta_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u8m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u8m1x2_tu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u8m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8m1x3_ta_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u8m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u8m1x3_tu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u8m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8m1x4_ta_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u8m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u8m1x4_tu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_u8m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8m1x5_ta_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_u8m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei8_v_u8m1x5_tu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_u8m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8m1x6_ta_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_u8m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei8_v_u8m1x6_tu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_u8m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8m1x7_ta_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_u8m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei8_v_u8m1x7_tu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_u8m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8m1x8_ta_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_u8m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei8_v_u8m1x8_tu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u16m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16m2x2_ta_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u16m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u16m2x2_tu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u16m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16m2x3_ta_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u16m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei8_v_u16m2x3_tu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u16m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16m2x4_ta_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u16m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei8_v_u16m2x4_tu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2_ta_vl32 (uint32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u32m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m4x2_ta_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u32m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei8_v_u32m4x2_tu_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u8m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_u8m2x2_ta_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u8m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_u8m2x2_tu_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_u8m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei8_v_u8m2x3_ta_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_u8m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei8_v_u8m2x3_tu_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_u8m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei8_v_u8m2x4_ta_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_u8m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei8_v_u8m2x4_tu_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2_ta_vl32 (uint16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u16m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_u16m4x2_ta_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u16m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei8_v_u16m4x2_tu_vl32 )?} 1 } } */
vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2_ta_vl32 (uint8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_u8m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei8_v_u8m4x2_ta_vl32 )?} 1 } } */
vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2_tu_vl32 (vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_u8m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei8_v_u8m4x2_tu_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u8mf8x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf8x2_ta_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u8mf8x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf8x2_tu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u8mf8x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf8x3_ta_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u8mf8x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf8x3_tu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u8mf8x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf8x4_ta_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u8mf8x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf8x4_tu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u8mf8x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf8x5_ta_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u8mf8x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf8x5_tu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u8mf8x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf8x6_ta_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u8mf8x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf8x6_tu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u8mf8x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf8x7_ta_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u8mf8x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf8x7_tu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u8mf8x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf8x8_ta_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u8mf8x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf8x8_tu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u16mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16mf4x2_ta_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u16mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16mf4x2_tu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u16mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16mf4x3_ta_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u16mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16mf4x3_tu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u16mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16mf4x4_ta_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u16mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16mf4x4_tu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u16mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16mf4x5_ta_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u16mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16mf4x5_tu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u16mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16mf4x6_ta_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u16mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16mf4x6_tu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u16mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16mf4x7_ta_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u16mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16mf4x7_tu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u16mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16mf4x8_ta_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u16mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16mf4x8_tu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u32mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32mf2x2_ta_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u32mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32mf2x2_tu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u32mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32mf2x3_ta_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u32mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32mf2x3_tu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u32mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32mf2x4_ta_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u32mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32mf2x4_tu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u32mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u32mf2x5_ta_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u32mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u32mf2x5_tu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei16_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u32mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u32mf2x6_ta_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei16_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u32mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u32mf2x6_tu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei16_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u32mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u32mf2x7_ta_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei16_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u32mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u32mf2x7_tu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei16_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u32mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u32mf2x8_ta_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei16_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u32mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u32mf2x8_tu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei16_v_u64m1x2_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u64m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m1x2_ta_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei16_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u64m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m1x2_tu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei16_v_u64m1x3_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u64m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u64m1x3_ta_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei16_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u64m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u64m1x3_tu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei16_v_u64m1x4_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u64m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u64m1x4_ta_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei16_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u64m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u64m1x4_tu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei16_v_u64m1x5_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u64m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u64m1x5_ta_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei16_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u64m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u64m1x5_tu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei16_v_u64m1x6_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u64m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u64m1x6_ta_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei16_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u64m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u64m1x6_tu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u64m1x7_ta_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u64m1x7_tu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u64m1x8_ta_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u64m1x8_tu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf4x2_ta_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf4x2_tu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf4x3_ta_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf4x3_tu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf4x4_ta_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf4x4_tu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf4x5_ta_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf4x5_tu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf4x6_ta_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf4x6_tu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf4x7_ta_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf4x7_tu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf4x8_ta_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf4x8_tu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16mf2x2_ta_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16mf2x2_tu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16mf2x3_ta_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16mf2x3_tu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16mf2x4_ta_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16mf2x4_tu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16mf2x5_ta_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16mf2x5_tu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16mf2x6_ta_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16mf2x6_tu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16mf2x7_ta_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16mf2x7_tu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16mf2x8_ta_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16mf2x8_tu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32m1x2_ta_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32m1x2_tu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32m1x3_ta_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32m1x3_tu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32m1x4_ta_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32m1x4_tu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u32m1x5_ta_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u32m1x5_tu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u32m1x6_ta_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u32m1x6_tu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u32m1x7_ta_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u32m1x7_tu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u32m1x8_ta_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u32m1x8_tu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m2x2_ta_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m2x2_tu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u64m2x3_ta_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u64m2x3_tu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u64m2x4_ta_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u64m2x4_tu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf2x2_ta_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u8mf2x2_tu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf2x3_ta_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u8mf2x3_tu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf2x4_ta_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u8mf2x4_tu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf2x5_ta_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u8mf2x5_tu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf2x6_ta_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u8mf2x6_tu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf2x7_ta_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u8mf2x7_tu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf2x8_ta_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u8mf2x8_tu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16m1x2_ta_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u16m1x2_tu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16m1x3_ta_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u16m1x3_tu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16m1x4_ta_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u16m1x4_tu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16m1x5_ta_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei16_v_u16m1x5_tu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16m1x6_ta_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei16_v_u16m1x6_tu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16m1x7_ta_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei16_v_u16m1x7_tu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16m1x8_ta_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei16_v_u16m1x8_tu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32m2x2_ta_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u32m2x2_tu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32m2x3_ta_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei16_v_u32m2x3_tu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32m2x4_ta_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei16_v_u32m2x4_tu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_ta_vl32 (uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m4x2_ta_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei16_v_u64m4x2_tu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u8m1x2_ta_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u8m1x2_tu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_u8m1x3_ta_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_u8m1x3_tu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_u8m1x4_ta_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_u8m1x4_tu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei16_v_u8m1x5_ta_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei16_v_u8m1x5_tu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei16_v_u8m1x6_ta_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei16_v_u8m1x6_tu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei16_v_u8m1x7_ta_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei16_v_u8m1x7_tu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei16_v_u8m1x8_ta_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei16_v_u8m1x8_tu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u16m2x2_ta_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u16m2x2_tu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_u16m2x3_ta_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei16_v_u16m2x3_tu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_u16m2x4_ta_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei16_v_u16m2x4_tu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_ta_vl32 (uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u32m4x2_ta_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei16_v_u32m4x2_tu_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_u8m2x2_ta_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_u8m2x2_tu_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei16_v_u8m2x3_ta_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei16_v_u8m2x3_tu_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei16_v_u8m2x4_ta_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei16_v_u8m2x4_tu_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_ta_vl32 (uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_u16m4x2_ta_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei16_v_u16m4x2_tu_vl32 )?} 1 } } */
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_ta_vl32 (uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei16_v_u8m4x2_ta_vl32 )?} 1 } } */
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_tu_vl32 (vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei16_v_u8m4x2_tu_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u8mf8x2_ta_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u8mf8x2_tu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u8mf8x3_ta_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u8mf8x3_tu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u8mf8x4_ta_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u8mf8x4_tu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u8mf8x5_ta_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u8mf8x5_tu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u8mf8x6_ta_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u8mf8x6_tu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u8mf8x7_ta_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u8mf8x7_tu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u8mf8x8_ta_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u8mf8x8_tu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u16mf4x2_ta_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u16mf4x2_tu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u16mf4x3_ta_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u16mf4x3_tu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u16mf4x4_ta_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u16mf4x4_tu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u16mf4x5_ta_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u16mf4x5_tu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u16mf4x6_ta_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u16mf4x6_tu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u16mf4x7_ta_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u16mf4x7_tu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u16mf4x8_ta_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u16mf4x8_tu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u32mf2x2_ta_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u32mf2x2_tu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u32mf2x3_ta_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u32mf2x3_tu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u32mf2x4_ta_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u32mf2x4_tu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u32mf2x5_ta_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u32mf2x5_tu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u32mf2x6_ta_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u32mf2x6_tu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u32mf2x7_ta_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u32mf2x7_tu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u32mf2x8_ta_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u32mf2x8_tu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u64m1x2_ta_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u64m1x2_tu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u64m1x3_ta_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u64m1x3_tu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u64m1x4_ta_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u64m1x4_tu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u64m1x5_ta_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u64m1x5_tu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u64m1x6_ta_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u64m1x6_tu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u64m1x7_ta_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u64m1x7_tu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u64m1x8_ta_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u64m1x8_tu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u8mf4x2_ta_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u8mf4x2_tu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u8mf4x3_ta_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u8mf4x3_tu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u8mf4x4_ta_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u8mf4x4_tu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u8mf4x5_ta_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u8mf4x5_tu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u8mf4x6_ta_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u8mf4x6_tu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u8mf4x7_ta_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u8mf4x7_tu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u8mf4x8_ta_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u8mf4x8_tu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u16mf2x2_ta_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u16mf2x2_tu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u16mf2x3_ta_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u16mf2x3_tu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u16mf2x4_ta_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u16mf2x4_tu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u16mf2x5_ta_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u16mf2x5_tu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u16mf2x6_ta_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u16mf2x6_tu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u16mf2x7_ta_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u16mf2x7_tu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u16mf2x8_ta_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u16mf2x8_tu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u32m1x2_ta_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u32m1x2_tu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u32m1x3_ta_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u32m1x3_tu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u32m1x4_ta_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u32m1x4_tu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u32m1x5_ta_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei32_v_u32m1x5_tu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u32m1x6_ta_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei32_v_u32m1x6_tu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u32m1x7_ta_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei32_v_u32m1x7_tu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u32m1x8_ta_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei32_v_u32m1x8_tu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u64m2x2_ta_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei32_v_u64m2x2_tu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u64m2x3_ta_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei32_v_u64m2x3_tu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u64m2x4_ta_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei32_v_u64m2x4_tu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u8mf2x2_ta_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u8mf2x2_tu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u8mf2x3_ta_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u8mf2x3_tu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u8mf2x4_ta_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u8mf2x4_tu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_u8mf2x5_ta_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_u8mf2x5_tu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_u8mf2x6_ta_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_u8mf2x6_tu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_u8mf2x7_ta_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_u8mf2x7_tu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_u8mf2x8_ta_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_u8mf2x8_tu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u16m1x2_ta_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u16m1x2_tu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u16m1x3_ta_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u16m1x3_tu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u16m1x4_ta_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u16m1x4_tu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_u16m1x5_ta_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei32_v_u16m1x5_tu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_u16m1x6_ta_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei32_v_u16m1x6_tu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_u16m1x7_ta_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei32_v_u16m1x7_tu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_u16m1x8_ta_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei32_v_u16m1x8_tu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u32m2x2_ta_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u32m2x2_tu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u32m2x3_ta_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei32_v_u32m2x3_tu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u32m2x4_ta_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei32_v_u32m2x4_tu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_ta_vl32 (uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u64m4x2_ta_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei32_v_u64m4x2_tu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u8m1x2_ta_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u8m1x2_tu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_u8m1x3_ta_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_u8m1x3_tu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_u8m1x4_ta_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_u8m1x4_tu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei32_v_u8m1x5_ta_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei32_v_u8m1x5_tu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei32_v_u8m1x6_ta_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei32_v_u8m1x6_tu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei32_v_u8m1x7_ta_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei32_v_u8m1x7_tu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei32_v_u8m1x8_ta_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei32_v_u8m1x8_tu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u16m2x2_ta_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u16m2x2_tu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_u16m2x3_ta_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei32_v_u16m2x3_tu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_u16m2x4_ta_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei32_v_u16m2x4_tu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_ta_vl32 (uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u32m4x2_ta_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei32_v_u32m4x2_tu_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_u8m2x2_ta_vl32 )?} 1 } } */
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_u8m2x2_tu_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei32_v_u8m2x3_ta_vl32 )?} 1 } } */
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei32_v_u8m2x3_tu_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei32_v_u8m2x4_ta_vl32 )?} 1 } } */
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei32_v_u8m2x4_tu_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_ta_vl32 (uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_u16m4x2_ta_vl32 )?} 1 } } */
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei32_v_u16m4x2_tu_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u8mf8x2_ta_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u8mf8x2_tu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u8mf8x3_ta_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u8mf8x3_tu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u8mf8x4_ta_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u8mf8x4_tu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u8mf8x5_ta_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u8mf8x5_tu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u8mf8x6_ta_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u8mf8x6_tu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u8mf8x7_ta_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u8mf8x7_tu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u8mf8x8_ta_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u8mf8x8_tu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u16mf4x2_ta_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u16mf4x2_tu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u16mf4x3_ta_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u16mf4x3_tu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u16mf4x4_ta_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u16mf4x4_tu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u16mf4x5_ta_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u16mf4x5_tu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u16mf4x6_ta_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u16mf4x6_tu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u16mf4x7_ta_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u16mf4x7_tu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u16mf4x8_ta_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u16mf4x8_tu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u32mf2x2_ta_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u32mf2x2_tu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u32mf2x3_ta_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u32mf2x3_tu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u32mf2x4_ta_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u32mf2x4_tu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u32mf2x5_ta_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u32mf2x5_tu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u32mf2x6_ta_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u32mf2x6_tu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u32mf2x7_ta_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u32mf2x7_tu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u32mf2x8_ta_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u32mf2x8_tu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u64m1x2_ta_vl32 )?} 1 } } */
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg2ei64_v_u64m1x2_tu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u64m1x3_ta_vl32 )?} 1 } } */
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg3ei64_v_u64m1x3_tu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u64m1x4_ta_vl32 )?} 1 } } */
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg4ei64_v_u64m1x4_tu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u64m1x5_ta_vl32 )?} 1 } } */
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg5ei64_v_u64m1x5_tu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u64m1x6_ta_vl32 )?} 1 } } */
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg6ei64_v_u64m1x6_tu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u64m1x7_ta_vl32 )?} 1 } } */
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg7ei64_v_u64m1x7_tu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u64m1x8_ta_vl32 )?} 1 } } */
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vluxseg8ei64_v_u64m1x8_tu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u8mf4x2_ta_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u8mf4x2_tu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u8mf4x3_ta_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u8mf4x3_tu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u8mf4x4_ta_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u8mf4x4_tu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u8mf4x5_ta_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u8mf4x5_tu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u8mf4x6_ta_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u8mf4x6_tu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u8mf4x7_ta_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u8mf4x7_tu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u8mf4x8_ta_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u8mf4x8_tu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u16mf2x2_ta_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u16mf2x2_tu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u16mf2x3_ta_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u16mf2x3_tu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u16mf2x4_ta_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u16mf2x4_tu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u16mf2x5_ta_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u16mf2x5_tu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u16mf2x6_ta_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u16mf2x6_tu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u16mf2x7_ta_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u16mf2x7_tu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u16mf2x8_ta_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u16mf2x8_tu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u32m1x2_ta_vl32 )?} 1 } } */
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u32m1x2_tu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u32m1x3_ta_vl32 )?} 1 } } */
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u32m1x3_tu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u32m1x4_ta_vl32 )?} 1 } } */
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u32m1x4_tu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u32m1x5_ta_vl32 )?} 1 } } */
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg5ei64_v_u32m1x5_tu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u32m1x6_ta_vl32 )?} 1 } } */
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg6ei64_v_u32m1x6_tu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u32m1x7_ta_vl32 )?} 1 } } */
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg7ei64_v_u32m1x7_tu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u32m1x8_ta_vl32 )?} 1 } } */
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg8ei64_v_u32m1x8_tu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u64m2x2_ta_vl32 )?} 1 } } */
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg2ei64_v_u64m2x2_tu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u64m2x3_ta_vl32 )?} 1 } } */
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg3ei64_v_u64m2x3_tu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u64m2x4_ta_vl32 )?} 1 } } */
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vluxseg4ei64_v_u64m2x4_tu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u8mf2x2_ta_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u8mf2x2_tu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u8mf2x3_ta_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u8mf2x3_tu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u8mf2x4_ta_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u8mf2x4_tu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_u8mf2x5_ta_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_u8mf2x5_tu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_u8mf2x6_ta_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_u8mf2x6_tu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_u8mf2x7_ta_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_u8mf2x7_tu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_u8mf2x8_ta_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_u8mf2x8_tu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u16m1x2_ta_vl32 )?} 1 } } */
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u16m1x2_tu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u16m1x3_ta_vl32 )?} 1 } } */
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u16m1x3_tu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u16m1x4_ta_vl32 )?} 1 } } */
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u16m1x4_tu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_u16m1x5_ta_vl32 )?} 1 } } */
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg5ei64_v_u16m1x5_tu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_u16m1x6_ta_vl32 )?} 1 } } */
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg6ei64_v_u16m1x6_tu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_u16m1x7_ta_vl32 )?} 1 } } */
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg7ei64_v_u16m1x7_tu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_u16m1x8_ta_vl32 )?} 1 } } */
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg8ei64_v_u16m1x8_tu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u32m2x2_ta_vl32 )?} 1 } } */
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u32m2x2_tu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u32m2x3_ta_vl32 )?} 1 } } */
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg3ei64_v_u32m2x3_tu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u32m2x4_ta_vl32 )?} 1 } } */
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg4ei64_v_u32m2x4_tu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_ta_vl32 (uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u64m4x2_ta_vl32 )?} 1 } } */
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vluxseg2ei64_v_u64m4x2_tu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u8m1x2_ta_vl32 )?} 1 } } */
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u8m1x2_tu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_u8m1x3_ta_vl32 )?} 1 } } */
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_u8m1x3_tu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_u8m1x4_ta_vl32 )?} 1 } } */
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_u8m1x4_tu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg5ei64_v_u8m1x5_ta_vl32 )?} 1 } } */
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg5ei64_v_u8m1x5_tu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg6ei64_v_u8m1x6_ta_vl32 )?} 1 } } */
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg6ei64_v_u8m1x6_tu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg7ei64_v_u8m1x7_ta_vl32 )?} 1 } } */
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg7ei64_v_u8m1x7_tu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg8ei64_v_u8m1x8_ta_vl32 )?} 1 } } */
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg8ei64_v_u8m1x8_tu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u16m2x2_ta_vl32 )?} 1 } } */
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u16m2x2_tu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_u16m2x3_ta_vl32 )?} 1 } } */
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg3ei64_v_u16m2x3_tu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_u16m2x4_ta_vl32 )?} 1 } } */
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg4ei64_v_u16m2x4_tu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_ta_vl32 (uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u32m4x2_ta_vl32 )?} 1 } } */
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vluxseg2ei64_v_u32m4x2_tu_vl32 )?} 1 } } */
