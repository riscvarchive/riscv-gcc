
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf8x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf8x2_tama_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tamu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf8x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf8x2_tamu_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tuma_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf8x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf8x2_tuma_vl32 )?} 1 } } */
vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tumu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf8x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf8x2_tumu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf8x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf8x3_tama_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tamu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf8x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf8x3_tamu_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tuma_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf8x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf8x3_tuma_vl32 )?} 1 } } */
vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tumu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf8x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf8x3_tumu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf8x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf8x4_tama_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tamu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf8x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf8x4_tamu_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tuma_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf8x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf8x4_tuma_vl32 )?} 1 } } */
vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tumu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf8x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf8x4_tumu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf8x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf8x5_tama_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tamu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf8x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf8x5_tamu_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tuma_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf8x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf8x5_tuma_vl32 )?} 1 } } */
vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tumu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf8x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf8x5_tumu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf8x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf8x6_tama_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tamu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf8x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf8x6_tamu_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tuma_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf8x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf8x6_tuma_vl32 )?} 1 } } */
vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tumu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf8x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf8x6_tumu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf8x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf8x7_tama_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tamu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf8x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf8x7_tamu_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tuma_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf8x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf8x7_tuma_vl32 )?} 1 } } */
vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tumu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf8x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf8x7_tumu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tama_vl32 (vbool64_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf8x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf8x8_tama_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tamu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf8x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf8x8_tamu_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tuma_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf8x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf8x8_tuma_vl32 )?} 1 } } */
vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tumu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf8x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf8x8_tumu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf4x2_tama_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tamu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf4x2_tamu_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tuma_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf4x2_tuma_vl32 )?} 1 } } */
vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tumu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf4x2_tumu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf4x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf4x3_tama_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tamu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf4x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf4x3_tamu_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tuma_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf4x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf4x3_tuma_vl32 )?} 1 } } */
vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tumu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf4x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf4x3_tumu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf4x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf4x4_tama_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tamu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf4x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf4x4_tamu_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tuma_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf4x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf4x4_tuma_vl32 )?} 1 } } */
vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tumu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf4x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf4x4_tumu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf4x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf4x5_tama_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tamu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf4x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf4x5_tamu_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tuma_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf4x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf4x5_tuma_vl32 )?} 1 } } */
vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tumu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf4x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf4x5_tumu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf4x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf4x6_tama_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tamu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf4x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf4x6_tamu_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tuma_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf4x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf4x6_tuma_vl32 )?} 1 } } */
vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tumu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf4x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf4x6_tumu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf4x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf4x7_tama_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tamu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf4x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf4x7_tamu_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tuma_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf4x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf4x7_tuma_vl32 )?} 1 } } */
vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tumu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf4x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf4x7_tumu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tama_vl32 (vbool32_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf4x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf4x8_tama_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tamu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf4x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf4x8_tamu_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tuma_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf4x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf4x8_tuma_vl32 )?} 1 } } */
vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tumu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf4x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf4x8_tumu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf2x2_tama_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tamu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf2x2_tamu_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tuma_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf2x2_tuma_vl32 )?} 1 } } */
vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tumu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8mf2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8mf2x2_tumu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf2x3_tama_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tamu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf2x3_tamu_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tuma_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf2x3_tuma_vl32 )?} 1 } } */
vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tumu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8mf2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8mf2x3_tumu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf2x4_tama_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tamu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf2x4_tamu_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tuma_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf2x4_tuma_vl32 )?} 1 } } */
vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tumu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8mf2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8mf2x4_tumu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf2x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf2x5_tama_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tamu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf2x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf2x5_tamu_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tuma_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf2x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf2x5_tuma_vl32 )?} 1 } } */
vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tumu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8mf2x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8mf2x5_tumu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf2x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf2x6_tama_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tamu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf2x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf2x6_tamu_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tuma_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf2x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf2x6_tuma_vl32 )?} 1 } } */
vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tumu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8mf2x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8mf2x6_tumu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf2x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf2x7_tama_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tamu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf2x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf2x7_tamu_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tuma_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf2x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf2x7_tuma_vl32 )?} 1 } } */
vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tumu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8mf2x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8mf2x7_tumu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tama_vl32 (vbool16_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf2x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf2x8_tama_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tamu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf2x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf2x8_tamu_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tuma_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf2x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf2x8_tuma_vl32 )?} 1 } } */
vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tumu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8mf2x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8mf2x8_tumu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m1x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m1x2_tama_vl32 )?} 1 } } */
vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tamu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m1x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m1x2_tamu_vl32 )?} 1 } } */
vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tuma_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m1x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m1x2_tuma_vl32 )?} 1 } } */
vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tumu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m1x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m1x2_tumu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m1x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m1x3_tama_vl32 )?} 1 } } */
vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tamu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m1x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m1x3_tamu_vl32 )?} 1 } } */
vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tuma_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m1x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m1x3_tuma_vl32 )?} 1 } } */
vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tumu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m1x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m1x3_tumu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m1x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m1x4_tama_vl32 )?} 1 } } */
vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tamu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m1x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m1x4_tamu_vl32 )?} 1 } } */
vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tuma_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m1x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m1x4_tuma_vl32 )?} 1 } } */
vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tumu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m1x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m1x4_tumu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8m1x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8m1x5_tama_vl32 )?} 1 } } */
vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tamu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8m1x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8m1x5_tamu_vl32 )?} 1 } } */
vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tuma_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8m1x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8m1x5_tuma_vl32 )?} 1 } } */
vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tumu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_u8m1x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_u8m1x5_tumu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8m1x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8m1x6_tama_vl32 )?} 1 } } */
vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tamu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8m1x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8m1x6_tamu_vl32 )?} 1 } } */
vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tuma_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8m1x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8m1x6_tuma_vl32 )?} 1 } } */
vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tumu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_u8m1x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_u8m1x6_tumu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8m1x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8m1x7_tama_vl32 )?} 1 } } */
vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tamu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8m1x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8m1x7_tamu_vl32 )?} 1 } } */
vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tuma_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8m1x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8m1x7_tuma_vl32 )?} 1 } } */
vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tumu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_u8m1x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_u8m1x7_tumu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tama_vl32 (vbool8_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8m1x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8m1x8_tama_vl32 )?} 1 } } */
vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tamu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8m1x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8m1x8_tamu_vl32 )?} 1 } } */
vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tuma_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8m1x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8m1x8_tuma_vl32 )?} 1 } } */
vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tumu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_u8m1x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_u8m1x8_tumu_vl32 )?} 1 } } */
vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tama_vl32 (vbool4_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m2x2_tama_vl32 )?} 1 } } */
vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tamu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m2x2_tamu_vl32 )?} 1 } } */
vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tuma_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m2x2_tuma_vl32 )?} 1 } } */
vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tumu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m2x2_tumu_vl32 )?} 1 } } */
vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tama_vl32 (vbool4_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m2x3_tama_vl32 )?} 1 } } */
vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tamu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m2x3_tamu_vl32 )?} 1 } } */
vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tuma_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m2x3_tuma_vl32 )?} 1 } } */
vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tumu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_u8m2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_u8m2x3_tumu_vl32 )?} 1 } } */
vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tama_vl32 (vbool4_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m2x4_tama_vl32 )?} 1 } } */
vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tamu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m2x4_tamu_vl32 )?} 1 } } */
vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tuma_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m2x4_tuma_vl32 )?} 1 } } */
vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tumu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_u8m2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_u8m2x4_tumu_vl32 )?} 1 } } */
vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tama_vl32 (vbool2_t mask, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m4x2_tama_vl32 )?} 1 } } */
vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tamu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m4x2_tamu_vl32 )?} 1 } } */
vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tuma_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m4x2_tuma_vl32 )?} 1 } } */
vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tumu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_u8m4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_u8m4x2_tumu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf4x2_tama_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tamu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf4x2_tamu_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tuma_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf4x2_tuma_vl32 )?} 1 } } */
vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tumu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf4x2_tumu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf4x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf4x3_tama_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tamu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf4x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf4x3_tamu_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tuma_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf4x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf4x3_tuma_vl32 )?} 1 } } */
vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tumu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf4x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf4x3_tumu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf4x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf4x4_tama_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tamu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf4x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf4x4_tamu_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tuma_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf4x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf4x4_tuma_vl32 )?} 1 } } */
vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tumu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf4x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf4x4_tumu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf4x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf4x5_tama_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tamu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf4x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf4x5_tamu_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tuma_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf4x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf4x5_tuma_vl32 )?} 1 } } */
vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tumu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf4x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf4x5_tumu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf4x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf4x6_tama_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tamu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf4x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf4x6_tamu_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tuma_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf4x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf4x6_tuma_vl32 )?} 1 } } */
vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tumu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf4x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf4x6_tumu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf4x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf4x7_tama_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tamu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf4x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf4x7_tamu_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tuma_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf4x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf4x7_tuma_vl32 )?} 1 } } */
vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tumu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf4x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf4x7_tumu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tama_vl32 (vbool64_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf4x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf4x8_tama_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tamu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf4x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf4x8_tamu_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tuma_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf4x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf4x8_tuma_vl32 )?} 1 } } */
vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tumu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf4x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf4x8_tumu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf2x2_tama_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tamu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf2x2_tamu_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tuma_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf2x2_tuma_vl32 )?} 1 } } */
vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tumu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16mf2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16mf2x2_tumu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf2x3_tama_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tamu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf2x3_tamu_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tuma_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf2x3_tuma_vl32 )?} 1 } } */
vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tumu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16mf2x3_tumu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf2x4_tama_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tamu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf2x4_tamu_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tuma_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf2x4_tuma_vl32 )?} 1 } } */
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tumu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16mf2x4_tumu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf2x5_tama_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tamu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf2x5_tamu_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tuma_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf2x5_tuma_vl32 )?} 1 } } */
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tumu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16mf2x5_tumu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf2x6_tama_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tamu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf2x6_tamu_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tuma_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf2x6_tuma_vl32 )?} 1 } } */
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tumu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16mf2x6_tumu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf2x7_tama_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tamu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf2x7_tamu_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tuma_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf2x7_tuma_vl32 )?} 1 } } */
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tumu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16mf2x7_tumu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tama_vl32 (vbool32_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf2x8_tama_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tamu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf2x8_tamu_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tuma_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf2x8_tuma_vl32 )?} 1 } } */
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tumu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16mf2x8_tumu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m1x2_tama_vl32 )?} 1 } } */
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tamu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m1x2_tamu_vl32 )?} 1 } } */
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tuma_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m1x2_tuma_vl32 )?} 1 } } */
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tumu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m1x2_tumu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m1x3_tama_vl32 )?} 1 } } */
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tamu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m1x3_tamu_vl32 )?} 1 } } */
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tuma_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m1x3_tuma_vl32 )?} 1 } } */
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tumu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m1x3_tumu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m1x4_tama_vl32 )?} 1 } } */
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tamu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m1x4_tamu_vl32 )?} 1 } } */
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tuma_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m1x4_tuma_vl32 )?} 1 } } */
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tumu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m1x4_tumu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16m1x5_tama_vl32 )?} 1 } } */
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tamu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16m1x5_tamu_vl32 )?} 1 } } */
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tuma_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16m1x5_tuma_vl32 )?} 1 } } */
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tumu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_u16m1x5_tumu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16m1x6_tama_vl32 )?} 1 } } */
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tamu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16m1x6_tamu_vl32 )?} 1 } } */
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tuma_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16m1x6_tuma_vl32 )?} 1 } } */
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tumu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_u16m1x6_tumu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16m1x7_tama_vl32 )?} 1 } } */
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tamu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16m1x7_tamu_vl32 )?} 1 } } */
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tuma_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16m1x7_tuma_vl32 )?} 1 } } */
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tumu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_u16m1x7_tumu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tama_vl32 (vbool16_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16m1x8_tama_vl32 )?} 1 } } */
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tamu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16m1x8_tamu_vl32 )?} 1 } } */
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tuma_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16m1x8_tuma_vl32 )?} 1 } } */
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tumu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_u16m1x8_tumu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tama_vl32 (vbool8_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m2x2_tama_vl32 )?} 1 } } */
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tamu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m2x2_tamu_vl32 )?} 1 } } */
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tuma_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m2x2_tuma_vl32 )?} 1 } } */
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tumu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m2x2_tumu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tama_vl32 (vbool8_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m2x3_tama_vl32 )?} 1 } } */
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tamu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m2x3_tamu_vl32 )?} 1 } } */
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tuma_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m2x3_tuma_vl32 )?} 1 } } */
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tumu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_u16m2x3_tumu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tama_vl32 (vbool8_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m2x4_tama_vl32 )?} 1 } } */
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tamu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m2x4_tamu_vl32 )?} 1 } } */
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tuma_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m2x4_tuma_vl32 )?} 1 } } */
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tumu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_u16m2x4_tumu_vl32 )?} 1 } } */
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tama_vl32 (vbool4_t mask, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m4x2_tama_vl32 )?} 1 } } */
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tamu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m4x2_tamu_vl32 )?} 1 } } */
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tuma_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m4x2_tuma_vl32 )?} 1 } } */
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tumu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_u16m4x2_tumu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32mf2x2_tama_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tamu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32mf2x2_tamu_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tuma_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32mf2x2_tuma_vl32 )?} 1 } } */
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tumu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32mf2x2_tumu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32mf2x3_tama_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tamu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32mf2x3_tamu_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tuma_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32mf2x3_tuma_vl32 )?} 1 } } */
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tumu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32mf2x3_tumu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32mf2x4_tama_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tamu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32mf2x4_tamu_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tuma_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32mf2x4_tuma_vl32 )?} 1 } } */
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tumu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32mf2x4_tumu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32mf2x5_tama_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tamu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32mf2x5_tamu_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tuma_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32mf2x5_tuma_vl32 )?} 1 } } */
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tumu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32mf2x5_tumu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32mf2x6_tama_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tamu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32mf2x6_tamu_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tuma_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32mf2x6_tuma_vl32 )?} 1 } } */
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tumu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32mf2x6_tumu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32mf2x7_tama_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tamu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32mf2x7_tamu_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tuma_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32mf2x7_tuma_vl32 )?} 1 } } */
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tumu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32mf2x7_tumu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tama_vl32 (vbool64_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32mf2x8_tama_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tamu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32mf2x8_tamu_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tuma_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32mf2x8_tuma_vl32 )?} 1 } } */
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tumu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32mf2x8_tumu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m1x2_tama_vl32 )?} 1 } } */
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tamu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m1x2_tamu_vl32 )?} 1 } } */
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tuma_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m1x2_tuma_vl32 )?} 1 } } */
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tumu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m1x2_tumu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m1x3_tama_vl32 )?} 1 } } */
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tamu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m1x3_tamu_vl32 )?} 1 } } */
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tuma_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m1x3_tuma_vl32 )?} 1 } } */
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tumu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m1x3_tumu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m1x4_tama_vl32 )?} 1 } } */
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tamu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m1x4_tamu_vl32 )?} 1 } } */
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tuma_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m1x4_tuma_vl32 )?} 1 } } */
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tumu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m1x4_tumu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32m1x5_tama_vl32 )?} 1 } } */
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tamu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32m1x5_tamu_vl32 )?} 1 } } */
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tuma_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32m1x5_tuma_vl32 )?} 1 } } */
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tumu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_u32m1x5_tumu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32m1x6_tama_vl32 )?} 1 } } */
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tamu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32m1x6_tamu_vl32 )?} 1 } } */
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tuma_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32m1x6_tuma_vl32 )?} 1 } } */
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tumu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_u32m1x6_tumu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32m1x7_tama_vl32 )?} 1 } } */
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tamu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32m1x7_tamu_vl32 )?} 1 } } */
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tuma_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32m1x7_tuma_vl32 )?} 1 } } */
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tumu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_u32m1x7_tumu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tama_vl32 (vbool32_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32m1x8_tama_vl32 )?} 1 } } */
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tamu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32m1x8_tamu_vl32 )?} 1 } } */
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tuma_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32m1x8_tuma_vl32 )?} 1 } } */
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tumu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_u32m1x8_tumu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tama_vl32 (vbool16_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m2x2_tama_vl32 )?} 1 } } */
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tamu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m2x2_tamu_vl32 )?} 1 } } */
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tuma_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m2x2_tuma_vl32 )?} 1 } } */
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tumu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m2x2_tumu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tama_vl32 (vbool16_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m2x3_tama_vl32 )?} 1 } } */
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tamu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m2x3_tamu_vl32 )?} 1 } } */
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tuma_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m2x3_tuma_vl32 )?} 1 } } */
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tumu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_u32m2x3_tumu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tama_vl32 (vbool16_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m2x4_tama_vl32 )?} 1 } } */
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tamu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m2x4_tamu_vl32 )?} 1 } } */
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tuma_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m2x4_tuma_vl32 )?} 1 } } */
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tumu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_u32m2x4_tumu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tama_vl32 (vbool8_t mask, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m4x2_tama_vl32 )?} 1 } } */
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tamu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m4x2_tamu_vl32 )?} 1 } } */
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tuma_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m4x2_tuma_vl32 )?} 1 } } */
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tumu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_u32m4x2_tumu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m1x2_tama_vl32 )?} 1 } } */
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tamu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m1x2_tamu_vl32 )?} 1 } } */
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tuma_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m1x2_tuma_vl32 )?} 1 } } */
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tumu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m1x2_tumu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m1x3_tama_vl32 )?} 1 } } */
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tamu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m1x3_tamu_vl32 )?} 1 } } */
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tuma_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m1x3_tuma_vl32 )?} 1 } } */
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tumu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m1x3_tumu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m1x4_tama_vl32 )?} 1 } } */
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tamu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m1x4_tamu_vl32 )?} 1 } } */
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tuma_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m1x4_tuma_vl32 )?} 1 } } */
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tumu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m1x4_tumu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_u64m1x5_tama_vl32 )?} 1 } } */
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tamu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_u64m1x5_tamu_vl32 )?} 1 } } */
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tuma_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_u64m1x5_tuma_vl32 )?} 1 } } */
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tumu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_u64m1x5_tumu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_u64m1x6_tama_vl32 )?} 1 } } */
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tamu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_u64m1x6_tamu_vl32 )?} 1 } } */
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tuma_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_u64m1x6_tuma_vl32 )?} 1 } } */
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tumu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_u64m1x6_tumu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_u64m1x7_tama_vl32 )?} 1 } } */
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tamu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_u64m1x7_tamu_vl32 )?} 1 } } */
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tuma_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_u64m1x7_tuma_vl32 )?} 1 } } */
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tumu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_u64m1x7_tumu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tama_vl32 (vbool64_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_u64m1x8_tama_vl32 )?} 1 } } */
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tamu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_u64m1x8_tamu_vl32 )?} 1 } } */
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tuma_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_u64m1x8_tuma_vl32 )?} 1 } } */
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tumu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_u64m1x8_tumu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tama_vl32 (vbool32_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m2x2_tama_vl32 )?} 1 } } */
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tamu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m2x2_tamu_vl32 )?} 1 } } */
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tuma_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m2x2_tuma_vl32 )?} 1 } } */
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tumu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m2x2_tumu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tama_vl32 (vbool32_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m2x3_tama_vl32 )?} 1 } } */
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tamu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m2x3_tamu_vl32 )?} 1 } } */
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tuma_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m2x3_tuma_vl32 )?} 1 } } */
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tumu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_u64m2x3_tumu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tama_vl32 (vbool32_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m2x4_tama_vl32 )?} 1 } } */
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tamu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m2x4_tamu_vl32 )?} 1 } } */
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tuma_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m2x4_tuma_vl32 )?} 1 } } */
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tumu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_u64m2x4_tumu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tama_vl32 (vbool16_t mask, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m4x2_tama_vl32 )?} 1 } } */
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tamu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m4x2_tamu_vl32 )?} 1 } } */
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tuma_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m4x2_tuma_vl32 )?} 1 } } */
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tumu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_u64m4x2_tumu_vl32 )?} 1 } } */
