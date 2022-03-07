
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16mf4x2_ta_vl32 )?} 1 } } */
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tu_vl32 (vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16mf4x2_tu_vl32 )?} 1 } } */
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16mf4x3_ta_vl32 )?} 1 } } */
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tu_vl32 (vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16mf4x3_tu_vl32 )?} 1 } } */
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16mf4x4_ta_vl32 )?} 1 } } */
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tu_vl32 (vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16mf4x4_tu_vl32 )?} 1 } } */
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16mf4x5_ta_vl32 )?} 1 } } */
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tu_vl32 (vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16mf4x5_tu_vl32 )?} 1 } } */
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16mf4x6_ta_vl32 )?} 1 } } */
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tu_vl32 (vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16mf4x6_tu_vl32 )?} 1 } } */
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16mf4x7_ta_vl32 )?} 1 } } */
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tu_vl32 (vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16mf4x7_tu_vl32 )?} 1 } } */
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16mf4x8_ta_vl32 )?} 1 } } */
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tu_vl32 (vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16mf4x8_tu_vl32 )?} 1 } } */
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16mf2x2_ta_vl32 )?} 1 } } */
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tu_vl32 (vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16mf2x2_tu_vl32 )?} 1 } } */
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16mf2x3_ta_vl32 )?} 1 } } */
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tu_vl32 (vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16mf2x3_tu_vl32 )?} 1 } } */
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16mf2x4_ta_vl32 )?} 1 } } */
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tu_vl32 (vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16mf2x4_tu_vl32 )?} 1 } } */
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16mf2x5_ta_vl32 )?} 1 } } */
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tu_vl32 (vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16mf2x5_tu_vl32 )?} 1 } } */
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16mf2x6_ta_vl32 )?} 1 } } */
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tu_vl32 (vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16mf2x6_tu_vl32 )?} 1 } } */
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16mf2x7_ta_vl32 )?} 1 } } */
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tu_vl32 (vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16mf2x7_tu_vl32 )?} 1 } } */
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16mf2x8_ta_vl32 )?} 1 } } */
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tu_vl32 (vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16mf2x8_tu_vl32 )?} 1 } } */
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m1x2_ta_vl32 )?} 1 } } */
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tu_vl32 (vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m1x2_tu_vl32 )?} 1 } } */
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16m1x3_ta_vl32 )?} 1 } } */
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tu_vl32 (vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16m1x3_tu_vl32 )?} 1 } } */
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16m1x4_ta_vl32 )?} 1 } } */
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tu_vl32 (vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16m1x4_tu_vl32 )?} 1 } } */
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16m1x5_ta_vl32 )?} 1 } } */
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tu_vl32 (vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e16_v_f16m1x5_tu_vl32 )?} 1 } } */
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16m1x6_ta_vl32 )?} 1 } } */
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tu_vl32 (vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e16_v_f16m1x6_tu_vl32 )?} 1 } } */
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16m1x7_ta_vl32 )?} 1 } } */
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tu_vl32 (vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e16_v_f16m1x7_tu_vl32 )?} 1 } } */
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16m1x8_ta_vl32 )?} 1 } } */
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tu_vl32 (vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e16_v_f16m1x8_tu_vl32 )?} 1 } } */
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m2x2_ta_vl32 )?} 1 } } */
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tu_vl32 (vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m2x2_tu_vl32 )?} 1 } } */
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16m2x3_ta_vl32 )?} 1 } } */
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tu_vl32 (vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e16_v_f16m2x3_tu_vl32 )?} 1 } } */
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16m2x4_ta_vl32 )?} 1 } } */
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tu_vl32 (vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e16_v_f16m2x4_tu_vl32 )?} 1 } } */
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m4x2_ta_vl32 )?} 1 } } */
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tu_vl32 (vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e16_v_f16m4x2_tu_vl32 )?} 1 } } */
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32mf2x2_ta_vl32 )?} 1 } } */
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tu_vl32 (vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32mf2x2_tu_vl32 )?} 1 } } */
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32mf2x3_ta_vl32 )?} 1 } } */
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tu_vl32 (vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32mf2x3_tu_vl32 )?} 1 } } */
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32mf2x4_ta_vl32 )?} 1 } } */
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tu_vl32 (vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32mf2x4_tu_vl32 )?} 1 } } */
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_f32mf2x5_ta_vl32 )?} 1 } } */
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tu_vl32 (vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_f32mf2x5_tu_vl32 )?} 1 } } */
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_f32mf2x6_ta_vl32 )?} 1 } } */
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tu_vl32 (vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_f32mf2x6_tu_vl32 )?} 1 } } */
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_f32mf2x7_ta_vl32 )?} 1 } } */
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tu_vl32 (vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_f32mf2x7_tu_vl32 )?} 1 } } */
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_f32mf2x8_ta_vl32 )?} 1 } } */
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tu_vl32 (vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_f32mf2x8_tu_vl32 )?} 1 } } */
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m1x2_ta_vl32 )?} 1 } } */
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tu_vl32 (vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m1x2_tu_vl32 )?} 1 } } */
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32m1x3_ta_vl32 )?} 1 } } */
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tu_vl32 (vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32m1x3_tu_vl32 )?} 1 } } */
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32m1x4_ta_vl32 )?} 1 } } */
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tu_vl32 (vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32m1x4_tu_vl32 )?} 1 } } */
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_f32m1x5_ta_vl32 )?} 1 } } */
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tu_vl32 (vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e32_v_f32m1x5_tu_vl32 )?} 1 } } */
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_f32m1x6_ta_vl32 )?} 1 } } */
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tu_vl32 (vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e32_v_f32m1x6_tu_vl32 )?} 1 } } */
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_f32m1x7_ta_vl32 )?} 1 } } */
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tu_vl32 (vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e32_v_f32m1x7_tu_vl32 )?} 1 } } */
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_f32m1x8_ta_vl32 )?} 1 } } */
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tu_vl32 (vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e32_v_f32m1x8_tu_vl32 )?} 1 } } */
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m2x2_ta_vl32 )?} 1 } } */
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tu_vl32 (vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m2x2_tu_vl32 )?} 1 } } */
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32m2x3_ta_vl32 )?} 1 } } */
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tu_vl32 (vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e32_v_f32m2x3_tu_vl32 )?} 1 } } */
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32m2x4_ta_vl32 )?} 1 } } */
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tu_vl32 (vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e32_v_f32m2x4_tu_vl32 )?} 1 } } */
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m4x2_ta_vl32 )?} 1 } } */
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tu_vl32 (vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e32_v_f32m4x2_tu_vl32 )?} 1 } } */
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m1x2_ta_vl32 )?} 1 } } */
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tu_vl32 (vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m1x2_tu_vl32 )?} 1 } } */
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_f64m1x3_ta_vl32 )?} 1 } } */
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tu_vl32 (vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_f64m1x3_tu_vl32 )?} 1 } } */
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_f64m1x4_ta_vl32 )?} 1 } } */
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tu_vl32 (vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_f64m1x4_tu_vl32 )?} 1 } } */
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_f64m1x5_ta_vl32 )?} 1 } } */
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tu_vl32 (vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg5e64_v_f64m1x5_tu_vl32 )?} 1 } } */
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_f64m1x6_ta_vl32 )?} 1 } } */
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tu_vl32 (vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg6e64_v_f64m1x6_tu_vl32 )?} 1 } } */
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_f64m1x7_ta_vl32 )?} 1 } } */
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tu_vl32 (vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg7e64_v_f64m1x7_tu_vl32 )?} 1 } } */
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_f64m1x8_ta_vl32 )?} 1 } } */
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tu_vl32 (vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg8e64_v_f64m1x8_tu_vl32 )?} 1 } } */
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m2x2_ta_vl32 )?} 1 } } */
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tu_vl32 (vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m2x2_tu_vl32 )?} 1 } } */
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_f64m2x3_ta_vl32 )?} 1 } } */
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tu_vl32 (vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg3e64_v_f64m2x3_tu_vl32 )?} 1 } } */
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_f64m2x4_ta_vl32 )?} 1 } } */
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tu_vl32 (vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg4e64_v_f64m2x4_tu_vl32 )?} 1 } } */
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_ta (base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m4x2_ta_vl32 )?} 1 } } */
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tu_vl32 (vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tu (dest, base, bstride, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlsseg.e..?\.v).)*\s+vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vlsseg2e64_v_f64m4x2_tu_vl32 )?} 1 } } */
