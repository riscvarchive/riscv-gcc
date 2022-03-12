
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8_t
test_vlse8_v_u8mf8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf8_ta )?} 1 } } */
vuint8mf8_t
test_vlse8_v_u8mf8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf8_ta_vl31 )?} 1 } } */
vuint8mf8_t
test_vlse8_v_u8mf8_tu (vuint8mf8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf8_tu )?} 1 } } */
vuint8mf8_t
test_vlse8_v_u8mf8_tu_vl31 (vuint8mf8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf8_tu_vl31 )?} 1 } } */
vuint8mf4_t
test_vlse8_v_u8mf4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf4_ta )?} 1 } } */
vuint8mf4_t
test_vlse8_v_u8mf4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf4_ta_vl31 )?} 1 } } */
vuint8mf4_t
test_vlse8_v_u8mf4_tu (vuint8mf4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf4_tu )?} 1 } } */
vuint8mf4_t
test_vlse8_v_u8mf4_tu_vl31 (vuint8mf4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf4_tu_vl31 )?} 1 } } */
vuint8mf2_t
test_vlse8_v_u8mf2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf2_ta )?} 1 } } */
vuint8mf2_t
test_vlse8_v_u8mf2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf2_ta_vl31 )?} 1 } } */
vuint8mf2_t
test_vlse8_v_u8mf2_tu (vuint8mf2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8mf2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf2_tu )?} 1 } } */
vuint8mf2_t
test_vlse8_v_u8mf2_tu_vl31 (vuint8mf2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8mf2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8mf2_tu_vl31 )?} 1 } } */
vuint8m1_t
test_vlse8_v_u8m1_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m1_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m1_ta )?} 1 } } */
vuint8m1_t
test_vlse8_v_u8m1_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m1_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m1_ta_vl31 )?} 1 } } */
vuint8m1_t
test_vlse8_v_u8m1_tu (vuint8m1_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m1_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m1_tu )?} 1 } } */
vuint8m1_t
test_vlse8_v_u8m1_tu_vl31 (vuint8m1_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m1_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m1_tu_vl31 )?} 1 } } */
vuint8m2_t
test_vlse8_v_u8m2_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m2_ta )?} 1 } } */
vuint8m2_t
test_vlse8_v_u8m2_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m2_ta_vl31 )?} 1 } } */
vuint8m2_t
test_vlse8_v_u8m2_tu (vuint8m2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m2_tu )?} 1 } } */
vuint8m2_t
test_vlse8_v_u8m2_tu_vl31 (vuint8m2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m2_tu_vl31 )?} 1 } } */
vuint8m4_t
test_vlse8_v_u8m4_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m4_ta )?} 1 } } */
vuint8m4_t
test_vlse8_v_u8m4_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m4_ta_vl31 )?} 1 } } */
vuint8m4_t
test_vlse8_v_u8m4_tu (vuint8m4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m4_tu )?} 1 } } */
vuint8m4_t
test_vlse8_v_u8m4_tu_vl31 (vuint8m4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m4_tu_vl31 )?} 1 } } */
vuint8m8_t
test_vlse8_v_u8m8_ta (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m8_ta )?} 1 } } */
vuint8m8_t
test_vlse8_v_u8m8_ta_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m8_ta_vl31 )?} 1 } } */
vuint8m8_t
test_vlse8_v_u8m8_tu (vuint8m8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_u8m8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m8_tu )?} 1 } } */
vuint8m8_t
test_vlse8_v_u8m8_tu_vl31 (vuint8m8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_u8m8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse8_v_u8m8_tu_vl31 )?} 1 } } */
vuint16mf4_t
test_vlse16_v_u16mf4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16mf4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf4_ta )?} 1 } } */
vuint16mf4_t
test_vlse16_v_u16mf4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16mf4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf4_ta_vl31 )?} 1 } } */
vuint16mf4_t
test_vlse16_v_u16mf4_tu (vuint16mf4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16mf4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf4_tu )?} 1 } } */
vuint16mf4_t
test_vlse16_v_u16mf4_tu_vl31 (vuint16mf4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16mf4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf4_tu_vl31 )?} 1 } } */
vuint16mf2_t
test_vlse16_v_u16mf2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16mf2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf2_ta )?} 1 } } */
vuint16mf2_t
test_vlse16_v_u16mf2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16mf2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf2_ta_vl31 )?} 1 } } */
vuint16mf2_t
test_vlse16_v_u16mf2_tu (vuint16mf2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16mf2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf2_tu )?} 1 } } */
vuint16mf2_t
test_vlse16_v_u16mf2_tu_vl31 (vuint16mf2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16mf2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16mf2_tu_vl31 )?} 1 } } */
vuint16m1_t
test_vlse16_v_u16m1_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m1_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m1_ta )?} 1 } } */
vuint16m1_t
test_vlse16_v_u16m1_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m1_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m1_ta_vl31 )?} 1 } } */
vuint16m1_t
test_vlse16_v_u16m1_tu (vuint16m1_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m1_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m1_tu )?} 1 } } */
vuint16m1_t
test_vlse16_v_u16m1_tu_vl31 (vuint16m1_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m1_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m1_tu_vl31 )?} 1 } } */
vuint16m2_t
test_vlse16_v_u16m2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m2_ta )?} 1 } } */
vuint16m2_t
test_vlse16_v_u16m2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m2_ta_vl31 )?} 1 } } */
vuint16m2_t
test_vlse16_v_u16m2_tu (vuint16m2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m2_tu )?} 1 } } */
vuint16m2_t
test_vlse16_v_u16m2_tu_vl31 (vuint16m2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m2_tu_vl31 )?} 1 } } */
vuint16m4_t
test_vlse16_v_u16m4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m4_ta )?} 1 } } */
vuint16m4_t
test_vlse16_v_u16m4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m4_ta_vl31 )?} 1 } } */
vuint16m4_t
test_vlse16_v_u16m4_tu (vuint16m4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m4_tu )?} 1 } } */
vuint16m4_t
test_vlse16_v_u16m4_tu_vl31 (vuint16m4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m4_tu_vl31 )?} 1 } } */
vuint16m8_t
test_vlse16_v_u16m8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m8_ta )?} 1 } } */
vuint16m8_t
test_vlse16_v_u16m8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m8_ta_vl31 )?} 1 } } */
vuint16m8_t
test_vlse16_v_u16m8_tu (vuint16m8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_u16m8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m8_tu )?} 1 } } */
vuint16m8_t
test_vlse16_v_u16m8_tu_vl31 (vuint16m8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_u16m8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse16_v_u16m8_tu_vl31 )?} 1 } } */
vuint32mf2_t
test_vlse32_v_u32mf2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32mf2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32mf2_ta )?} 1 } } */
vuint32mf2_t
test_vlse32_v_u32mf2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32mf2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32mf2_ta_vl31 )?} 1 } } */
vuint32mf2_t
test_vlse32_v_u32mf2_tu (vuint32mf2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32mf2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32mf2_tu )?} 1 } } */
vuint32mf2_t
test_vlse32_v_u32mf2_tu_vl31 (vuint32mf2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32mf2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32mf2_tu_vl31 )?} 1 } } */
vuint32m1_t
test_vlse32_v_u32m1_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m1_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m1_ta )?} 1 } } */
vuint32m1_t
test_vlse32_v_u32m1_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m1_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m1_ta_vl31 )?} 1 } } */
vuint32m1_t
test_vlse32_v_u32m1_tu (vuint32m1_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m1_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m1_tu )?} 1 } } */
vuint32m1_t
test_vlse32_v_u32m1_tu_vl31 (vuint32m1_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m1_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m1_tu_vl31 )?} 1 } } */
vuint32m2_t
test_vlse32_v_u32m2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m2_ta )?} 1 } } */
vuint32m2_t
test_vlse32_v_u32m2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m2_ta_vl31 )?} 1 } } */
vuint32m2_t
test_vlse32_v_u32m2_tu (vuint32m2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m2_tu )?} 1 } } */
vuint32m2_t
test_vlse32_v_u32m2_tu_vl31 (vuint32m2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m2_tu_vl31 )?} 1 } } */
vuint32m4_t
test_vlse32_v_u32m4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m4_ta )?} 1 } } */
vuint32m4_t
test_vlse32_v_u32m4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m4_ta_vl31 )?} 1 } } */
vuint32m4_t
test_vlse32_v_u32m4_tu (vuint32m4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m4_tu )?} 1 } } */
vuint32m4_t
test_vlse32_v_u32m4_tu_vl31 (vuint32m4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m4_tu_vl31 )?} 1 } } */
vuint32m8_t
test_vlse32_v_u32m8_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m8_ta )?} 1 } } */
vuint32m8_t
test_vlse32_v_u32m8_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m8_ta_vl31 )?} 1 } } */
vuint32m8_t
test_vlse32_v_u32m8_tu (vuint32m8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_u32m8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m8_tu )?} 1 } } */
vuint32m8_t
test_vlse32_v_u32m8_tu_vl31 (vuint32m8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_u32m8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse32_v_u32m8_tu_vl31 )?} 1 } } */
vuint64m1_t
test_vlse64_v_u64m1_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m1_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m1_ta )?} 1 } } */
vuint64m1_t
test_vlse64_v_u64m1_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m1_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m1_ta_vl31 )?} 1 } } */
vuint64m1_t
test_vlse64_v_u64m1_tu (vuint64m1_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m1_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m1_tu )?} 1 } } */
vuint64m1_t
test_vlse64_v_u64m1_tu_vl31 (vuint64m1_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m1_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m1_tu_vl31 )?} 1 } } */
vuint64m2_t
test_vlse64_v_u64m2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m2_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m2_ta )?} 1 } } */
vuint64m2_t
test_vlse64_v_u64m2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m2_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m2_ta_vl31 )?} 1 } } */
vuint64m2_t
test_vlse64_v_u64m2_tu (vuint64m2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m2_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m2_tu )?} 1 } } */
vuint64m2_t
test_vlse64_v_u64m2_tu_vl31 (vuint64m2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m2_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m2_tu_vl31 )?} 1 } } */
vuint64m4_t
test_vlse64_v_u64m4_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m4_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m4_ta )?} 1 } } */
vuint64m4_t
test_vlse64_v_u64m4_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m4_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m4_ta_vl31 )?} 1 } } */
vuint64m4_t
test_vlse64_v_u64m4_tu (vuint64m4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m4_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m4_tu )?} 1 } } */
vuint64m4_t
test_vlse64_v_u64m4_tu_vl31 (vuint64m4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m4_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m4_tu_vl31 )?} 1 } } */
vuint64m8_t
test_vlse64_v_u64m8_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m8_ta (base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m8_ta )?} 1 } } */
vuint64m8_t
test_vlse64_v_u64m8_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m8_ta (base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m8_ta_vl31 )?} 1 } } */
vuint64m8_t
test_vlse64_v_u64m8_tu (vuint64m8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_u64m8_tu (dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m8_tu )?} 1 } } */
vuint64m8_t
test_vlse64_v_u64m8_tu_vl31 (vuint64m8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_u64m8_tu (dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlse64_v_u64m8_tu_vl31 )?} 1 } } */
