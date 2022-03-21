
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16mf4x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf4x2_ta )?} 1 } } */
vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf4x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf4x2_ta_vl31 )?} 1 } } */
vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16mf4x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf4x2_tu )?} 1 } } */
vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_tu_vl31 (vfloat16mf4x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf4x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf4x2_tu_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16mf4x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf4x3_ta )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf4x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf4x3_ta_vl31 )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16mf4x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf4x3_tu )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_tu_vl31 (vfloat16mf4x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf4x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf4x3_tu_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16mf4x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf4x4_ta )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf4x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf4x4_ta_vl31 )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16mf4x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf4x4_tu )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_tu_vl31 (vfloat16mf4x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf4x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf4x4_tu_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16mf4x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf4x5_ta )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf4x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf4x5_ta_vl31 )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16mf4x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf4x5_tu )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_tu_vl31 (vfloat16mf4x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf4x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf4x5_tu_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16mf4x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf4x6_ta )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf4x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf4x6_ta_vl31 )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16mf4x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf4x6_tu )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_tu_vl31 (vfloat16mf4x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf4x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf4x6_tu_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16mf4x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf4x7_ta )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf4x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf4x7_ta_vl31 )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16mf4x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf4x7_tu )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_tu_vl31 (vfloat16mf4x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf4x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf4x7_tu_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16mf4x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf4x8_ta )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf4x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf4x8_ta_vl31 )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16mf4x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf4x8_tu )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_tu_vl31 (vfloat16mf4x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf4x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf4x8_tu_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16mf2x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf2x2_ta )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf2x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf2x2_ta_vl31 )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16mf2x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf2x2_tu )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_tu_vl31 (vfloat16mf2x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf2x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf2x2_tu_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16mf2x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf2x3_ta )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf2x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf2x3_ta_vl31 )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16mf2x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf2x3_tu )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_tu_vl31 (vfloat16mf2x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf2x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf2x3_tu_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16mf2x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf2x4_ta )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf2x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf2x4_ta_vl31 )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16mf2x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf2x4_tu )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_tu_vl31 (vfloat16mf2x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf2x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf2x4_tu_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16mf2x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf2x5_ta )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf2x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf2x5_ta_vl31 )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16mf2x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf2x5_tu )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_tu_vl31 (vfloat16mf2x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf2x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf2x5_tu_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16mf2x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf2x6_ta )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf2x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf2x6_ta_vl31 )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16mf2x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf2x6_tu )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_tu_vl31 (vfloat16mf2x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf2x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf2x6_tu_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16mf2x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf2x7_ta )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf2x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf2x7_ta_vl31 )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16mf2x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf2x7_tu )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_tu_vl31 (vfloat16mf2x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf2x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf2x7_tu_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16mf2x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf2x8_ta )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf2x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf2x8_ta_vl31 )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16mf2x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf2x8_tu )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_tu_vl31 (vfloat16mf2x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf2x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf2x8_tu_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m1x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m1x2_ta )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m1x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m1x2_ta_vl31 )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m1x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m1x2_tu )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_tu_vl31 (vfloat16m1x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m1x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m1x2_tu_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16m1x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m1x3_ta )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m1x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m1x3_ta_vl31 )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16m1x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m1x3_tu )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_tu_vl31 (vfloat16m1x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m1x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m1x3_tu_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16m1x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m1x4_ta )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m1x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m1x4_ta_vl31 )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16m1x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m1x4_tu )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_tu_vl31 (vfloat16m1x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m1x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m1x4_tu_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16m1x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16m1x5_ta )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16m1x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16m1x5_ta_vl31 )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_f16m1x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16m1x5_tu )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_tu_vl31 (vfloat16m1x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16m1x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16m1x5_tu_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16m1x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16m1x6_ta )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16m1x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16m1x6_ta_vl31 )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_f16m1x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16m1x6_tu )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_tu_vl31 (vfloat16m1x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16m1x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16m1x6_tu_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16m1x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16m1x7_ta )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16m1x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16m1x7_ta_vl31 )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_f16m1x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16m1x7_tu )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_tu_vl31 (vfloat16m1x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16m1x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16m1x7_tu_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16m1x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16m1x8_ta )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16m1x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16m1x8_ta_vl31 )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_f16m1x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16m1x8_tu )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_tu_vl31 (vfloat16m1x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16m1x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16m1x8_tu_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m2x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m2x2_ta )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m2x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m2x2_ta_vl31 )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m2x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m2x2_tu )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_tu_vl31 (vfloat16m2x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m2x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m2x2_tu_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16m2x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m2x3_ta )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m2x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m2x3_ta_vl31 )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_f16m2x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m2x3_tu )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_tu_vl31 (vfloat16m2x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m2x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m2x3_tu_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16m2x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m2x4_ta )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m2x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m2x4_ta_vl31 )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_f16m2x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m2x4_tu )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_tu_vl31 (vfloat16m2x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m2x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m2x4_tu_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m4x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m4x2_ta )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m4x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m4x2_ta_vl31 )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_tu (vfloat16m4x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_f16m4x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m4x2_tu )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_tu_vl31 (vfloat16m4x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m4x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m4x2_tu_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32mf2x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32mf2x2_ta )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32mf2x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32mf2x2_ta_vl31 )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32mf2x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32mf2x2_tu )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_tu_vl31 (vfloat32mf2x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32mf2x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32mf2x2_tu_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32mf2x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32mf2x3_ta )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32mf2x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32mf2x3_ta_vl31 )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32mf2x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32mf2x3_tu )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_tu_vl31 (vfloat32mf2x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32mf2x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32mf2x3_tu_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32mf2x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32mf2x4_ta )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32mf2x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32mf2x4_ta_vl31 )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32mf2x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32mf2x4_tu )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_tu_vl31 (vfloat32mf2x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32mf2x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32mf2x4_tu_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_f32mf2x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32mf2x5_ta )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32mf2x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32mf2x5_ta_vl31 )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_f32mf2x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32mf2x5_tu )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_tu_vl31 (vfloat32mf2x5_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32mf2x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32mf2x5_tu_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_f32mf2x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32mf2x6_ta )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32mf2x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32mf2x6_ta_vl31 )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_f32mf2x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32mf2x6_tu )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_tu_vl31 (vfloat32mf2x6_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32mf2x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32mf2x6_tu_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_f32mf2x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32mf2x7_ta )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32mf2x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32mf2x7_ta_vl31 )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_f32mf2x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32mf2x7_tu )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_tu_vl31 (vfloat32mf2x7_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32mf2x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32mf2x7_tu_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_f32mf2x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32mf2x8_ta )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32mf2x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32mf2x8_ta_vl31 )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_f32mf2x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32mf2x8_tu )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_tu_vl31 (vfloat32mf2x8_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32mf2x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32mf2x8_tu_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m1x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m1x2_ta )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m1x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m1x2_ta_vl31 )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m1x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m1x2_tu )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_tu_vl31 (vfloat32m1x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m1x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m1x2_tu_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32m1x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m1x3_ta )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m1x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m1x3_ta_vl31 )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32m1x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m1x3_tu )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_tu_vl31 (vfloat32m1x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m1x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m1x3_tu_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32m1x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m1x4_ta )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m1x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m1x4_ta_vl31 )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32m1x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m1x4_tu )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_tu_vl31 (vfloat32m1x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m1x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m1x4_tu_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_f32m1x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32m1x5_ta )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32m1x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32m1x5_ta_vl31 )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_f32m1x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32m1x5_tu )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_tu_vl31 (vfloat32m1x5_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32m1x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32m1x5_tu_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_f32m1x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32m1x6_ta )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32m1x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32m1x6_ta_vl31 )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_f32m1x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32m1x6_tu )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_tu_vl31 (vfloat32m1x6_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32m1x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32m1x6_tu_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_f32m1x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32m1x7_ta )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32m1x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32m1x7_ta_vl31 )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_f32m1x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32m1x7_tu )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_tu_vl31 (vfloat32m1x7_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32m1x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32m1x7_tu_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_f32m1x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32m1x8_ta )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32m1x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32m1x8_ta_vl31 )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_f32m1x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32m1x8_tu )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_tu_vl31 (vfloat32m1x8_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32m1x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32m1x8_tu_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m2x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m2x2_ta )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m2x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m2x2_ta_vl31 )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m2x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m2x2_tu )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_tu_vl31 (vfloat32m2x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m2x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m2x2_tu_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32m2x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m2x3_ta )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m2x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m2x3_ta_vl31 )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_f32m2x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m2x3_tu )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_tu_vl31 (vfloat32m2x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m2x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m2x3_tu_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32m2x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m2x4_ta )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m2x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m2x4_ta_vl31 )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_f32m2x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m2x4_tu )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_tu_vl31 (vfloat32m2x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m2x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m2x4_tu_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m4x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m4x2_ta )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m4x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m4x2_ta_vl31 )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_f32m4x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m4x2_tu )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_tu_vl31 (vfloat32m4x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m4x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m4x2_tu_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m1x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m1x2_ta )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m1x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m1x2_ta_vl31 )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m1x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m1x2_tu )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_tu_vl31 (vfloat64m1x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m1x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m1x2_tu_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_f64m1x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m1x3_ta )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m1x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m1x3_ta_vl31 )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_f64m1x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m1x3_tu )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_tu_vl31 (vfloat64m1x3_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m1x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m1x3_tu_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_f64m1x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m1x4_ta )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m1x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m1x4_ta_vl31 )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_f64m1x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m1x4_tu )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_tu_vl31 (vfloat64m1x4_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m1x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m1x4_tu_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_v_f64m1x5_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_f64m1x5_ta )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_f64m1x5_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_f64m1x5_ta_vl31 )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_v_f64m1x5_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_f64m1x5_tu )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_tu_vl31 (vfloat64m1x5_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_f64m1x5_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_f64m1x5_tu_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_v_f64m1x6_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_f64m1x6_ta )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_f64m1x6_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_f64m1x6_ta_vl31 )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_v_f64m1x6_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_f64m1x6_tu )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_tu_vl31 (vfloat64m1x6_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_f64m1x6_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_f64m1x6_tu_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_v_f64m1x7_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_f64m1x7_ta )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_f64m1x7_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_f64m1x7_ta_vl31 )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_v_f64m1x7_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_f64m1x7_tu )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_tu_vl31 (vfloat64m1x7_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_f64m1x7_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_f64m1x7_tu_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_v_f64m1x8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_f64m1x8_ta )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_f64m1x8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_f64m1x8_ta_vl31 )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_v_f64m1x8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_f64m1x8_tu )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_tu_vl31 (vfloat64m1x8_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_f64m1x8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_f64m1x8_tu_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m2x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m2x2_ta )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m2x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m2x2_ta_vl31 )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m2x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m2x2_tu )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_tu_vl31 (vfloat64m2x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m2x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m2x2_tu_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_f64m2x3_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m2x3_ta )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m2x3_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m2x3_ta_vl31 )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_f64m2x3_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m2x3_tu )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_tu_vl31 (vfloat64m2x3_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m2x3_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m2x3_tu_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_f64m2x4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m2x4_ta )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m2x4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m2x4_ta_vl31 )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_f64m2x4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m2x4_tu )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_tu_vl31 (vfloat64m2x4_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m2x4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m2x4_tu_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m4x2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m4x2_ta )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m4x2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m4x2_ta_vl31 )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_f64m4x2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m4x2_tu )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_tu_vl31 (vfloat64m4x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m4x2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m4x2_tu_vl31 )?} 1 } } */
