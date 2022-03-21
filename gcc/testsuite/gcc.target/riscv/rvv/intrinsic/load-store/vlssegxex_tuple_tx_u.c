
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf8x2_ta )?} 1 } } */
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf8x2_ta_vl31 )?} 1 } } */
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tu (vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf8x2_tu )?} 1 } } */
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tu_vl31 (vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf8x2_tu_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf8x3_ta )?} 1 } } */
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf8x3_ta_vl31 )?} 1 } } */
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tu (vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf8x3_tu )?} 1 } } */
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tu_vl31 (vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf8x3_tu_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf8x4_ta )?} 1 } } */
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf8x4_ta_vl31 )?} 1 } } */
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tu (vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf8x4_tu )?} 1 } } */
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tu_vl31 (vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf8x4_tu_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf8x5_ta )?} 1 } } */
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf8x5_ta_vl31 )?} 1 } } */
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tu (vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf8x5_tu )?} 1 } } */
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tu_vl31 (vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf8x5_tu_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf8x6_ta )?} 1 } } */
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf8x6_ta_vl31 )?} 1 } } */
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tu (vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf8x6_tu )?} 1 } } */
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tu_vl31 (vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf8x6_tu_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf8x7_ta )?} 1 } } */
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf8x7_ta_vl31 )?} 1 } } */
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tu (vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf8x7_tu )?} 1 } } */
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tu_vl31 (vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf8x7_tu_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf8x8_ta )?} 1 } } */
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf8x8_ta_vl31 )?} 1 } } */
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tu (vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf8x8_tu )?} 1 } } */
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tu_vl31 (vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf8x8_tu_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf4x2_ta )?} 1 } } */
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf4x2_ta_vl31 )?} 1 } } */
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tu (vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf4x2_tu )?} 1 } } */
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tu_vl31 (vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf4x2_tu_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf4x3_ta )?} 1 } } */
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf4x3_ta_vl31 )?} 1 } } */
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tu (vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf4x3_tu )?} 1 } } */
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tu_vl31 (vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf4x3_tu_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf4x4_ta )?} 1 } } */
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf4x4_ta_vl31 )?} 1 } } */
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tu (vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf4x4_tu )?} 1 } } */
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tu_vl31 (vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf4x4_tu_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf4x5_ta )?} 1 } } */
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf4x5_ta_vl31 )?} 1 } } */
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tu (vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf4x5_tu )?} 1 } } */
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tu_vl31 (vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf4x5_tu_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf4x6_ta )?} 1 } } */
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf4x6_ta_vl31 )?} 1 } } */
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tu (vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf4x6_tu )?} 1 } } */
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tu_vl31 (vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf4x6_tu_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf4x7_ta )?} 1 } } */
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf4x7_ta_vl31 )?} 1 } } */
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tu (vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf4x7_tu )?} 1 } } */
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tu_vl31 (vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf4x7_tu_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf4x8_ta )?} 1 } } */
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf4x8_ta_vl31 )?} 1 } } */
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tu (vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf4x8_tu )?} 1 } } */
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tu_vl31 (vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf4x8_tu_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf2x2_ta )?} 1 } } */
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf2x2_ta_vl31 )?} 1 } } */
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tu (vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf2x2_tu )?} 1 } } */
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tu_vl31 (vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8mf2x2_tu_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf2x3_ta )?} 1 } } */
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf2x3_ta_vl31 )?} 1 } } */
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tu (vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf2x3_tu )?} 1 } } */
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tu_vl31 (vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8mf2x3_tu_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf2x4_ta )?} 1 } } */
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf2x4_ta_vl31 )?} 1 } } */
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tu (vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf2x4_tu )?} 1 } } */
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tu_vl31 (vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8mf2x4_tu_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf2x5_ta )?} 1 } } */
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf2x5_ta_vl31 )?} 1 } } */
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tu (vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf2x5_tu )?} 1 } } */
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tu_vl31 (vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8mf2x5_tu_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf2x6_ta )?} 1 } } */
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf2x6_ta_vl31 )?} 1 } } */
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tu (vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf2x6_tu )?} 1 } } */
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tu_vl31 (vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8mf2x6_tu_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf2x7_ta )?} 1 } } */
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf2x7_ta_vl31 )?} 1 } } */
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tu (vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf2x7_tu )?} 1 } } */
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tu_vl31 (vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8mf2x7_tu_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf2x8_ta )?} 1 } } */
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf2x8_ta_vl31 )?} 1 } } */
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tu (vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf2x8_tu )?} 1 } } */
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tu_vl31 (vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8mf2x8_tu_vl31 )?} 1 } } */
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m1x2_ta )?} 1 } } */
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m1x2_ta_vl31 )?} 1 } } */
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tu (vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m1x2_tu )?} 1 } } */
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tu_vl31 (vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m1x2_tu_vl31 )?} 1 } } */
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m1x3_ta )?} 1 } } */
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m1x3_ta_vl31 )?} 1 } } */
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tu (vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m1x3_tu )?} 1 } } */
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tu_vl31 (vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m1x3_tu_vl31 )?} 1 } } */
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m1x4_ta )?} 1 } } */
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m1x4_ta_vl31 )?} 1 } } */
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tu (vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m1x4_tu )?} 1 } } */
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tu_vl31 (vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m1x4_tu_vl31 )?} 1 } } */
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8m1x5_ta )?} 1 } } */
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8m1x5_ta_vl31 )?} 1 } } */
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tu (vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8m1x5_tu )?} 1 } } */
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tu_vl31 (vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e8_v_u8m1x5_tu_vl31 )?} 1 } } */
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8m1x6_ta )?} 1 } } */
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8m1x6_ta_vl31 )?} 1 } } */
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tu (vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8m1x6_tu )?} 1 } } */
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tu_vl31 (vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e8_v_u8m1x6_tu_vl31 )?} 1 } } */
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8m1x7_ta )?} 1 } } */
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8m1x7_ta_vl31 )?} 1 } } */
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tu (vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8m1x7_tu )?} 1 } } */
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tu_vl31 (vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e8_v_u8m1x7_tu_vl31 )?} 1 } } */
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8m1x8_ta )?} 1 } } */
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8m1x8_ta_vl31 )?} 1 } } */
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tu (vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8m1x8_tu )?} 1 } } */
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tu_vl31 (vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e8_v_u8m1x8_tu_vl31 )?} 1 } } */
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m2x2_ta )?} 1 } } */
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m2x2_ta_vl31 )?} 1 } } */
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tu (vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m2x2_tu )?} 1 } } */
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tu_vl31 (vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m2x2_tu_vl31 )?} 1 } } */
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m2x3_ta )?} 1 } } */
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m2x3_ta_vl31 )?} 1 } } */
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tu (vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m2x3_tu )?} 1 } } */
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tu_vl31 (vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e8_v_u8m2x3_tu_vl31 )?} 1 } } */
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m2x4_ta )?} 1 } } */
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m2x4_ta_vl31 )?} 1 } } */
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tu (vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m2x4_tu )?} 1 } } */
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tu_vl31 (vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e8_v_u8m2x4_tu_vl31 )?} 1 } } */
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m4x2_ta )?} 1 } } */
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m4x2_ta_vl31 )?} 1 } } */
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tu (vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m4x2_tu )?} 1 } } */
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tu_vl31 (vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e8_v_u8m4x2_tu_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf4x2_ta )?} 1 } } */
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf4x2_ta_vl31 )?} 1 } } */
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tu (vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf4x2_tu )?} 1 } } */
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tu_vl31 (vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf4x2_tu_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf4x3_ta )?} 1 } } */
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf4x3_ta_vl31 )?} 1 } } */
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tu (vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf4x3_tu )?} 1 } } */
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tu_vl31 (vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf4x3_tu_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf4x4_ta )?} 1 } } */
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf4x4_ta_vl31 )?} 1 } } */
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tu (vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf4x4_tu )?} 1 } } */
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tu_vl31 (vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf4x4_tu_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf4x5_ta )?} 1 } } */
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf4x5_ta_vl31 )?} 1 } } */
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tu (vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf4x5_tu )?} 1 } } */
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tu_vl31 (vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf4x5_tu_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf4x6_ta )?} 1 } } */
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf4x6_ta_vl31 )?} 1 } } */
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tu (vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf4x6_tu )?} 1 } } */
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tu_vl31 (vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf4x6_tu_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf4x7_ta )?} 1 } } */
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf4x7_ta_vl31 )?} 1 } } */
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tu (vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf4x7_tu )?} 1 } } */
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tu_vl31 (vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf4x7_tu_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf4x8_ta )?} 1 } } */
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf4x8_ta_vl31 )?} 1 } } */
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tu (vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf4x8_tu )?} 1 } } */
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tu_vl31 (vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf4x8_tu_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf2x2_ta )?} 1 } } */
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf2x2_ta_vl31 )?} 1 } } */
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tu (vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf2x2_tu )?} 1 } } */
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tu_vl31 (vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16mf2x2_tu_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf2x3_ta )?} 1 } } */
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf2x3_ta_vl31 )?} 1 } } */
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tu (vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf2x3_tu )?} 1 } } */
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tu_vl31 (vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16mf2x3_tu_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf2x4_ta )?} 1 } } */
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf2x4_ta_vl31 )?} 1 } } */
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tu (vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf2x4_tu )?} 1 } } */
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tu_vl31 (vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16mf2x4_tu_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf2x5_ta )?} 1 } } */
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf2x5_ta_vl31 )?} 1 } } */
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf2x5_tu )?} 1 } } */
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu_vl31 (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16mf2x5_tu_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf2x6_ta )?} 1 } } */
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf2x6_ta_vl31 )?} 1 } } */
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf2x6_tu )?} 1 } } */
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu_vl31 (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16mf2x6_tu_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf2x7_ta )?} 1 } } */
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf2x7_ta_vl31 )?} 1 } } */
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf2x7_tu )?} 1 } } */
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu_vl31 (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16mf2x7_tu_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf2x8_ta )?} 1 } } */
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf2x8_ta_vl31 )?} 1 } } */
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf2x8_tu )?} 1 } } */
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu_vl31 (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16mf2x8_tu_vl31 )?} 1 } } */
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m1x2_ta )?} 1 } } */
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m1x2_ta_vl31 )?} 1 } } */
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m1x2_tu )?} 1 } } */
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu_vl31 (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m1x2_tu_vl31 )?} 1 } } */
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m1x3_ta )?} 1 } } */
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m1x3_ta_vl31 )?} 1 } } */
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m1x3_tu )?} 1 } } */
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu_vl31 (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m1x3_tu_vl31 )?} 1 } } */
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m1x4_ta )?} 1 } } */
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m1x4_ta_vl31 )?} 1 } } */
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m1x4_tu )?} 1 } } */
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu_vl31 (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m1x4_tu_vl31 )?} 1 } } */
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16m1x5_ta )?} 1 } } */
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16m1x5_ta_vl31 )?} 1 } } */
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16m1x5_tu )?} 1 } } */
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu_vl31 (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_u16m1x5_tu_vl31 )?} 1 } } */
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16m1x6_ta )?} 1 } } */
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16m1x6_ta_vl31 )?} 1 } } */
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16m1x6_tu )?} 1 } } */
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu_vl31 (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_u16m1x6_tu_vl31 )?} 1 } } */
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16m1x7_ta )?} 1 } } */
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16m1x7_ta_vl31 )?} 1 } } */
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16m1x7_tu )?} 1 } } */
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu_vl31 (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_u16m1x7_tu_vl31 )?} 1 } } */
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16m1x8_ta )?} 1 } } */
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16m1x8_ta_vl31 )?} 1 } } */
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16m1x8_tu )?} 1 } } */
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu_vl31 (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_u16m1x8_tu_vl31 )?} 1 } } */
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m2x2_ta )?} 1 } } */
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m2x2_ta_vl31 )?} 1 } } */
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m2x2_tu )?} 1 } } */
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu_vl31 (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m2x2_tu_vl31 )?} 1 } } */
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m2x3_ta )?} 1 } } */
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m2x3_ta_vl31 )?} 1 } } */
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m2x3_tu )?} 1 } } */
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu_vl31 (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_u16m2x3_tu_vl31 )?} 1 } } */
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m2x4_ta )?} 1 } } */
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m2x4_ta_vl31 )?} 1 } } */
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m2x4_tu )?} 1 } } */
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu_vl31 (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_u16m2x4_tu_vl31 )?} 1 } } */
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m4x2_ta )?} 1 } } */
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m4x2_ta_vl31 )?} 1 } } */
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m4x2_tu )?} 1 } } */
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu_vl31 (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_u16m4x2_tu_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32mf2x2_ta )?} 1 } } */
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32mf2x2_ta_vl31 )?} 1 } } */
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32mf2x2_tu )?} 1 } } */
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu_vl31 (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32mf2x2_tu_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32mf2x3_ta )?} 1 } } */
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32mf2x3_ta_vl31 )?} 1 } } */
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32mf2x3_tu )?} 1 } } */
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu_vl31 (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32mf2x3_tu_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32mf2x4_ta )?} 1 } } */
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32mf2x4_ta_vl31 )?} 1 } } */
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32mf2x4_tu )?} 1 } } */
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu_vl31 (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32mf2x4_tu_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32mf2x5_ta )?} 1 } } */
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32mf2x5_ta_vl31 )?} 1 } } */
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32mf2x5_tu )?} 1 } } */
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu_vl31 (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32mf2x5_tu_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32mf2x6_ta )?} 1 } } */
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32mf2x6_ta_vl31 )?} 1 } } */
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32mf2x6_tu )?} 1 } } */
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu_vl31 (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32mf2x6_tu_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32mf2x7_ta )?} 1 } } */
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32mf2x7_ta_vl31 )?} 1 } } */
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32mf2x7_tu )?} 1 } } */
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu_vl31 (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32mf2x7_tu_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32mf2x8_ta )?} 1 } } */
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32mf2x8_ta_vl31 )?} 1 } } */
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32mf2x8_tu )?} 1 } } */
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu_vl31 (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32mf2x8_tu_vl31 )?} 1 } } */
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m1x2_ta )?} 1 } } */
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m1x2_ta_vl31 )?} 1 } } */
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m1x2_tu )?} 1 } } */
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu_vl31 (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m1x2_tu_vl31 )?} 1 } } */
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m1x3_ta )?} 1 } } */
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m1x3_ta_vl31 )?} 1 } } */
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m1x3_tu )?} 1 } } */
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu_vl31 (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m1x3_tu_vl31 )?} 1 } } */
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m1x4_ta )?} 1 } } */
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m1x4_ta_vl31 )?} 1 } } */
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m1x4_tu )?} 1 } } */
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu_vl31 (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m1x4_tu_vl31 )?} 1 } } */
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32m1x5_ta )?} 1 } } */
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32m1x5_ta_vl31 )?} 1 } } */
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32m1x5_tu )?} 1 } } */
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu_vl31 (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_u32m1x5_tu_vl31 )?} 1 } } */
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32m1x6_ta )?} 1 } } */
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32m1x6_ta_vl31 )?} 1 } } */
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32m1x6_tu )?} 1 } } */
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu_vl31 (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_u32m1x6_tu_vl31 )?} 1 } } */
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32m1x7_ta )?} 1 } } */
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32m1x7_ta_vl31 )?} 1 } } */
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32m1x7_tu )?} 1 } } */
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu_vl31 (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_u32m1x7_tu_vl31 )?} 1 } } */
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32m1x8_ta )?} 1 } } */
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32m1x8_ta_vl31 )?} 1 } } */
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32m1x8_tu )?} 1 } } */
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu_vl31 (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_u32m1x8_tu_vl31 )?} 1 } } */
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m2x2_ta )?} 1 } } */
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m2x2_ta_vl31 )?} 1 } } */
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m2x2_tu )?} 1 } } */
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu_vl31 (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m2x2_tu_vl31 )?} 1 } } */
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m2x3_ta )?} 1 } } */
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m2x3_ta_vl31 )?} 1 } } */
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m2x3_tu )?} 1 } } */
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu_vl31 (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_u32m2x3_tu_vl31 )?} 1 } } */
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m2x4_ta )?} 1 } } */
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m2x4_ta_vl31 )?} 1 } } */
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m2x4_tu )?} 1 } } */
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu_vl31 (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_u32m2x4_tu_vl31 )?} 1 } } */
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m4x2_ta )?} 1 } } */
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m4x2_ta_vl31 )?} 1 } } */
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m4x2_tu )?} 1 } } */
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu_vl31 (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_u32m4x2_tu_vl31 )?} 1 } } */
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m1x2_ta )?} 1 } } */
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m1x2_ta_vl31 )?} 1 } } */
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m1x2_tu )?} 1 } } */
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu_vl31 (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m1x2_tu_vl31 )?} 1 } } */
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m1x3_ta )?} 1 } } */
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m1x3_ta_vl31 )?} 1 } } */
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m1x3_tu )?} 1 } } */
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu_vl31 (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m1x3_tu_vl31 )?} 1 } } */
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m1x4_ta )?} 1 } } */
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m1x4_ta_vl31 )?} 1 } } */
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m1x4_tu )?} 1 } } */
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu_vl31 (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m1x4_tu_vl31 )?} 1 } } */
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_u64m1x5_ta )?} 1 } } */
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_u64m1x5_ta_vl31 )?} 1 } } */
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_u64m1x5_tu )?} 1 } } */
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu_vl31 (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_u64m1x5_tu_vl31 )?} 1 } } */
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_u64m1x6_ta )?} 1 } } */
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_u64m1x6_ta_vl31 )?} 1 } } */
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_u64m1x6_tu )?} 1 } } */
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu_vl31 (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_u64m1x6_tu_vl31 )?} 1 } } */
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_u64m1x7_ta )?} 1 } } */
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_u64m1x7_ta_vl31 )?} 1 } } */
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_u64m1x7_tu )?} 1 } } */
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu_vl31 (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_u64m1x7_tu_vl31 )?} 1 } } */
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_u64m1x8_ta )?} 1 } } */
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_u64m1x8_ta_vl31 )?} 1 } } */
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_u64m1x8_tu )?} 1 } } */
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu_vl31 (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_u64m1x8_tu_vl31 )?} 1 } } */
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m2x2_ta )?} 1 } } */
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m2x2_ta_vl31 )?} 1 } } */
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m2x2_tu )?} 1 } } */
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu_vl31 (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m2x2_tu_vl31 )?} 1 } } */
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m2x3_ta )?} 1 } } */
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m2x3_ta_vl31 )?} 1 } } */
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m2x3_tu )?} 1 } } */
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu_vl31 (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_u64m2x3_tu_vl31 )?} 1 } } */
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m2x4_ta )?} 1 } } */
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m2x4_ta_vl31 )?} 1 } } */
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m2x4_tu )?} 1 } } */
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu_vl31 (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_u64m2x4_tu_vl31 )?} 1 } } */
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m4x2_ta )?} 1 } } */
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m4x2_ta_vl31 )?} 1 } } */
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m4x2_tu )?} 1 } } */
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu_vl31 (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_u64m4x2_tu_vl31 )?} 1 } } */
