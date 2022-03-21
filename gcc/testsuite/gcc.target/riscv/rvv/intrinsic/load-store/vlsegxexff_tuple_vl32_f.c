
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf4x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf4x2_vl32 )?} 1 } } */
vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_m_vl32 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf4x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_f16mf4x2_m_vl32 )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf4x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf4x3_vl32 )?} 1 } } */
vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_m_vl32 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf4x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_f16mf4x3_m_vl32 )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf4x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf4x4_vl32 )?} 1 } } */
vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_m_vl32 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf4x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_f16mf4x4_m_vl32 )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf4x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf4x5_vl32 )?} 1 } } */
vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_m_vl32 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf4x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_f16mf4x5_m_vl32 )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf4x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf4x6_vl32 )?} 1 } } */
vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_m_vl32 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf4x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_f16mf4x6_m_vl32 )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf4x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf4x7_vl32 )?} 1 } } */
vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_m_vl32 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf4x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_f16mf4x7_m_vl32 )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf4x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf4x8_vl32 )?} 1 } } */
vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_m_vl32 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf4x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_f16mf4x8_m_vl32 )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf2x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16mf2x2_vl32 )?} 1 } } */
vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_m_vl32 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16mf2x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_f16mf2x2_m_vl32 )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf2x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16mf2x3_vl32 )?} 1 } } */
vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_m_vl32 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16mf2x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_f16mf2x3_m_vl32 )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf2x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16mf2x4_vl32 )?} 1 } } */
vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_m_vl32 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16mf2x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_f16mf2x4_m_vl32 )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf2x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16mf2x5_vl32 )?} 1 } } */
vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_m_vl32 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16mf2x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_f16mf2x5_m_vl32 )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf2x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16mf2x6_vl32 )?} 1 } } */
vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_m_vl32 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16mf2x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_f16mf2x6_m_vl32 )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf2x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16mf2x7_vl32 )?} 1 } } */
vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_m_vl32 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16mf2x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_f16mf2x7_m_vl32 )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf2x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16mf2x8_vl32 )?} 1 } } */
vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_m_vl32 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16mf2x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_f16mf2x8_m_vl32 )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m1x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m1x2_vl32 )?} 1 } } */
vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_m_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m1x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_f16m1x2_m_vl32 )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m1x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m1x3_vl32 )?} 1 } } */
vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_m_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m1x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_f16m1x3_m_vl32 )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m1x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m1x4_vl32 )?} 1 } } */
vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_m_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m1x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_f16m1x4_m_vl32 )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16m1x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_f16m1x5_vl32 )?} 1 } } */
vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_m_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_f16m1x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_f16m1x5_m_vl32 )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16m1x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_f16m1x6_vl32 )?} 1 } } */
vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_m_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_f16m1x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_f16m1x6_m_vl32 )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16m1x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_f16m1x7_vl32 )?} 1 } } */
vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_m_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_f16m1x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_f16m1x7_m_vl32 )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16m1x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_f16m1x8_vl32 )?} 1 } } */
vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_m_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_f16m1x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_f16m1x8_m_vl32 )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m2x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m2x2_vl32 )?} 1 } } */
vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_m_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m2x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_f16m2x2_m_vl32 )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m2x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_f16m2x3_vl32 )?} 1 } } */
vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_m_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_f16m2x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_f16m2x3_m_vl32 )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m2x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_f16m2x4_vl32 )?} 1 } } */
vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_m_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_f16m2x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_f16m2x4_m_vl32 )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_vl32 (float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m4x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_f16m4x2_vl32 )?} 1 } } */
vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_m_vl32 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_f16m4x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_f16m4x2_m_vl32 )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32mf2x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32mf2x2_vl32 )?} 1 } } */
vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_m_vl32 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32mf2x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_f32mf2x2_m_vl32 )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32mf2x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32mf2x3_vl32 )?} 1 } } */
vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_m_vl32 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32mf2x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_f32mf2x3_m_vl32 )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32mf2x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32mf2x4_vl32 )?} 1 } } */
vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_m_vl32 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32mf2x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_f32mf2x4_m_vl32 )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32mf2x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32mf2x5_vl32 )?} 1 } } */
vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_m_vl32 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32mf2x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_f32mf2x5_m_vl32 )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32mf2x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32mf2x6_vl32 )?} 1 } } */
vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_m_vl32 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32mf2x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_f32mf2x6_m_vl32 )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32mf2x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32mf2x7_vl32 )?} 1 } } */
vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_m_vl32 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32mf2x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_f32mf2x7_m_vl32 )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32mf2x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32mf2x8_vl32 )?} 1 } } */
vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_m_vl32 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32mf2x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_f32mf2x8_m_vl32 )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m1x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m1x2_vl32 )?} 1 } } */
vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_m_vl32 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m1x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_f32m1x2_m_vl32 )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m1x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m1x3_vl32 )?} 1 } } */
vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_m_vl32 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m1x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_f32m1x3_m_vl32 )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m1x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m1x4_vl32 )?} 1 } } */
vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_m_vl32 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m1x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_f32m1x4_m_vl32 )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32m1x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_f32m1x5_vl32 )?} 1 } } */
vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_m_vl32 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_f32m1x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_f32m1x5_m_vl32 )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32m1x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_f32m1x6_vl32 )?} 1 } } */
vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_m_vl32 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_f32m1x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_f32m1x6_m_vl32 )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32m1x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_f32m1x7_vl32 )?} 1 } } */
vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_m_vl32 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_f32m1x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_f32m1x7_m_vl32 )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32m1x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_f32m1x8_vl32 )?} 1 } } */
vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_m_vl32 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_f32m1x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_f32m1x8_m_vl32 )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m2x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m2x2_vl32 )?} 1 } } */
vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_m_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m2x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_f32m2x2_m_vl32 )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m2x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_f32m2x3_vl32 )?} 1 } } */
vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_m_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_f32m2x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_f32m2x3_m_vl32 )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m2x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_f32m2x4_vl32 )?} 1 } } */
vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_m_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_f32m2x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_f32m2x4_m_vl32 )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_vl32 (float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m4x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_f32m4x2_vl32 )?} 1 } } */
vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_m_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_f32m4x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_f32m4x2_m_vl32 )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m1x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m1x2_vl32 )?} 1 } } */
vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_m_vl32 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m1x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_f64m1x2_m_vl32 )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m1x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m1x3_vl32 )?} 1 } } */
vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_m_vl32 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m1x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_f64m1x3_m_vl32 )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m1x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m1x4_vl32 )?} 1 } } */
vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_m_vl32 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m1x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_f64m1x4_m_vl32 )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_f64m1x5 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_f64m1x5_vl32 )?} 1 } } */
vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_m_vl32 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_f64m1x5_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_f64m1x5_m_vl32 )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_f64m1x6 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_f64m1x6_vl32 )?} 1 } } */
vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_m_vl32 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_f64m1x6_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_f64m1x6_m_vl32 )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_f64m1x7 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_f64m1x7_vl32 )?} 1 } } */
vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_m_vl32 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_f64m1x7_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_f64m1x7_m_vl32 )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_f64m1x8 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_f64m1x8_vl32 )?} 1 } } */
vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_m_vl32 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_f64m1x8_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_f64m1x8_m_vl32 )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m2x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m2x2_vl32 )?} 1 } } */
vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_m_vl32 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m2x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_f64m2x2_m_vl32 )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m2x3 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_f64m2x3_vl32 )?} 1 } } */
vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_m_vl32 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_f64m2x3_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_f64m2x3_m_vl32 )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m2x4 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_f64m2x4_vl32 )?} 1 } } */
vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_m_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_f64m2x4_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_f64m2x4_m_vl32 )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_vl32 (float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m4x2 (base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_f64m4x2_vl32 )?} 1 } } */
vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_m_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_f64m4x2_m (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_f64m4x2_m_vl32 )?} 1 } } */
