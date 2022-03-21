
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf8x2_tama_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tamu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf8x2_tamu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tuma_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf8x2_tuma_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tumu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf8x2_tumu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf8x3_tama_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tamu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf8x3_tamu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tuma_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf8x3_tuma_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tumu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf8x3_tumu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf8x4_tama_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tamu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf8x4_tamu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tuma_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf8x4_tuma_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tumu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf8x4_tumu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf8x5_tama_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tamu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf8x5_tamu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tuma_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf8x5_tuma_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tumu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf8x5_tumu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf8x6_tama_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tamu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf8x6_tamu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tuma_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf8x6_tuma_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tumu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf8x6_tumu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf8x7_tama_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tamu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf8x7_tamu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tuma_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf8x7_tuma_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tumu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf8x7_tumu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tama_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf8x8_tama_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tamu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf8x8_tamu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tuma_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf8x8_tuma_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tumu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf8x8_tumu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf4x2_tama_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tamu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf4x2_tamu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tuma_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf4x2_tuma_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tumu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf4x2_tumu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf4x3_tama_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tamu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf4x3_tamu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tuma_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf4x3_tuma_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tumu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf4x3_tumu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf4x4_tama_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_tamu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf4x4_tamu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_tuma_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf4x4_tuma_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_tumu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf4x4_tumu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf4x5_tama_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_tamu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf4x5_tamu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_tuma_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf4x5_tuma_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_tumu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf4x5_tumu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf4x6_tama_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_tamu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf4x6_tamu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_tuma_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf4x6_tuma_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_tumu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf4x6_tumu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf4x7_tama_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_tamu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf4x7_tamu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_tuma_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf4x7_tuma_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_tumu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf4x7_tumu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_tama_vl32 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf4x8_tama_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_tamu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf4x8_tamu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_tuma_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf4x8_tuma_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_tumu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf4x8_tumu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32mf2x2_tama_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_tamu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32mf2x2_tamu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_tuma_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32mf2x2_tuma_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_tumu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32mf2x2_tumu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32mf2x3_tama_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_tamu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32mf2x3_tamu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_tuma_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32mf2x3_tuma_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_tumu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32mf2x3_tumu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32mf2x4_tama_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_tamu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32mf2x4_tamu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_tuma_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32mf2x4_tuma_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_tumu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32mf2x4_tumu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32mf2x5_tama_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_tamu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32mf2x5_tamu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_tuma_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32mf2x5_tuma_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_tumu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32mf2x5_tumu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32mf2x6_tama_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_tamu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32mf2x6_tamu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_tuma_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32mf2x6_tuma_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_tumu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32mf2x6_tumu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32mf2x7_tama_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_tamu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32mf2x7_tamu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_tuma_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32mf2x7_tuma_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_tumu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32mf2x7_tumu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_tama_vl32 (vbool64_t mask, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32mf2x8_tama_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_tamu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32mf2x8_tamu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_tuma_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32mf2x8_tuma_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_tumu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32mf2x8_tumu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m1x2_tama_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_tamu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m1x2_tamu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_tuma_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m1x2_tuma_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_tumu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m1x2_tumu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m1x3_tama_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_tamu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m1x3_tamu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_tuma_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m1x3_tuma_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_tumu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m1x3_tumu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m1x4_tama_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_tamu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m1x4_tamu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_tuma_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m1x4_tuma_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_tumu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m1x4_tumu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i64m1x5_tama_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_tamu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i64m1x5_tamu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_tuma_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i64m1x5_tuma_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_tumu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i64m1x5_tumu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i64m1x6_tama_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_tamu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i64m1x6_tamu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_tuma_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i64m1x6_tuma_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_tumu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i64m1x6_tumu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i64m1x7_tama_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_tamu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i64m1x7_tamu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_tuma_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i64m1x7_tuma_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_tumu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i64m1x7_tumu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_tama_vl32 (vbool64_t mask, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i64m1x8_tama_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_tamu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i64m1x8_tamu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_tuma_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i64m1x8_tuma_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_tumu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i64m1x8_tumu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf4x2_tama_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_tamu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf4x2_tamu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_tuma_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf4x2_tuma_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_tumu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf4x2_tumu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf4x3_tama_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_tamu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf4x3_tamu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_tuma_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf4x3_tuma_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_tumu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf4x3_tumu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf4x4_tama_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_tamu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf4x4_tamu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_tuma_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf4x4_tuma_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_tumu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf4x4_tumu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf4x5_tama_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_tamu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf4x5_tamu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_tuma_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf4x5_tuma_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_tumu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf4x5_tumu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf4x6_tama_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_tamu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf4x6_tamu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_tuma_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf4x6_tuma_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_tumu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf4x6_tumu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf4x7_tama_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_tamu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf4x7_tamu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_tuma_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf4x7_tuma_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_tumu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf4x7_tumu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_tama_vl32 (vbool32_t mask, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf4x8_tama_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_tamu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf4x8_tamu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_tuma_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf4x8_tuma_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_tumu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf4x8_tumu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf2x2_tama_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_tamu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf2x2_tamu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_tuma_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf2x2_tuma_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_tumu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16mf2x2_tumu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf2x3_tama_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_tamu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf2x3_tamu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_tuma_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf2x3_tuma_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_tumu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16mf2x3_tumu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf2x4_tama_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_tamu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf2x4_tamu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_tuma_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf2x4_tuma_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_tumu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16mf2x4_tumu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf2x5_tama_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_tamu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf2x5_tamu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_tuma_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf2x5_tuma_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_tumu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16mf2x5_tumu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf2x6_tama_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_tamu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf2x6_tamu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_tuma_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf2x6_tuma_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_tumu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16mf2x6_tumu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf2x7_tama_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_tamu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf2x7_tamu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_tuma_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf2x7_tuma_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_tumu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16mf2x7_tumu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_tama_vl32 (vbool32_t mask, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf2x8_tama_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_tamu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf2x8_tamu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_tuma_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf2x8_tuma_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_tumu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16mf2x8_tumu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m1x2_tama_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_tamu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m1x2_tamu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_tuma_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m1x2_tuma_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_tumu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m1x2_tumu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m1x3_tama_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_tamu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m1x3_tamu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_tuma_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m1x3_tuma_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_tumu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m1x3_tumu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m1x4_tama_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_tamu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m1x4_tamu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_tuma_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m1x4_tuma_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_tumu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m1x4_tumu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32m1x5_tama_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_tamu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32m1x5_tamu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_tuma_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32m1x5_tuma_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_tumu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i32m1x5_tumu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32m1x6_tama_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_tamu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32m1x6_tamu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_tuma_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32m1x6_tuma_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_tumu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i32m1x6_tumu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32m1x7_tama_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_tamu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32m1x7_tamu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_tuma_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32m1x7_tuma_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_tumu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i32m1x7_tumu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_tama_vl32 (vbool32_t mask, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32m1x8_tama_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_tamu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32m1x8_tamu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_tuma_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32m1x8_tuma_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_tumu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i32m1x8_tumu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_tama_vl32 (vbool32_t mask, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m2x2_tama_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_tamu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m2x2_tamu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_tuma_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m2x2_tuma_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_tumu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m2x2_tumu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_tama_vl32 (vbool32_t mask, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m2x3_tama_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_tamu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m2x3_tamu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_tuma_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m2x3_tuma_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_tumu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i64m2x3_tumu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_tama_vl32 (vbool32_t mask, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m2x4_tama_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_tamu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m2x4_tamu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_tuma_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m2x4_tuma_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_tumu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i64m2x4_tumu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf2x2_tama_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_tamu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf2x2_tamu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_tuma_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf2x2_tuma_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_tumu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8mf2x2_tumu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf2x3_tama_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_tamu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf2x3_tamu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_tuma_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf2x3_tuma_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_tumu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8mf2x3_tumu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf2x4_tama_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_tamu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf2x4_tamu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_tuma_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf2x4_tuma_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_tumu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8mf2x4_tumu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf2x5_tama_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_tamu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf2x5_tamu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_tuma_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf2x5_tuma_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_tumu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8mf2x5_tumu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf2x6_tama_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_tamu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf2x6_tamu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_tuma_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf2x6_tuma_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_tumu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8mf2x6_tumu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf2x7_tama_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_tamu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf2x7_tamu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_tuma_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf2x7_tuma_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_tumu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8mf2x7_tumu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_tama_vl32 (vbool16_t mask, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf2x8_tama_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_tamu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf2x8_tamu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_tuma_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf2x8_tuma_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_tumu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8mf2x8_tumu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m1x2_tama_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_tamu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m1x2_tamu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_tuma_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m1x2_tuma_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_tumu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m1x2_tumu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m1x3_tama_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_tamu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m1x3_tamu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_tuma_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m1x3_tuma_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_tumu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m1x3_tumu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m1x4_tama_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_tamu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m1x4_tamu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_tuma_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m1x4_tuma_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_tumu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m1x4_tumu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16m1x5_tama_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_tamu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16m1x5_tamu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_tuma_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16m1x5_tuma_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_tumu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i16m1x5_tumu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16m1x6_tama_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_tamu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16m1x6_tamu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_tuma_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16m1x6_tuma_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_tumu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i16m1x6_tumu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16m1x7_tama_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_tamu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16m1x7_tamu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_tuma_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16m1x7_tuma_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_tumu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i16m1x7_tumu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_tama_vl32 (vbool16_t mask, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16m1x8_tama_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_tamu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16m1x8_tamu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_tuma_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16m1x8_tuma_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_tumu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i16m1x8_tumu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_tama_vl32 (vbool16_t mask, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m2x2_tama_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_tamu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m2x2_tamu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_tuma_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m2x2_tuma_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_tumu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m2x2_tumu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_tama_vl32 (vbool16_t mask, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m2x3_tama_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_tamu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m2x3_tamu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_tuma_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m2x3_tuma_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_tumu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i32m2x3_tumu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_tama_vl32 (vbool16_t mask, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m2x4_tama_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_tamu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m2x4_tamu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_tuma_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m2x4_tuma_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_tumu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i32m2x4_tumu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_tama_vl32 (vbool16_t mask, int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m4x2_tama_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_tamu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m4x2_tamu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_tuma_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m4x2_tuma_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_tumu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i64m4x2_tumu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m1x2_tama_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_tamu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m1x2_tamu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_tuma_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m1x2_tuma_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_tumu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m1x2_tumu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m1x3_tama_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_tamu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m1x3_tamu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_tuma_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m1x3_tuma_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_tumu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m1x3_tumu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m1x4_tama_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_tamu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m1x4_tamu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_tuma_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m1x4_tuma_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_tumu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m1x4_tumu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8m1x5_tama_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_tamu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8m1x5_tamu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_tuma_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8m1x5_tuma_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_tumu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei8_v_i8m1x5_tumu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8m1x6_tama_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_tamu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8m1x6_tamu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_tuma_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8m1x6_tuma_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_tumu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei8_v_i8m1x6_tumu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8m1x7_tama_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_tamu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8m1x7_tamu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_tuma_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8m1x7_tuma_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_tumu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei8_v_i8m1x7_tumu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_tama_vl32 (vbool8_t mask, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8m1x8_tama_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_tamu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8m1x8_tamu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_tuma_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8m1x8_tuma_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_tumu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei8_v_i8m1x8_tumu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_tama_vl32 (vbool8_t mask, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m2x2_tama_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_tamu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m2x2_tamu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_tuma_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m2x2_tuma_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_tumu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m2x2_tumu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_tama_vl32 (vbool8_t mask, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m2x3_tama_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_tamu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m2x3_tamu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_tuma_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m2x3_tuma_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_tumu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei8_v_i16m2x3_tumu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_tama_vl32 (vbool8_t mask, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m2x4_tama_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_tamu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m2x4_tamu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_tuma_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m2x4_tuma_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_tumu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei8_v_i16m2x4_tumu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_tama_vl32 (vbool8_t mask, int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m4x2_tama_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_tamu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m4x2_tamu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_tuma_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m4x2_tuma_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_tumu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i32m4x2_tumu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_tama_vl32 (vbool4_t mask, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m2x2_tama_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_tamu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m2x2_tamu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_tuma_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m2x2_tuma_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_tumu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m2x2_tumu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_tama_vl32 (vbool4_t mask, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m2x3_tama_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_tamu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m2x3_tamu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_tuma_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m2x3_tuma_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_tumu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei8_v_i8m2x3_tumu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_tama_vl32 (vbool4_t mask, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m2x4_tama_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_tamu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m2x4_tamu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_tuma_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m2x4_tuma_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_tumu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei8_v_i8m2x4_tumu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_tama_vl32 (vbool4_t mask, int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m4x2_tama_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_tamu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m4x2_tamu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_tuma_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m4x2_tuma_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_tumu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei8_v_i16m4x2_tumu_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_tama_vl32 (vbool2_t mask, int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m4x2_tama_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_tamu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m4x2_tamu_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_tuma_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m4x2_tuma_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_tumu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei8_v_i8m4x2_tumu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf8x2_tama_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_tamu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf8x2_tamu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_tuma_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf8x2_tuma_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_tumu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf8x2_tumu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf8x3_tama_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_tamu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf8x3_tamu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_tuma_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf8x3_tuma_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_tumu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf8x3_tumu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf8x4_tama_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_tamu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf8x4_tamu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_tuma_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf8x4_tuma_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_tumu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf8x4_tumu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf8x5_tama_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_tamu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf8x5_tamu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_tuma_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf8x5_tuma_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_tumu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf8x5_tumu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf8x6_tama_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_tamu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf8x6_tamu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_tuma_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf8x6_tuma_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_tumu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf8x6_tumu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf8x7_tama_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_tamu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf8x7_tamu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_tuma_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf8x7_tuma_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_tumu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf8x7_tumu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_tama_vl32 (vbool64_t mask, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf8x8_tama_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_tamu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf8x8_tamu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_tuma_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf8x8_tuma_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_tumu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf8x8_tumu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf4x2_tama_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_tamu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf4x2_tamu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_tuma_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf4x2_tuma_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_tumu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf4x2_tumu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf4x3_tama_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_tamu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf4x3_tamu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_tuma_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf4x3_tuma_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_tumu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf4x3_tumu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf4x4_tama_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_tamu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf4x4_tamu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_tuma_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf4x4_tuma_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_tumu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf4x4_tumu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf4x5_tama_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_tamu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf4x5_tamu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_tuma_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf4x5_tuma_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_tumu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf4x5_tumu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf4x6_tama_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_tamu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf4x6_tamu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_tuma_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf4x6_tuma_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_tumu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf4x6_tumu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf4x7_tama_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_tamu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf4x7_tamu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_tuma_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf4x7_tuma_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_tumu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf4x7_tumu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_tama_vl32 (vbool64_t mask, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf4x8_tama_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_tamu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf4x8_tamu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_tuma_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf4x8_tuma_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_tumu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf4x8_tumu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32mf2x2_tama_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_tamu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32mf2x2_tamu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_tuma_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32mf2x2_tuma_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_tumu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32mf2x2_tumu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32mf2x3_tama_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_tamu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32mf2x3_tamu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_tuma_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32mf2x3_tuma_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_tumu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32mf2x3_tumu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32mf2x4_tama_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_tamu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32mf2x4_tamu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_tuma_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32mf2x4_tuma_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_tumu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32mf2x4_tumu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32mf2x5_tama_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_tamu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32mf2x5_tamu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_tuma_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32mf2x5_tuma_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_tumu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32mf2x5_tumu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32mf2x6_tama_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_tamu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32mf2x6_tamu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_tuma_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32mf2x6_tuma_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_tumu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32mf2x6_tumu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32mf2x7_tama_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_tamu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32mf2x7_tamu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_tuma_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32mf2x7_tuma_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_tumu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32mf2x7_tumu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_tama_vl32 (vbool64_t mask, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32mf2x8_tama_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_tamu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32mf2x8_tamu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_tuma_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32mf2x8_tuma_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_tumu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32mf2x8_tumu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m1x2_tama_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_tamu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m1x2_tamu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_tuma_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m1x2_tuma_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_tumu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m1x2_tumu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m1x3_tama_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_tamu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m1x3_tamu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_tuma_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m1x3_tuma_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_tumu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m1x3_tumu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m1x4_tama_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_tamu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m1x4_tamu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_tuma_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m1x4_tuma_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_tumu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m1x4_tumu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i64m1x5_tama_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_tamu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i64m1x5_tamu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_tuma_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i64m1x5_tuma_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_tumu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i64m1x5_tumu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i64m1x6_tama_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_tamu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i64m1x6_tamu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_tuma_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i64m1x6_tuma_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_tumu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i64m1x6_tumu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i64m1x7_tama_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_tamu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i64m1x7_tamu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_tuma_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i64m1x7_tuma_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_tumu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i64m1x7_tumu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_tama_vl32 (vbool64_t mask, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i64m1x8_tama_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_tamu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i64m1x8_tamu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_tuma_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i64m1x8_tuma_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_tumu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i64m1x8_tumu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf4x2_tama_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_tamu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf4x2_tamu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_tuma_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf4x2_tuma_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_tumu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf4x2_tumu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf4x3_tama_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_tamu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf4x3_tamu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_tuma_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf4x3_tuma_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_tumu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf4x3_tumu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf4x4_tama_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_tamu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf4x4_tamu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_tuma_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf4x4_tuma_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_tumu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf4x4_tumu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf4x5_tama_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_tamu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf4x5_tamu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_tuma_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf4x5_tuma_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_tumu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf4x5_tumu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf4x6_tama_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_tamu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf4x6_tamu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_tuma_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf4x6_tuma_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_tumu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf4x6_tumu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf4x7_tama_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_tamu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf4x7_tamu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_tuma_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf4x7_tuma_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_tumu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf4x7_tumu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_tama_vl32 (vbool32_t mask, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf4x8_tama_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_tamu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf4x8_tamu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_tuma_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf4x8_tuma_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_tumu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf4x8_tumu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf2x2_tama_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_tamu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf2x2_tamu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_tuma_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf2x2_tuma_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_tumu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16mf2x2_tumu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf2x3_tama_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_tamu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf2x3_tamu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_tuma_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf2x3_tuma_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_tumu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16mf2x3_tumu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf2x4_tama_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_tamu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf2x4_tamu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_tuma_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf2x4_tuma_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_tumu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16mf2x4_tumu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf2x5_tama_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_tamu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf2x5_tamu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_tuma_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf2x5_tuma_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_tumu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16mf2x5_tumu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf2x6_tama_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_tamu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf2x6_tamu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_tuma_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf2x6_tuma_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_tumu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16mf2x6_tumu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf2x7_tama_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_tamu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf2x7_tamu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_tuma_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf2x7_tuma_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_tumu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16mf2x7_tumu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_tama_vl32 (vbool32_t mask, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf2x8_tama_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_tamu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf2x8_tamu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_tuma_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf2x8_tuma_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_tumu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16mf2x8_tumu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m1x2_tama_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_tamu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m1x2_tamu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_tuma_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m1x2_tuma_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_tumu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m1x2_tumu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m1x3_tama_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_tamu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m1x3_tamu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_tuma_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m1x3_tuma_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_tumu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m1x3_tumu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m1x4_tama_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_tamu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m1x4_tamu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_tuma_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m1x4_tuma_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_tumu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m1x4_tumu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32m1x5_tama_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_tamu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32m1x5_tamu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_tuma_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32m1x5_tuma_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_tumu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i32m1x5_tumu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32m1x6_tama_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_tamu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32m1x6_tamu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_tuma_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32m1x6_tuma_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_tumu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i32m1x6_tumu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32m1x7_tama_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_tamu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32m1x7_tamu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_tuma_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32m1x7_tuma_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_tumu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i32m1x7_tumu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_tama_vl32 (vbool32_t mask, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32m1x8_tama_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_tamu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32m1x8_tamu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_tuma_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32m1x8_tuma_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_tumu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i32m1x8_tumu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_tama_vl32 (vbool32_t mask, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m2x2_tama_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_tamu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m2x2_tamu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_tuma_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m2x2_tuma_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_tumu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m2x2_tumu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_tama_vl32 (vbool32_t mask, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m2x3_tama_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_tamu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m2x3_tamu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_tuma_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m2x3_tuma_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_tumu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i64m2x3_tumu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_tama_vl32 (vbool32_t mask, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m2x4_tama_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_tamu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m2x4_tamu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_tuma_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m2x4_tuma_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_tumu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i64m2x4_tumu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf2x2_tama_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_tamu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf2x2_tamu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_tuma_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf2x2_tuma_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_tumu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8mf2x2_tumu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf2x3_tama_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_tamu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf2x3_tamu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_tuma_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf2x3_tuma_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_tumu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8mf2x3_tumu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf2x4_tama_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_tamu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf2x4_tamu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_tuma_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf2x4_tuma_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_tumu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8mf2x4_tumu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf2x5_tama_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_tamu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf2x5_tamu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_tuma_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf2x5_tuma_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_tumu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8mf2x5_tumu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf2x6_tama_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_tamu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf2x6_tamu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_tuma_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf2x6_tuma_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_tumu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8mf2x6_tumu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf2x7_tama_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_tamu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf2x7_tamu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_tuma_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf2x7_tuma_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_tumu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8mf2x7_tumu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_tama_vl32 (vbool16_t mask, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf2x8_tama_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_tamu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf2x8_tamu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_tuma_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf2x8_tuma_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_tumu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8mf2x8_tumu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m1x2_tama_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_tamu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m1x2_tamu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_tuma_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m1x2_tuma_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_tumu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m1x2_tumu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m1x3_tama_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_tamu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m1x3_tamu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_tuma_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m1x3_tuma_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_tumu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m1x3_tumu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m1x4_tama_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_tamu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m1x4_tamu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_tuma_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m1x4_tuma_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_tumu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m1x4_tumu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16m1x5_tama_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_tamu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16m1x5_tamu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_tuma_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16m1x5_tuma_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_tumu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei16_v_i16m1x5_tumu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16m1x6_tama_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_tamu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16m1x6_tamu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_tuma_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16m1x6_tuma_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_tumu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei16_v_i16m1x6_tumu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16m1x7_tama_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_tamu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16m1x7_tamu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_tuma_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16m1x7_tuma_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_tumu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei16_v_i16m1x7_tumu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_tama_vl32 (vbool16_t mask, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16m1x8_tama_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_tamu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16m1x8_tamu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_tuma_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16m1x8_tuma_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_tumu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei16_v_i16m1x8_tumu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_tama_vl32 (vbool16_t mask, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m2x2_tama_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_tamu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m2x2_tamu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_tuma_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m2x2_tuma_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_tumu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m2x2_tumu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_tama_vl32 (vbool16_t mask, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m2x3_tama_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_tamu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m2x3_tamu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_tuma_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m2x3_tuma_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_tumu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i32m2x3_tumu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_tama_vl32 (vbool16_t mask, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m2x4_tama_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_tamu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m2x4_tamu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_tuma_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m2x4_tuma_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_tumu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i32m2x4_tumu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_tama_vl32 (vbool16_t mask, int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m4x2_tama_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_tamu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m4x2_tamu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_tuma_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m4x2_tuma_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_tumu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i64m4x2_tumu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m1x2_tama_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_tamu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m1x2_tamu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_tuma_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m1x2_tuma_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_tumu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m1x2_tumu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m1x3_tama_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_tamu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m1x3_tamu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_tuma_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m1x3_tuma_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_tumu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m1x3_tumu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m1x4_tama_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_tamu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m1x4_tamu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_tuma_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m1x4_tuma_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_tumu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m1x4_tumu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8m1x5_tama_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_tamu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8m1x5_tamu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_tuma_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8m1x5_tuma_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_tumu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei16_v_i8m1x5_tumu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8m1x6_tama_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_tamu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8m1x6_tamu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_tuma_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8m1x6_tuma_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_tumu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei16_v_i8m1x6_tumu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8m1x7_tama_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_tamu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8m1x7_tamu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_tuma_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8m1x7_tuma_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_tumu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei16_v_i8m1x7_tumu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_tama_vl32 (vbool8_t mask, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8m1x8_tama_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_tamu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8m1x8_tamu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_tuma_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8m1x8_tuma_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_tumu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei16_v_i8m1x8_tumu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_tama_vl32 (vbool8_t mask, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m2x2_tama_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_tamu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m2x2_tamu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_tuma_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m2x2_tuma_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_tumu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m2x2_tumu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_tama_vl32 (vbool8_t mask, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m2x3_tama_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_tamu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m2x3_tamu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_tuma_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m2x3_tuma_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_tumu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei16_v_i16m2x3_tumu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_tama_vl32 (vbool8_t mask, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m2x4_tama_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_tamu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m2x4_tamu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_tuma_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m2x4_tuma_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_tumu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei16_v_i16m2x4_tumu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_tama_vl32 (vbool8_t mask, int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m4x2_tama_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_tamu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m4x2_tamu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_tuma_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m4x2_tuma_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_tumu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei16_v_i32m4x2_tumu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_tama_vl32 (vbool4_t mask, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m2x2_tama_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_tamu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m2x2_tamu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_tuma_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m2x2_tuma_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_tumu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m2x2_tumu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_tama_vl32 (vbool4_t mask, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m2x3_tama_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_tamu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m2x3_tamu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_tuma_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m2x3_tuma_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_tumu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei16_v_i8m2x3_tumu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_tama_vl32 (vbool4_t mask, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m2x4_tama_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_tamu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m2x4_tamu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_tuma_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m2x4_tuma_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_tumu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei16_v_i8m2x4_tumu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_tama_vl32 (vbool4_t mask, int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m4x2_tama_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_tamu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m4x2_tamu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_tuma_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m4x2_tuma_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_tumu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei16_v_i16m4x2_tumu_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_tama_vl32 (vbool2_t mask, int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m4x2_tama_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_tamu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m4x2_tamu_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_tuma_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m4x2_tuma_vl32 )?} 1 } } */
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_tumu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei16_v_i8m4x2_tumu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf8x2_tama_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_tamu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf8x2_tamu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_tuma_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf8x2_tuma_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_tumu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf8x2_tumu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf8x3_tama_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_tamu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf8x3_tamu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_tuma_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf8x3_tuma_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_tumu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf8x3_tumu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf8x4_tama_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_tamu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf8x4_tamu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_tuma_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf8x4_tuma_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_tumu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf8x4_tumu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf8x5_tama_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_tamu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf8x5_tamu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_tuma_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf8x5_tuma_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_tumu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf8x5_tumu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf8x6_tama_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_tamu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf8x6_tamu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_tuma_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf8x6_tuma_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_tumu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf8x6_tumu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf8x7_tama_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_tamu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf8x7_tamu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_tuma_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf8x7_tuma_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_tumu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf8x7_tumu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_tama_vl32 (vbool64_t mask, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf8x8_tama_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_tamu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf8x8_tamu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_tuma_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf8x8_tuma_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_tumu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf8x8_tumu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf4x2_tama_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_tamu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf4x2_tamu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_tuma_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf4x2_tuma_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_tumu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf4x2_tumu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf4x3_tama_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_tamu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf4x3_tamu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_tuma_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf4x3_tuma_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_tumu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf4x3_tumu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf4x4_tama_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_tamu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf4x4_tamu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_tuma_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf4x4_tuma_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_tumu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf4x4_tumu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf4x5_tama_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_tamu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf4x5_tamu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_tuma_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf4x5_tuma_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_tumu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf4x5_tumu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf4x6_tama_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_tamu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf4x6_tamu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_tuma_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf4x6_tuma_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_tumu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf4x6_tumu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf4x7_tama_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_tamu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf4x7_tamu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_tuma_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf4x7_tuma_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_tumu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf4x7_tumu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_tama_vl32 (vbool64_t mask, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf4x8_tama_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_tamu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf4x8_tamu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_tuma_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf4x8_tuma_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_tumu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf4x8_tumu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32mf2x2_tama_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_tamu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32mf2x2_tamu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_tuma_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32mf2x2_tuma_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_tumu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32mf2x2_tumu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32mf2x3_tama_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_tamu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32mf2x3_tamu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_tuma_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32mf2x3_tuma_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_tumu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32mf2x3_tumu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32mf2x4_tama_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_tamu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32mf2x4_tamu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_tuma_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32mf2x4_tuma_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_tumu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32mf2x4_tumu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32mf2x5_tama_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_tamu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32mf2x5_tamu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_tuma_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32mf2x5_tuma_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_tumu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32mf2x5_tumu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32mf2x6_tama_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_tamu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32mf2x6_tamu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_tuma_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32mf2x6_tuma_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_tumu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32mf2x6_tumu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32mf2x7_tama_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_tamu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32mf2x7_tamu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_tuma_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32mf2x7_tuma_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_tumu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32mf2x7_tumu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_tama_vl32 (vbool64_t mask, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32mf2x8_tama_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_tamu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32mf2x8_tamu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_tuma_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32mf2x8_tuma_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_tumu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32mf2x8_tumu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m1x2_tama_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_tamu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m1x2_tamu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_tuma_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m1x2_tuma_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_tumu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m1x2_tumu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m1x3_tama_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_tamu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m1x3_tamu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_tuma_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m1x3_tuma_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_tumu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m1x3_tumu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m1x4_tama_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_tamu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m1x4_tamu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_tuma_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m1x4_tuma_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_tumu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m1x4_tumu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i64m1x5_tama_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_tamu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i64m1x5_tamu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_tuma_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i64m1x5_tuma_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_tumu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i64m1x5_tumu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i64m1x6_tama_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_tamu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i64m1x6_tamu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_tuma_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i64m1x6_tuma_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_tumu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i64m1x6_tumu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i64m1x7_tama_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_tamu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i64m1x7_tamu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_tuma_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i64m1x7_tuma_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_tumu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i64m1x7_tumu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_tama_vl32 (vbool64_t mask, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i64m1x8_tama_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_tamu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i64m1x8_tamu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_tuma_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i64m1x8_tuma_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_tumu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i64m1x8_tumu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf4x2_tama_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_tamu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf4x2_tamu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_tuma_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf4x2_tuma_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_tumu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf4x2_tumu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf4x3_tama_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_tamu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf4x3_tamu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_tuma_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf4x3_tuma_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_tumu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf4x3_tumu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf4x4_tama_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_tamu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf4x4_tamu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_tuma_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf4x4_tuma_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_tumu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf4x4_tumu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf4x5_tama_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_tamu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf4x5_tamu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_tuma_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf4x5_tuma_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_tumu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf4x5_tumu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf4x6_tama_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_tamu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf4x6_tamu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_tuma_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf4x6_tuma_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_tumu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf4x6_tumu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf4x7_tama_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_tamu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf4x7_tamu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_tuma_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf4x7_tuma_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_tumu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf4x7_tumu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_tama_vl32 (vbool32_t mask, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf4x8_tama_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_tamu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf4x8_tamu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_tuma_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf4x8_tuma_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_tumu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf4x8_tumu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf2x2_tama_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_tamu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf2x2_tamu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_tuma_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf2x2_tuma_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_tumu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16mf2x2_tumu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf2x3_tama_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_tamu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf2x3_tamu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_tuma_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf2x3_tuma_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_tumu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16mf2x3_tumu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf2x4_tama_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_tamu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf2x4_tamu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_tuma_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf2x4_tuma_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_tumu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16mf2x4_tumu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf2x5_tama_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_tamu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf2x5_tamu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_tuma_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf2x5_tuma_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_tumu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16mf2x5_tumu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf2x6_tama_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_tamu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf2x6_tamu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_tuma_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf2x6_tuma_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_tumu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16mf2x6_tumu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf2x7_tama_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_tamu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf2x7_tamu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_tuma_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf2x7_tuma_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_tumu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16mf2x7_tumu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_tama_vl32 (vbool32_t mask, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf2x8_tama_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_tamu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf2x8_tamu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_tuma_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf2x8_tuma_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_tumu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16mf2x8_tumu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m1x2_tama_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_tamu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m1x2_tamu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_tuma_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m1x2_tuma_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_tumu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m1x2_tumu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m1x3_tama_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_tamu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m1x3_tamu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_tuma_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m1x3_tuma_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_tumu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m1x3_tumu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m1x4_tama_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_tamu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m1x4_tamu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_tuma_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m1x4_tuma_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_tumu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m1x4_tumu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32m1x5_tama_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_tamu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32m1x5_tamu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_tuma_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32m1x5_tuma_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_tumu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i32m1x5_tumu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32m1x6_tama_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_tamu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32m1x6_tamu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_tuma_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32m1x6_tuma_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_tumu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i32m1x6_tumu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32m1x7_tama_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_tamu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32m1x7_tamu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_tuma_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32m1x7_tuma_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_tumu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i32m1x7_tumu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_tama_vl32 (vbool32_t mask, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32m1x8_tama_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_tamu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32m1x8_tamu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_tuma_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32m1x8_tuma_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_tumu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i32m1x8_tumu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_tama_vl32 (vbool32_t mask, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m2x2_tama_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_tamu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m2x2_tamu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_tuma_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m2x2_tuma_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_tumu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m2x2_tumu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_tama_vl32 (vbool32_t mask, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m2x3_tama_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_tamu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m2x3_tamu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_tuma_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m2x3_tuma_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_tumu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i64m2x3_tumu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_tama_vl32 (vbool32_t mask, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m2x4_tama_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_tamu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m2x4_tamu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_tuma_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m2x4_tuma_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_tumu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i64m2x4_tumu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf2x2_tama_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_tamu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf2x2_tamu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_tuma_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf2x2_tuma_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_tumu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8mf2x2_tumu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf2x3_tama_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_tamu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf2x3_tamu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_tuma_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf2x3_tuma_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_tumu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8mf2x3_tumu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf2x4_tama_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_tamu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf2x4_tamu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_tuma_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf2x4_tuma_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_tumu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8mf2x4_tumu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf2x5_tama_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_tamu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf2x5_tamu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_tuma_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf2x5_tuma_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_tumu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8mf2x5_tumu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf2x6_tama_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_tamu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf2x6_tamu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_tuma_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf2x6_tuma_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_tumu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8mf2x6_tumu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf2x7_tama_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_tamu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf2x7_tamu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_tuma_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf2x7_tuma_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_tumu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8mf2x7_tumu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_tama_vl32 (vbool16_t mask, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf2x8_tama_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_tamu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf2x8_tamu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_tuma_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf2x8_tuma_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_tumu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8mf2x8_tumu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m1x2_tama_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_tamu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m1x2_tamu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_tuma_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m1x2_tuma_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_tumu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m1x2_tumu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m1x3_tama_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_tamu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m1x3_tamu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_tuma_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m1x3_tuma_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_tumu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m1x3_tumu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m1x4_tama_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_tamu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m1x4_tamu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_tuma_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m1x4_tuma_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_tumu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m1x4_tumu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16m1x5_tama_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_tamu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16m1x5_tamu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_tuma_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16m1x5_tuma_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_tumu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei32_v_i16m1x5_tumu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16m1x6_tama_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_tamu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16m1x6_tamu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_tuma_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16m1x6_tuma_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_tumu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei32_v_i16m1x6_tumu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16m1x7_tama_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_tamu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16m1x7_tamu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_tuma_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16m1x7_tuma_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_tumu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei32_v_i16m1x7_tumu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_tama_vl32 (vbool16_t mask, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16m1x8_tama_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_tamu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16m1x8_tamu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_tuma_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16m1x8_tuma_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_tumu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei32_v_i16m1x8_tumu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_tama_vl32 (vbool16_t mask, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m2x2_tama_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_tamu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m2x2_tamu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_tuma_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m2x2_tuma_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_tumu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m2x2_tumu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_tama_vl32 (vbool16_t mask, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m2x3_tama_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_tamu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m2x3_tamu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_tuma_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m2x3_tuma_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_tumu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei32_v_i32m2x3_tumu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_tama_vl32 (vbool16_t mask, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m2x4_tama_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_tamu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m2x4_tamu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_tuma_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m2x4_tuma_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_tumu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei32_v_i32m2x4_tumu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_tama_vl32 (vbool16_t mask, int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m4x2_tama_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_tamu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m4x2_tamu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_tuma_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m4x2_tuma_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_tumu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei32_v_i64m4x2_tumu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m1x2_tama_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_tamu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m1x2_tamu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_tuma_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m1x2_tuma_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_tumu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m1x2_tumu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m1x3_tama_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_tamu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m1x3_tamu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_tuma_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m1x3_tuma_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_tumu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m1x3_tumu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m1x4_tama_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_tamu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m1x4_tamu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_tuma_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m1x4_tuma_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_tumu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m1x4_tumu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8m1x5_tama_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_tamu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8m1x5_tamu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_tuma_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8m1x5_tuma_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_tumu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei32_v_i8m1x5_tumu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8m1x6_tama_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_tamu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8m1x6_tamu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_tuma_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8m1x6_tuma_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_tumu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei32_v_i8m1x6_tumu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8m1x7_tama_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_tamu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8m1x7_tamu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_tuma_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8m1x7_tuma_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_tumu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei32_v_i8m1x7_tumu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_tama_vl32 (vbool8_t mask, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8m1x8_tama_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_tamu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8m1x8_tamu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_tuma_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8m1x8_tuma_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_tumu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei32_v_i8m1x8_tumu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_tama_vl32 (vbool8_t mask, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m2x2_tama_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_tamu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m2x2_tamu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_tuma_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m2x2_tuma_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_tumu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m2x2_tumu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_tama_vl32 (vbool8_t mask, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m2x3_tama_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_tamu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m2x3_tamu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_tuma_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m2x3_tuma_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_tumu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei32_v_i16m2x3_tumu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_tama_vl32 (vbool8_t mask, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m2x4_tama_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_tamu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m2x4_tamu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_tuma_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m2x4_tuma_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_tumu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei32_v_i16m2x4_tumu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_tama_vl32 (vbool8_t mask, int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m4x2_tama_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_tamu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m4x2_tamu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_tuma_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m4x2_tuma_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_tumu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei32_v_i32m4x2_tumu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_tama_vl32 (vbool4_t mask, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m2x2_tama_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_tamu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m2x2_tamu_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_tuma_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m2x2_tuma_vl32 )?} 1 } } */
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_tumu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i8m2x2_tumu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_tama_vl32 (vbool4_t mask, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m2x3_tama_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_tamu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m2x3_tamu_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_tuma_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m2x3_tuma_vl32 )?} 1 } } */
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_tumu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei32_v_i8m2x3_tumu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_tama_vl32 (vbool4_t mask, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m2x4_tama_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_tamu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m2x4_tamu_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_tuma_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m2x4_tuma_vl32 )?} 1 } } */
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_tumu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei32_v_i8m2x4_tumu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_tama_vl32 (vbool4_t mask, int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m4x2_tama_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_tamu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m4x2_tamu_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_tuma_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m4x2_tuma_vl32 )?} 1 } } */
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_tumu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei32_v_i16m4x2_tumu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf8x2_tama_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_tamu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf8x2_tamu_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_tuma_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf8x2_tuma_vl32 )?} 1 } } */
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_tumu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf8x2_tumu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf8x3_tama_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_tamu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf8x3_tamu_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_tuma_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf8x3_tuma_vl32 )?} 1 } } */
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_tumu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf8x3_tumu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf8x4_tama_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_tamu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf8x4_tamu_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_tuma_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf8x4_tuma_vl32 )?} 1 } } */
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_tumu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf8x4_tumu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf8x5_tama_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_tamu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf8x5_tamu_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_tuma_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf8x5_tuma_vl32 )?} 1 } } */
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_tumu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf8x5_tumu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf8x6_tama_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_tamu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf8x6_tamu_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_tuma_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf8x6_tuma_vl32 )?} 1 } } */
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_tumu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf8x6_tumu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf8x7_tama_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_tamu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf8x7_tamu_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_tuma_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf8x7_tuma_vl32 )?} 1 } } */
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_tumu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf8x7_tumu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_tama_vl32 (vbool64_t mask, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf8x8_tama_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_tamu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf8x8_tamu_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_tuma_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf8x8_tuma_vl32 )?} 1 } } */
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_tumu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf8x8_tumu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf4x2_tama_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_tamu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf4x2_tamu_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_tuma_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf4x2_tuma_vl32 )?} 1 } } */
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_tumu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf4x2_tumu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf4x3_tama_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_tamu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf4x3_tamu_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_tuma_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf4x3_tuma_vl32 )?} 1 } } */
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_tumu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf4x3_tumu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf4x4_tama_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_tamu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf4x4_tamu_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_tuma_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf4x4_tuma_vl32 )?} 1 } } */
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_tumu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf4x4_tumu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf4x5_tama_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_tamu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf4x5_tamu_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_tuma_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf4x5_tuma_vl32 )?} 1 } } */
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_tumu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf4x5_tumu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf4x6_tama_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_tamu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf4x6_tamu_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_tuma_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf4x6_tuma_vl32 )?} 1 } } */
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_tumu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf4x6_tumu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf4x7_tama_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_tamu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf4x7_tamu_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_tuma_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf4x7_tuma_vl32 )?} 1 } } */
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_tumu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf4x7_tumu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_tama_vl32 (vbool64_t mask, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf4x8_tama_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_tamu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf4x8_tamu_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_tuma_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf4x8_tuma_vl32 )?} 1 } } */
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_tumu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf4x8_tumu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32mf2x2_tama_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_tamu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32mf2x2_tamu_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_tuma_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32mf2x2_tuma_vl32 )?} 1 } } */
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_tumu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32mf2x2_tumu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32mf2x3_tama_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_tamu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32mf2x3_tamu_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_tuma_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32mf2x3_tuma_vl32 )?} 1 } } */
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_tumu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32mf2x3_tumu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32mf2x4_tama_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_tamu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32mf2x4_tamu_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_tuma_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32mf2x4_tuma_vl32 )?} 1 } } */
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_tumu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32mf2x4_tumu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32mf2x5_tama_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_tamu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32mf2x5_tamu_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_tuma_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32mf2x5_tuma_vl32 )?} 1 } } */
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_tumu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32mf2x5_tumu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32mf2x6_tama_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_tamu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32mf2x6_tamu_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_tuma_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32mf2x6_tuma_vl32 )?} 1 } } */
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_tumu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32mf2x6_tumu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32mf2x7_tama_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_tamu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32mf2x7_tamu_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_tuma_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32mf2x7_tuma_vl32 )?} 1 } } */
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_tumu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32mf2x7_tumu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_tama_vl32 (vbool64_t mask, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32mf2x8_tama_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_tamu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32mf2x8_tamu_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_tuma_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32mf2x8_tuma_vl32 )?} 1 } } */
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_tumu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32mf2x8_tumu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m1x2_tama_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_tamu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m1x2_tamu_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_tuma_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m1x2_tuma_vl32 )?} 1 } } */
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_tumu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m1x2_tumu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m1x3_tama_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_tamu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m1x3_tamu_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_tuma_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m1x3_tuma_vl32 )?} 1 } } */
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_tumu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m1x3_tumu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m1x4_tama_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_tamu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m1x4_tamu_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_tuma_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m1x4_tuma_vl32 )?} 1 } } */
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_tumu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m1x4_tumu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i64m1x5_tama_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_tamu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i64m1x5_tamu_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_tuma_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i64m1x5_tuma_vl32 )?} 1 } } */
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_tumu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i64m1x5_tumu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i64m1x6_tama_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_tamu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i64m1x6_tamu_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_tuma_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i64m1x6_tuma_vl32 )?} 1 } } */
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_tumu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i64m1x6_tumu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i64m1x7_tama_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_tamu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i64m1x7_tamu_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_tuma_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i64m1x7_tuma_vl32 )?} 1 } } */
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_tumu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i64m1x7_tumu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_tama_vl32 (vbool64_t mask, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i64m1x8_tama_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_tamu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i64m1x8_tamu_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_tuma_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i64m1x8_tuma_vl32 )?} 1 } } */
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_tumu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i64m1x8_tumu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf4x2_tama_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_tamu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf4x2_tamu_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_tuma_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf4x2_tuma_vl32 )?} 1 } } */
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_tumu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf4x2_tumu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf4x3_tama_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_tamu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf4x3_tamu_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_tuma_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf4x3_tuma_vl32 )?} 1 } } */
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_tumu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf4x3_tumu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf4x4_tama_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_tamu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf4x4_tamu_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_tuma_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf4x4_tuma_vl32 )?} 1 } } */
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_tumu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf4x4_tumu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf4x5_tama_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_tamu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf4x5_tamu_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_tuma_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf4x5_tuma_vl32 )?} 1 } } */
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_tumu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf4x5_tumu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf4x6_tama_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_tamu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf4x6_tamu_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_tuma_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf4x6_tuma_vl32 )?} 1 } } */
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_tumu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf4x6_tumu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf4x7_tama_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_tamu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf4x7_tamu_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_tuma_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf4x7_tuma_vl32 )?} 1 } } */
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_tumu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf4x7_tumu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_tama_vl32 (vbool32_t mask, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf4x8_tama_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_tamu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf4x8_tamu_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_tuma_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf4x8_tuma_vl32 )?} 1 } } */
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_tumu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf4x8_tumu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf2x2_tama_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_tamu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf2x2_tamu_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_tuma_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf2x2_tuma_vl32 )?} 1 } } */
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_tumu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16mf2x2_tumu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf2x3_tama_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_tamu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf2x3_tamu_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_tuma_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf2x3_tuma_vl32 )?} 1 } } */
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_tumu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16mf2x3_tumu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf2x4_tama_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_tamu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf2x4_tamu_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_tuma_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf2x4_tuma_vl32 )?} 1 } } */
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_tumu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16mf2x4_tumu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf2x5_tama_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_tamu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf2x5_tamu_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_tuma_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf2x5_tuma_vl32 )?} 1 } } */
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_tumu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16mf2x5_tumu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf2x6_tama_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_tamu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf2x6_tamu_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_tuma_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf2x6_tuma_vl32 )?} 1 } } */
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_tumu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16mf2x6_tumu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf2x7_tama_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_tamu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf2x7_tamu_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_tuma_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf2x7_tuma_vl32 )?} 1 } } */
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_tumu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16mf2x7_tumu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_tama_vl32 (vbool32_t mask, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf2x8_tama_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_tamu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf2x8_tamu_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_tuma_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf2x8_tuma_vl32 )?} 1 } } */
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_tumu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16mf2x8_tumu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m1x2_tama_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_tamu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m1x2_tamu_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_tuma_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m1x2_tuma_vl32 )?} 1 } } */
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_tumu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m1x2_tumu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m1x3_tama_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_tamu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m1x3_tamu_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_tuma_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m1x3_tuma_vl32 )?} 1 } } */
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_tumu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m1x3_tumu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m1x4_tama_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_tamu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m1x4_tamu_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_tuma_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m1x4_tuma_vl32 )?} 1 } } */
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_tumu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m1x4_tumu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32m1x5_tama_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_tamu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32m1x5_tamu_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_tuma_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32m1x5_tuma_vl32 )?} 1 } } */
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_tumu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg5ei64_v_i32m1x5_tumu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32m1x6_tama_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_tamu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32m1x6_tamu_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_tuma_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32m1x6_tuma_vl32 )?} 1 } } */
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_tumu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg6ei64_v_i32m1x6_tumu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32m1x7_tama_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_tamu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32m1x7_tamu_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_tuma_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32m1x7_tuma_vl32 )?} 1 } } */
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_tumu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg7ei64_v_i32m1x7_tumu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_tama_vl32 (vbool32_t mask, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32m1x8_tama_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_tamu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32m1x8_tamu_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_tuma_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32m1x8_tuma_vl32 )?} 1 } } */
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_tumu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg8ei64_v_i32m1x8_tumu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_tama_vl32 (vbool32_t mask, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m2x2_tama_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_tamu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m2x2_tamu_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_tuma_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m2x2_tuma_vl32 )?} 1 } } */
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_tumu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m2x2_tumu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_tama_vl32 (vbool32_t mask, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m2x3_tama_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_tamu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m2x3_tamu_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_tuma_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m2x3_tuma_vl32 )?} 1 } } */
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_tumu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg3ei64_v_i64m2x3_tumu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_tama_vl32 (vbool32_t mask, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m2x4_tama_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_tamu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m2x4_tamu_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_tuma_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m2x4_tuma_vl32 )?} 1 } } */
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_tumu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vluxseg4ei64_v_i64m2x4_tumu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf2x2_tama_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_tamu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf2x2_tamu_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_tuma_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf2x2_tuma_vl32 )?} 1 } } */
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_tumu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8mf2x2_tumu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf2x3_tama_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_tamu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf2x3_tamu_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_tuma_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf2x3_tuma_vl32 )?} 1 } } */
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_tumu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8mf2x3_tumu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf2x4_tama_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_tamu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf2x4_tamu_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_tuma_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf2x4_tuma_vl32 )?} 1 } } */
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_tumu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8mf2x4_tumu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf2x5_tama_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_tamu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf2x5_tamu_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_tuma_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf2x5_tuma_vl32 )?} 1 } } */
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_tumu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8mf2x5_tumu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf2x6_tama_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_tamu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf2x6_tamu_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_tuma_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf2x6_tuma_vl32 )?} 1 } } */
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_tumu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8mf2x6_tumu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf2x7_tama_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_tamu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf2x7_tamu_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_tuma_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf2x7_tuma_vl32 )?} 1 } } */
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_tumu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8mf2x7_tumu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_tama_vl32 (vbool16_t mask, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf2x8_tama_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_tamu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf2x8_tamu_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_tuma_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf2x8_tuma_vl32 )?} 1 } } */
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_tumu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8mf2x8_tumu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m1x2_tama_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_tamu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m1x2_tamu_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_tuma_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m1x2_tuma_vl32 )?} 1 } } */
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_tumu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m1x2_tumu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m1x3_tama_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_tamu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m1x3_tamu_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_tuma_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m1x3_tuma_vl32 )?} 1 } } */
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_tumu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m1x3_tumu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m1x4_tama_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_tamu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m1x4_tamu_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_tuma_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m1x4_tuma_vl32 )?} 1 } } */
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_tumu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m1x4_tumu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16m1x5_tama_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_tamu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16m1x5_tamu_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_tuma_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16m1x5_tuma_vl32 )?} 1 } } */
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_tumu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg5ei64_v_i16m1x5_tumu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16m1x6_tama_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_tamu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16m1x6_tamu_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_tuma_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16m1x6_tuma_vl32 )?} 1 } } */
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_tumu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg6ei64_v_i16m1x6_tumu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16m1x7_tama_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_tamu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16m1x7_tamu_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_tuma_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16m1x7_tuma_vl32 )?} 1 } } */
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_tumu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg7ei64_v_i16m1x7_tumu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_tama_vl32 (vbool16_t mask, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16m1x8_tama_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_tamu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16m1x8_tamu_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_tuma_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16m1x8_tuma_vl32 )?} 1 } } */
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_tumu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg8ei64_v_i16m1x8_tumu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_tama_vl32 (vbool16_t mask, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m2x2_tama_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_tamu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m2x2_tamu_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_tuma_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m2x2_tuma_vl32 )?} 1 } } */
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_tumu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m2x2_tumu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_tama_vl32 (vbool16_t mask, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m2x3_tama_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_tamu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m2x3_tamu_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_tuma_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m2x3_tuma_vl32 )?} 1 } } */
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_tumu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg3ei64_v_i32m2x3_tumu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_tama_vl32 (vbool16_t mask, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m2x4_tama_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_tamu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m2x4_tamu_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_tuma_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m2x4_tuma_vl32 )?} 1 } } */
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_tumu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg4ei64_v_i32m2x4_tumu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_tama_vl32 (vbool16_t mask, int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m4x2_tama_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_tamu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m4x2_tamu_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_tuma_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m4x2_tuma_vl32 )?} 1 } } */
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_tumu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vluxseg2ei64_v_i64m4x2_tumu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8m1x2_tama_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_tamu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8m1x2_tamu_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_tuma_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8m1x2_tuma_vl32 )?} 1 } } */
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_tumu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i8m1x2_tumu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8m1x3_tama_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_tamu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8m1x3_tamu_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_tuma_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8m1x3_tuma_vl32 )?} 1 } } */
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_tumu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i8m1x3_tumu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8m1x4_tama_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_tamu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8m1x4_tamu_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_tuma_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8m1x4_tuma_vl32 )?} 1 } } */
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_tumu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i8m1x4_tumu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8m1x5_tama_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_tamu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8m1x5_tamu_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_tuma_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8m1x5_tuma_vl32 )?} 1 } } */
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_tumu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg5ei64_v_i8m1x5_tumu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8m1x6_tama_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_tamu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8m1x6_tamu_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_tuma_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8m1x6_tuma_vl32 )?} 1 } } */
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_tumu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg6ei64_v_i8m1x6_tumu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8m1x7_tama_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_tamu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8m1x7_tamu_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_tuma_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8m1x7_tuma_vl32 )?} 1 } } */
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_tumu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg7ei64_v_i8m1x7_tumu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_tama_vl32 (vbool8_t mask, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8m1x8_tama_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_tamu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8m1x8_tamu_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_tuma_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8m1x8_tuma_vl32 )?} 1 } } */
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_tumu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg8ei64_v_i8m1x8_tumu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_tama_vl32 (vbool8_t mask, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m2x2_tama_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_tamu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m2x2_tamu_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_tuma_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m2x2_tuma_vl32 )?} 1 } } */
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_tumu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i16m2x2_tumu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_tama_vl32 (vbool8_t mask, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m2x3_tama_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_tamu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m2x3_tamu_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_tuma_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m2x3_tuma_vl32 )?} 1 } } */
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_tumu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg3ei64_v_i16m2x3_tumu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_tama_vl32 (vbool8_t mask, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m2x4_tama_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_tamu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m2x4_tamu_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_tuma_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m2x4_tuma_vl32 )?} 1 } } */
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_tumu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg4ei64_v_i16m2x4_tumu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_tama_vl32 (vbool8_t mask, int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2_tama (mask, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m4x2_tama_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_tamu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2_tamu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m4x2_tamu_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_tuma_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2_tuma (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m4x2_tuma_vl32 )?} 1 } } */
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_tumu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2_tumu (mask, dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vluxseg.ei..?\.v).)*\s+vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vluxseg2ei64_v_i32m4x2_tumu_vl32 )?} 1 } } */
