
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vint8mf8x2_t
test_vlseg2e8ff_v_i8mf8x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf8x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf8x2 )?} 1 } } */
vint8mf8x2_t
test_vlseg2e8ff_v_i8mf8x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf8x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf8x2_vl31 )?} 1 } } */
vint8mf8x2_t
test_vlseg2e8ff_v_i8mf8x2_m (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf8x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf8x2_m )?} 1 } } */
vint8mf8x2_t
test_vlseg2e8ff_v_i8mf8x2_m_vl31 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf8x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf8x2_m_vl31 )?} 1 } } */
vint8mf8x3_t
test_vlseg3e8ff_v_i8mf8x3 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf8x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf8x3 )?} 1 } } */
vint8mf8x3_t
test_vlseg3e8ff_v_i8mf8x3_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf8x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf8x3_vl31 )?} 1 } } */
vint8mf8x3_t
test_vlseg3e8ff_v_i8mf8x3_m (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf8x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf8x3_m )?} 1 } } */
vint8mf8x3_t
test_vlseg3e8ff_v_i8mf8x3_m_vl31 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf8x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf8x3_m_vl31 )?} 1 } } */
vint8mf8x4_t
test_vlseg4e8ff_v_i8mf8x4 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf8x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf8x4 )?} 1 } } */
vint8mf8x4_t
test_vlseg4e8ff_v_i8mf8x4_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf8x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf8x4_vl31 )?} 1 } } */
vint8mf8x4_t
test_vlseg4e8ff_v_i8mf8x4_m (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf8x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf8x4_m )?} 1 } } */
vint8mf8x4_t
test_vlseg4e8ff_v_i8mf8x4_m_vl31 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf8x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf8x4_m_vl31 )?} 1 } } */
vint8mf8x5_t
test_vlseg5e8ff_v_i8mf8x5 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf8x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf8x5 )?} 1 } } */
vint8mf8x5_t
test_vlseg5e8ff_v_i8mf8x5_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf8x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf8x5_vl31 )?} 1 } } */
vint8mf8x5_t
test_vlseg5e8ff_v_i8mf8x5_m (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf8x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf8x5_m )?} 1 } } */
vint8mf8x5_t
test_vlseg5e8ff_v_i8mf8x5_m_vl31 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf8x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf8x5_m_vl31 )?} 1 } } */
vint8mf8x6_t
test_vlseg6e8ff_v_i8mf8x6 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf8x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf8x6 )?} 1 } } */
vint8mf8x6_t
test_vlseg6e8ff_v_i8mf8x6_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf8x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf8x6_vl31 )?} 1 } } */
vint8mf8x6_t
test_vlseg6e8ff_v_i8mf8x6_m (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf8x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf8x6_m )?} 1 } } */
vint8mf8x6_t
test_vlseg6e8ff_v_i8mf8x6_m_vl31 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf8x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf8x6_m_vl31 )?} 1 } } */
vint8mf8x7_t
test_vlseg7e8ff_v_i8mf8x7 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf8x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf8x7 )?} 1 } } */
vint8mf8x7_t
test_vlseg7e8ff_v_i8mf8x7_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf8x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf8x7_vl31 )?} 1 } } */
vint8mf8x7_t
test_vlseg7e8ff_v_i8mf8x7_m (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf8x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf8x7_m )?} 1 } } */
vint8mf8x7_t
test_vlseg7e8ff_v_i8mf8x7_m_vl31 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf8x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf8x7_m_vl31 )?} 1 } } */
vint8mf8x8_t
test_vlseg8e8ff_v_i8mf8x8 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf8x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf8x8 )?} 1 } } */
vint8mf8x8_t
test_vlseg8e8ff_v_i8mf8x8_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf8x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf8x8_vl31 )?} 1 } } */
vint8mf8x8_t
test_vlseg8e8ff_v_i8mf8x8_m (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf8x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf8x8_m )?} 1 } } */
vint8mf8x8_t
test_vlseg8e8ff_v_i8mf8x8_m_vl31 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf8x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf8x8_m_vl31 )?} 1 } } */
vint8mf4x2_t
test_vlseg2e8ff_v_i8mf4x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf4x2 )?} 1 } } */
vint8mf4x2_t
test_vlseg2e8ff_v_i8mf4x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf4x2_vl31 )?} 1 } } */
vint8mf4x2_t
test_vlseg2e8ff_v_i8mf4x2_m (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf4x2_m )?} 1 } } */
vint8mf4x2_t
test_vlseg2e8ff_v_i8mf4x2_m_vl31 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf4x2_m_vl31 )?} 1 } } */
vint8mf4x3_t
test_vlseg3e8ff_v_i8mf4x3 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf4x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf4x3 )?} 1 } } */
vint8mf4x3_t
test_vlseg3e8ff_v_i8mf4x3_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf4x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf4x3_vl31 )?} 1 } } */
vint8mf4x3_t
test_vlseg3e8ff_v_i8mf4x3_m (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf4x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf4x3_m )?} 1 } } */
vint8mf4x3_t
test_vlseg3e8ff_v_i8mf4x3_m_vl31 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf4x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf4x3_m_vl31 )?} 1 } } */
vint8mf4x4_t
test_vlseg4e8ff_v_i8mf4x4 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf4x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf4x4 )?} 1 } } */
vint8mf4x4_t
test_vlseg4e8ff_v_i8mf4x4_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf4x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf4x4_vl31 )?} 1 } } */
vint8mf4x4_t
test_vlseg4e8ff_v_i8mf4x4_m (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf4x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf4x4_m )?} 1 } } */
vint8mf4x4_t
test_vlseg4e8ff_v_i8mf4x4_m_vl31 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf4x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf4x4_m_vl31 )?} 1 } } */
vint8mf4x5_t
test_vlseg5e8ff_v_i8mf4x5 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf4x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf4x5 )?} 1 } } */
vint8mf4x5_t
test_vlseg5e8ff_v_i8mf4x5_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf4x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf4x5_vl31 )?} 1 } } */
vint8mf4x5_t
test_vlseg5e8ff_v_i8mf4x5_m (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf4x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf4x5_m )?} 1 } } */
vint8mf4x5_t
test_vlseg5e8ff_v_i8mf4x5_m_vl31 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf4x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf4x5_m_vl31 )?} 1 } } */
vint8mf4x6_t
test_vlseg6e8ff_v_i8mf4x6 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf4x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf4x6 )?} 1 } } */
vint8mf4x6_t
test_vlseg6e8ff_v_i8mf4x6_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf4x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf4x6_vl31 )?} 1 } } */
vint8mf4x6_t
test_vlseg6e8ff_v_i8mf4x6_m (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf4x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf4x6_m )?} 1 } } */
vint8mf4x6_t
test_vlseg6e8ff_v_i8mf4x6_m_vl31 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf4x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf4x6_m_vl31 )?} 1 } } */
vint8mf4x7_t
test_vlseg7e8ff_v_i8mf4x7 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf4x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf4x7 )?} 1 } } */
vint8mf4x7_t
test_vlseg7e8ff_v_i8mf4x7_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf4x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf4x7_vl31 )?} 1 } } */
vint8mf4x7_t
test_vlseg7e8ff_v_i8mf4x7_m (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf4x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf4x7_m )?} 1 } } */
vint8mf4x7_t
test_vlseg7e8ff_v_i8mf4x7_m_vl31 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf4x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf4x7_m_vl31 )?} 1 } } */
vint8mf4x8_t
test_vlseg8e8ff_v_i8mf4x8 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf4x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf4x8 )?} 1 } } */
vint8mf4x8_t
test_vlseg8e8ff_v_i8mf4x8_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf4x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf4x8_vl31 )?} 1 } } */
vint8mf4x8_t
test_vlseg8e8ff_v_i8mf4x8_m (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf4x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf4x8_m )?} 1 } } */
vint8mf4x8_t
test_vlseg8e8ff_v_i8mf4x8_m_vl31 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf4x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf4x8_m_vl31 )?} 1 } } */
vint8mf2x2_t
test_vlseg2e8ff_v_i8mf2x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf2x2 )?} 1 } } */
vint8mf2x2_t
test_vlseg2e8ff_v_i8mf2x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8mf2x2_vl31 )?} 1 } } */
vint8mf2x2_t
test_vlseg2e8ff_v_i8mf2x2_m (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8mf2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf2x2_m )?} 1 } } */
vint8mf2x2_t
test_vlseg2e8ff_v_i8mf2x2_m_vl31 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8mf2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8mf2x2_m_vl31 )?} 1 } } */
vint8mf2x3_t
test_vlseg3e8ff_v_i8mf2x3 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf2x3 )?} 1 } } */
vint8mf2x3_t
test_vlseg3e8ff_v_i8mf2x3_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8mf2x3_vl31 )?} 1 } } */
vint8mf2x3_t
test_vlseg3e8ff_v_i8mf2x3_m (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8mf2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf2x3_m )?} 1 } } */
vint8mf2x3_t
test_vlseg3e8ff_v_i8mf2x3_m_vl31 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8mf2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8mf2x3_m_vl31 )?} 1 } } */
vint8mf2x4_t
test_vlseg4e8ff_v_i8mf2x4 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf2x4 )?} 1 } } */
vint8mf2x4_t
test_vlseg4e8ff_v_i8mf2x4_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8mf2x4_vl31 )?} 1 } } */
vint8mf2x4_t
test_vlseg4e8ff_v_i8mf2x4_m (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8mf2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf2x4_m )?} 1 } } */
vint8mf2x4_t
test_vlseg4e8ff_v_i8mf2x4_m_vl31 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8mf2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8mf2x4_m_vl31 )?} 1 } } */
vint8mf2x5_t
test_vlseg5e8ff_v_i8mf2x5 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf2x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf2x5 )?} 1 } } */
vint8mf2x5_t
test_vlseg5e8ff_v_i8mf2x5_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf2x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8mf2x5_vl31 )?} 1 } } */
vint8mf2x5_t
test_vlseg5e8ff_v_i8mf2x5_m (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8mf2x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf2x5_m )?} 1 } } */
vint8mf2x5_t
test_vlseg5e8ff_v_i8mf2x5_m_vl31 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8mf2x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8mf2x5_m_vl31 )?} 1 } } */
vint8mf2x6_t
test_vlseg6e8ff_v_i8mf2x6 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf2x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf2x6 )?} 1 } } */
vint8mf2x6_t
test_vlseg6e8ff_v_i8mf2x6_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf2x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8mf2x6_vl31 )?} 1 } } */
vint8mf2x6_t
test_vlseg6e8ff_v_i8mf2x6_m (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8mf2x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf2x6_m )?} 1 } } */
vint8mf2x6_t
test_vlseg6e8ff_v_i8mf2x6_m_vl31 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8mf2x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8mf2x6_m_vl31 )?} 1 } } */
vint8mf2x7_t
test_vlseg7e8ff_v_i8mf2x7 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf2x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf2x7 )?} 1 } } */
vint8mf2x7_t
test_vlseg7e8ff_v_i8mf2x7_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf2x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8mf2x7_vl31 )?} 1 } } */
vint8mf2x7_t
test_vlseg7e8ff_v_i8mf2x7_m (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8mf2x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf2x7_m )?} 1 } } */
vint8mf2x7_t
test_vlseg7e8ff_v_i8mf2x7_m_vl31 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8mf2x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8mf2x7_m_vl31 )?} 1 } } */
vint8mf2x8_t
test_vlseg8e8ff_v_i8mf2x8 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf2x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf2x8 )?} 1 } } */
vint8mf2x8_t
test_vlseg8e8ff_v_i8mf2x8_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf2x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8mf2x8_vl31 )?} 1 } } */
vint8mf2x8_t
test_vlseg8e8ff_v_i8mf2x8_m (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8mf2x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf2x8_m )?} 1 } } */
vint8mf2x8_t
test_vlseg8e8ff_v_i8mf2x8_m_vl31 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8mf2x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8mf2x8_m_vl31 )?} 1 } } */
vint8m1x2_t
test_vlseg2e8ff_v_i8m1x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m1x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m1x2 )?} 1 } } */
vint8m1x2_t
test_vlseg2e8ff_v_i8m1x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m1x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m1x2_vl31 )?} 1 } } */
vint8m1x2_t
test_vlseg2e8ff_v_i8m1x2_m (vbool8_t mask, vint8m1x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m1x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m1x2_m )?} 1 } } */
vint8m1x2_t
test_vlseg2e8ff_v_i8m1x2_m_vl31 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m1x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m1x2_m_vl31 )?} 1 } } */
vint8m1x3_t
test_vlseg3e8ff_v_i8m1x3 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8m1x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8m1x3 )?} 1 } } */
vint8m1x3_t
test_vlseg3e8ff_v_i8m1x3_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8m1x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8m1x3_vl31 )?} 1 } } */
vint8m1x3_t
test_vlseg3e8ff_v_i8m1x3_m (vbool8_t mask, vint8m1x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8m1x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8m1x3_m )?} 1 } } */
vint8m1x3_t
test_vlseg3e8ff_v_i8m1x3_m_vl31 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8m1x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8m1x3_m_vl31 )?} 1 } } */
vint8m1x4_t
test_vlseg4e8ff_v_i8m1x4 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8m1x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8m1x4 )?} 1 } } */
vint8m1x4_t
test_vlseg4e8ff_v_i8m1x4_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8m1x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8m1x4_vl31 )?} 1 } } */
vint8m1x4_t
test_vlseg4e8ff_v_i8m1x4_m (vbool8_t mask, vint8m1x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8m1x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8m1x4_m )?} 1 } } */
vint8m1x4_t
test_vlseg4e8ff_v_i8m1x4_m_vl31 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8m1x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8m1x4_m_vl31 )?} 1 } } */
vint8m1x5_t
test_vlseg5e8ff_v_i8m1x5 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8m1x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8m1x5 )?} 1 } } */
vint8m1x5_t
test_vlseg5e8ff_v_i8m1x5_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8m1x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e8ff_v_i8m1x5_vl31 )?} 1 } } */
vint8m1x5_t
test_vlseg5e8ff_v_i8m1x5_m (vbool8_t mask, vint8m1x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_v_i8m1x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8m1x5_m )?} 1 } } */
vint8m1x5_t
test_vlseg5e8ff_v_i8m1x5_m_vl31 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg5e8ff_v_i8m1x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e8ff_v_i8m1x5_m_vl31 )?} 1 } } */
vint8m1x6_t
test_vlseg6e8ff_v_i8m1x6 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8m1x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8m1x6 )?} 1 } } */
vint8m1x6_t
test_vlseg6e8ff_v_i8m1x6_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8m1x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e8ff_v_i8m1x6_vl31 )?} 1 } } */
vint8m1x6_t
test_vlseg6e8ff_v_i8m1x6_m (vbool8_t mask, vint8m1x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_v_i8m1x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8m1x6_m )?} 1 } } */
vint8m1x6_t
test_vlseg6e8ff_v_i8m1x6_m_vl31 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg6e8ff_v_i8m1x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e8ff_v_i8m1x6_m_vl31 )?} 1 } } */
vint8m1x7_t
test_vlseg7e8ff_v_i8m1x7 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8m1x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8m1x7 )?} 1 } } */
vint8m1x7_t
test_vlseg7e8ff_v_i8m1x7_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8m1x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e8ff_v_i8m1x7_vl31 )?} 1 } } */
vint8m1x7_t
test_vlseg7e8ff_v_i8m1x7_m (vbool8_t mask, vint8m1x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_v_i8m1x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8m1x7_m )?} 1 } } */
vint8m1x7_t
test_vlseg7e8ff_v_i8m1x7_m_vl31 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg7e8ff_v_i8m1x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e8ff_v_i8m1x7_m_vl31 )?} 1 } } */
vint8m1x8_t
test_vlseg8e8ff_v_i8m1x8 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8m1x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8m1x8 )?} 1 } } */
vint8m1x8_t
test_vlseg8e8ff_v_i8m1x8_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8m1x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e8ff_v_i8m1x8_vl31 )?} 1 } } */
vint8m1x8_t
test_vlseg8e8ff_v_i8m1x8_m (vbool8_t mask, vint8m1x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_v_i8m1x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8m1x8_m )?} 1 } } */
vint8m1x8_t
test_vlseg8e8ff_v_i8m1x8_m_vl31 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg8e8ff_v_i8m1x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e8ff_v_i8m1x8_m_vl31 )?} 1 } } */
vint8m2x2_t
test_vlseg2e8ff_v_i8m2x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m2x2 )?} 1 } } */
vint8m2x2_t
test_vlseg2e8ff_v_i8m2x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m2x2_vl31 )?} 1 } } */
vint8m2x2_t
test_vlseg2e8ff_v_i8m2x2_m (vbool4_t mask, vint8m2x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m2x2_m )?} 1 } } */
vint8m2x2_t
test_vlseg2e8ff_v_i8m2x2_m_vl31 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m2x2_m_vl31 )?} 1 } } */
vint8m2x3_t
test_vlseg3e8ff_v_i8m2x3 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8m2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8m2x3 )?} 1 } } */
vint8m2x3_t
test_vlseg3e8ff_v_i8m2x3_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8m2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e8ff_v_i8m2x3_vl31 )?} 1 } } */
vint8m2x3_t
test_vlseg3e8ff_v_i8m2x3_m (vbool4_t mask, vint8m2x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_v_i8m2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8m2x3_m )?} 1 } } */
vint8m2x3_t
test_vlseg3e8ff_v_i8m2x3_m_vl31 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg3e8ff_v_i8m2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e8ff_v_i8m2x3_m_vl31 )?} 1 } } */
vint8m2x4_t
test_vlseg4e8ff_v_i8m2x4 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8m2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8m2x4 )?} 1 } } */
vint8m2x4_t
test_vlseg4e8ff_v_i8m2x4_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8m2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e8ff_v_i8m2x4_vl31 )?} 1 } } */
vint8m2x4_t
test_vlseg4e8ff_v_i8m2x4_m (vbool4_t mask, vint8m2x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_v_i8m2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8m2x4_m )?} 1 } } */
vint8m2x4_t
test_vlseg4e8ff_v_i8m2x4_m_vl31 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg4e8ff_v_i8m2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e8ff_v_i8m2x4_m_vl31 )?} 1 } } */
vint8m4x2_t
test_vlseg2e8ff_v_i8m4x2 (int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m4x2 )?} 1 } } */
vint8m4x2_t
test_vlseg2e8ff_v_i8m4x2_vl31 (int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e8ff_v_i8m4x2_vl31 )?} 1 } } */
vint8m4x2_t
test_vlseg2e8ff_v_i8m4x2_m (vbool2_t mask, vint8m4x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_v_i8m4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m4x2_m )?} 1 } } */
vint8m4x2_t
test_vlseg2e8ff_v_i8m4x2_m_vl31 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, size_t *new_vl)
{
  return vlseg2e8ff_v_i8m4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e8ff_v_i8m4x2_m_vl31 )?} 1 } } */
vint16mf4x2_t
test_vlseg2e16ff_v_i16mf4x2 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16mf4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16mf4x2 )?} 1 } } */
vint16mf4x2_t
test_vlseg2e16ff_v_i16mf4x2_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16mf4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16mf4x2_vl31 )?} 1 } } */
vint16mf4x2_t
test_vlseg2e16ff_v_i16mf4x2_m (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16mf4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16mf4x2_m )?} 1 } } */
vint16mf4x2_t
test_vlseg2e16ff_v_i16mf4x2_m_vl31 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16mf4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16mf4x2_m_vl31 )?} 1 } } */
vint16mf4x3_t
test_vlseg3e16ff_v_i16mf4x3 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16mf4x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16mf4x3 )?} 1 } } */
vint16mf4x3_t
test_vlseg3e16ff_v_i16mf4x3_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16mf4x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16mf4x3_vl31 )?} 1 } } */
vint16mf4x3_t
test_vlseg3e16ff_v_i16mf4x3_m (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16mf4x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16mf4x3_m )?} 1 } } */
vint16mf4x3_t
test_vlseg3e16ff_v_i16mf4x3_m_vl31 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16mf4x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16mf4x3_m_vl31 )?} 1 } } */
vint16mf4x4_t
test_vlseg4e16ff_v_i16mf4x4 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16mf4x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16mf4x4 )?} 1 } } */
vint16mf4x4_t
test_vlseg4e16ff_v_i16mf4x4_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16mf4x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16mf4x4_vl31 )?} 1 } } */
vint16mf4x4_t
test_vlseg4e16ff_v_i16mf4x4_m (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16mf4x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16mf4x4_m )?} 1 } } */
vint16mf4x4_t
test_vlseg4e16ff_v_i16mf4x4_m_vl31 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16mf4x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16mf4x4_m_vl31 )?} 1 } } */
vint16mf4x5_t
test_vlseg5e16ff_v_i16mf4x5 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16mf4x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16mf4x5 )?} 1 } } */
vint16mf4x5_t
test_vlseg5e16ff_v_i16mf4x5_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16mf4x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16mf4x5_vl31 )?} 1 } } */
vint16mf4x5_t
test_vlseg5e16ff_v_i16mf4x5_m (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16mf4x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16mf4x5_m )?} 1 } } */
vint16mf4x5_t
test_vlseg5e16ff_v_i16mf4x5_m_vl31 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16mf4x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16mf4x5_m_vl31 )?} 1 } } */
vint16mf4x6_t
test_vlseg6e16ff_v_i16mf4x6 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16mf4x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16mf4x6 )?} 1 } } */
vint16mf4x6_t
test_vlseg6e16ff_v_i16mf4x6_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16mf4x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16mf4x6_vl31 )?} 1 } } */
vint16mf4x6_t
test_vlseg6e16ff_v_i16mf4x6_m (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16mf4x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16mf4x6_m )?} 1 } } */
vint16mf4x6_t
test_vlseg6e16ff_v_i16mf4x6_m_vl31 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16mf4x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16mf4x6_m_vl31 )?} 1 } } */
vint16mf4x7_t
test_vlseg7e16ff_v_i16mf4x7 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16mf4x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16mf4x7 )?} 1 } } */
vint16mf4x7_t
test_vlseg7e16ff_v_i16mf4x7_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16mf4x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16mf4x7_vl31 )?} 1 } } */
vint16mf4x7_t
test_vlseg7e16ff_v_i16mf4x7_m (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16mf4x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16mf4x7_m )?} 1 } } */
vint16mf4x7_t
test_vlseg7e16ff_v_i16mf4x7_m_vl31 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16mf4x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16mf4x7_m_vl31 )?} 1 } } */
vint16mf4x8_t
test_vlseg8e16ff_v_i16mf4x8 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16mf4x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16mf4x8 )?} 1 } } */
vint16mf4x8_t
test_vlseg8e16ff_v_i16mf4x8_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16mf4x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16mf4x8_vl31 )?} 1 } } */
vint16mf4x8_t
test_vlseg8e16ff_v_i16mf4x8_m (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16mf4x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16mf4x8_m )?} 1 } } */
vint16mf4x8_t
test_vlseg8e16ff_v_i16mf4x8_m_vl31 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16mf4x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16mf4x8_m_vl31 )?} 1 } } */
vint16mf2x2_t
test_vlseg2e16ff_v_i16mf2x2 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16mf2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16mf2x2 )?} 1 } } */
vint16mf2x2_t
test_vlseg2e16ff_v_i16mf2x2_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16mf2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16mf2x2_vl31 )?} 1 } } */
vint16mf2x2_t
test_vlseg2e16ff_v_i16mf2x2_m (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16mf2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16mf2x2_m )?} 1 } } */
vint16mf2x2_t
test_vlseg2e16ff_v_i16mf2x2_m_vl31 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16mf2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16mf2x2_m_vl31 )?} 1 } } */
vint16mf2x3_t
test_vlseg3e16ff_v_i16mf2x3 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16mf2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16mf2x3 )?} 1 } } */
vint16mf2x3_t
test_vlseg3e16ff_v_i16mf2x3_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16mf2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16mf2x3_vl31 )?} 1 } } */
vint16mf2x3_t
test_vlseg3e16ff_v_i16mf2x3_m (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16mf2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16mf2x3_m )?} 1 } } */
vint16mf2x3_t
test_vlseg3e16ff_v_i16mf2x3_m_vl31 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16mf2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16mf2x3_m_vl31 )?} 1 } } */
vint16mf2x4_t
test_vlseg4e16ff_v_i16mf2x4 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16mf2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16mf2x4 )?} 1 } } */
vint16mf2x4_t
test_vlseg4e16ff_v_i16mf2x4_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16mf2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16mf2x4_vl31 )?} 1 } } */
vint16mf2x4_t
test_vlseg4e16ff_v_i16mf2x4_m (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16mf2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16mf2x4_m )?} 1 } } */
vint16mf2x4_t
test_vlseg4e16ff_v_i16mf2x4_m_vl31 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16mf2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16mf2x4_m_vl31 )?} 1 } } */
vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16mf2x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16mf2x5 )?} 1 } } */
vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16mf2x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16mf2x5_vl31 )?} 1 } } */
vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5_m (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16mf2x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16mf2x5_m )?} 1 } } */
vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5_m_vl31 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16mf2x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16mf2x5_m_vl31 )?} 1 } } */
vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16mf2x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16mf2x6 )?} 1 } } */
vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16mf2x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16mf2x6_vl31 )?} 1 } } */
vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_m (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16mf2x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16mf2x6_m )?} 1 } } */
vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_m_vl31 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16mf2x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16mf2x6_m_vl31 )?} 1 } } */
vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16mf2x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16mf2x7 )?} 1 } } */
vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16mf2x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16mf2x7_vl31 )?} 1 } } */
vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_m (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16mf2x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16mf2x7_m )?} 1 } } */
vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_m_vl31 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16mf2x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16mf2x7_m_vl31 )?} 1 } } */
vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16mf2x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16mf2x8 )?} 1 } } */
vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16mf2x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16mf2x8_vl31 )?} 1 } } */
vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_m (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16mf2x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16mf2x8_m )?} 1 } } */
vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_m_vl31 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16mf2x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16mf2x8_m_vl31 )?} 1 } } */
vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m1x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m1x2 )?} 1 } } */
vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m1x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m1x2_vl31 )?} 1 } } */
vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_m (vbool16_t mask, vint16m1x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m1x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m1x2_m )?} 1 } } */
vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_m_vl31 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m1x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m1x2_m_vl31 )?} 1 } } */
vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16m1x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16m1x3 )?} 1 } } */
vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16m1x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16m1x3_vl31 )?} 1 } } */
vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_m (vbool16_t mask, vint16m1x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16m1x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16m1x3_m )?} 1 } } */
vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_m_vl31 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16m1x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16m1x3_m_vl31 )?} 1 } } */
vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16m1x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16m1x4 )?} 1 } } */
vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16m1x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16m1x4_vl31 )?} 1 } } */
vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_m (vbool16_t mask, vint16m1x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16m1x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16m1x4_m )?} 1 } } */
vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_m_vl31 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16m1x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16m1x4_m_vl31 )?} 1 } } */
vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16m1x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16m1x5 )?} 1 } } */
vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16m1x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e16ff_v_i16m1x5_vl31 )?} 1 } } */
vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_m (vbool16_t mask, vint16m1x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_v_i16m1x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16m1x5_m )?} 1 } } */
vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_m_vl31 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_i16m1x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e16ff_v_i16m1x5_m_vl31 )?} 1 } } */
vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16m1x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16m1x6 )?} 1 } } */
vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16m1x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e16ff_v_i16m1x6_vl31 )?} 1 } } */
vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_m (vbool16_t mask, vint16m1x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_v_i16m1x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16m1x6_m )?} 1 } } */
vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_m_vl31 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_i16m1x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e16ff_v_i16m1x6_m_vl31 )?} 1 } } */
vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16m1x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16m1x7 )?} 1 } } */
vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16m1x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e16ff_v_i16m1x7_vl31 )?} 1 } } */
vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_m (vbool16_t mask, vint16m1x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_v_i16m1x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16m1x7_m )?} 1 } } */
vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_m_vl31 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_i16m1x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e16ff_v_i16m1x7_m_vl31 )?} 1 } } */
vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16m1x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16m1x8 )?} 1 } } */
vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16m1x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e16ff_v_i16m1x8_vl31 )?} 1 } } */
vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_m (vbool16_t mask, vint16m1x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_v_i16m1x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16m1x8_m )?} 1 } } */
vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_m_vl31 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_i16m1x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e16ff_v_i16m1x8_m_vl31 )?} 1 } } */
vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m2x2 )?} 1 } } */
vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m2x2_vl31 )?} 1 } } */
vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_m (vbool8_t mask, vint16m2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m2x2_m )?} 1 } } */
vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_m_vl31 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m2x2_m_vl31 )?} 1 } } */
vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16m2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16m2x3 )?} 1 } } */
vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16m2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e16ff_v_i16m2x3_vl31 )?} 1 } } */
vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_m (vbool8_t mask, vint16m2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_v_i16m2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16m2x3_m )?} 1 } } */
vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_m_vl31 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_i16m2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e16ff_v_i16m2x3_m_vl31 )?} 1 } } */
vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16m2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16m2x4 )?} 1 } } */
vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16m2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e16ff_v_i16m2x4_vl31 )?} 1 } } */
vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_m (vbool8_t mask, vint16m2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_v_i16m2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16m2x4_m )?} 1 } } */
vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_m_vl31 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_i16m2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e16ff_v_i16m2x4_m_vl31 )?} 1 } } */
vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2 (int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m4x2 )?} 1 } } */
vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_vl31 (int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e16ff_v_i16m4x2_vl31 )?} 1 } } */
vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_m (vbool4_t mask, vint16m4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_v_i16m4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m4x2_m )?} 1 } } */
vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_m_vl31 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_i16m4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e16ff_v_i16m4x2_m_vl31 )?} 1 } } */
vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32mf2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32mf2x2 )?} 1 } } */
vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32mf2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32mf2x2_vl31 )?} 1 } } */
vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_m (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32mf2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32mf2x2_m )?} 1 } } */
vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_m_vl31 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32mf2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32mf2x2_m_vl31 )?} 1 } } */
vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32mf2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32mf2x3 )?} 1 } } */
vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32mf2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32mf2x3_vl31 )?} 1 } } */
vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_m (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32mf2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32mf2x3_m )?} 1 } } */
vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_m_vl31 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32mf2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32mf2x3_m_vl31 )?} 1 } } */
vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32mf2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32mf2x4 )?} 1 } } */
vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32mf2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32mf2x4_vl31 )?} 1 } } */
vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_m (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32mf2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32mf2x4_m )?} 1 } } */
vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_m_vl31 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32mf2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32mf2x4_m_vl31 )?} 1 } } */
vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_i32mf2x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_i32mf2x5 )?} 1 } } */
vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_i32mf2x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_i32mf2x5_vl31 )?} 1 } } */
vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_m (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_i32mf2x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_i32mf2x5_m )?} 1 } } */
vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_m_vl31 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_i32mf2x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_i32mf2x5_m_vl31 )?} 1 } } */
vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_i32mf2x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_i32mf2x6 )?} 1 } } */
vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_i32mf2x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_i32mf2x6_vl31 )?} 1 } } */
vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_m (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_i32mf2x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_i32mf2x6_m )?} 1 } } */
vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_m_vl31 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_i32mf2x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_i32mf2x6_m_vl31 )?} 1 } } */
vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_i32mf2x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_i32mf2x7 )?} 1 } } */
vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_i32mf2x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_i32mf2x7_vl31 )?} 1 } } */
vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_m (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_i32mf2x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_i32mf2x7_m )?} 1 } } */
vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_m_vl31 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_i32mf2x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_i32mf2x7_m_vl31 )?} 1 } } */
vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_i32mf2x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_i32mf2x8 )?} 1 } } */
vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_i32mf2x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_i32mf2x8_vl31 )?} 1 } } */
vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_m (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_i32mf2x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_i32mf2x8_m )?} 1 } } */
vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_m_vl31 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_i32mf2x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_i32mf2x8_m_vl31 )?} 1 } } */
vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m1x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m1x2 )?} 1 } } */
vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m1x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m1x2_vl31 )?} 1 } } */
vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_m (vbool32_t mask, vint32m1x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m1x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m1x2_m )?} 1 } } */
vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_m_vl31 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m1x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m1x2_m_vl31 )?} 1 } } */
vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32m1x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32m1x3 )?} 1 } } */
vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32m1x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32m1x3_vl31 )?} 1 } } */
vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_m (vbool32_t mask, vint32m1x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32m1x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32m1x3_m )?} 1 } } */
vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_m_vl31 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32m1x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32m1x3_m_vl31 )?} 1 } } */
vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32m1x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32m1x4 )?} 1 } } */
vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32m1x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32m1x4_vl31 )?} 1 } } */
vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_m (vbool32_t mask, vint32m1x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32m1x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32m1x4_m )?} 1 } } */
vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_m_vl31 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32m1x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32m1x4_m_vl31 )?} 1 } } */
vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_i32m1x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_i32m1x5 )?} 1 } } */
vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_i32m1x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e32ff_v_i32m1x5_vl31 )?} 1 } } */
vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_m (vbool32_t mask, vint32m1x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_v_i32m1x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_i32m1x5_m )?} 1 } } */
vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_m_vl31 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_i32m1x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e32ff_v_i32m1x5_m_vl31 )?} 1 } } */
vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_i32m1x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_i32m1x6 )?} 1 } } */
vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_i32m1x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e32ff_v_i32m1x6_vl31 )?} 1 } } */
vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_m (vbool32_t mask, vint32m1x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_v_i32m1x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_i32m1x6_m )?} 1 } } */
vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_m_vl31 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_i32m1x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e32ff_v_i32m1x6_m_vl31 )?} 1 } } */
vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_i32m1x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_i32m1x7 )?} 1 } } */
vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_i32m1x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e32ff_v_i32m1x7_vl31 )?} 1 } } */
vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_m (vbool32_t mask, vint32m1x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_v_i32m1x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_i32m1x7_m )?} 1 } } */
vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_m_vl31 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_i32m1x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e32ff_v_i32m1x7_m_vl31 )?} 1 } } */
vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_i32m1x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_i32m1x8 )?} 1 } } */
vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_i32m1x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e32ff_v_i32m1x8_vl31 )?} 1 } } */
vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_m (vbool32_t mask, vint32m1x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_v_i32m1x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_i32m1x8_m )?} 1 } } */
vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_m_vl31 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_i32m1x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e32ff_v_i32m1x8_m_vl31 )?} 1 } } */
vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m2x2 )?} 1 } } */
vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m2x2_vl31 )?} 1 } } */
vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_m (vbool16_t mask, vint32m2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m2x2_m )?} 1 } } */
vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_m_vl31 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m2x2_m_vl31 )?} 1 } } */
vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32m2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32m2x3 )?} 1 } } */
vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32m2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e32ff_v_i32m2x3_vl31 )?} 1 } } */
vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_m (vbool16_t mask, vint32m2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_v_i32m2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32m2x3_m )?} 1 } } */
vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_m_vl31 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_i32m2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e32ff_v_i32m2x3_m_vl31 )?} 1 } } */
vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32m2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32m2x4 )?} 1 } } */
vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32m2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e32ff_v_i32m2x4_vl31 )?} 1 } } */
vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_m (vbool16_t mask, vint32m2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_v_i32m2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32m2x4_m )?} 1 } } */
vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_m_vl31 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_i32m2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e32ff_v_i32m2x4_m_vl31 )?} 1 } } */
vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2 (int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m4x2 )?} 1 } } */
vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_vl31 (int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e32ff_v_i32m4x2_vl31 )?} 1 } } */
vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_m (vbool8_t mask, vint32m4x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_v_i32m4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m4x2_m )?} 1 } } */
vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_m_vl31 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_i32m4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e32ff_v_i32m4x2_m_vl31 )?} 1 } } */
vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m1x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m1x2 )?} 1 } } */
vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m1x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m1x2_vl31 )?} 1 } } */
vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_m (vbool64_t mask, vint64m1x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m1x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m1x2_m )?} 1 } } */
vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_m_vl31 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m1x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m1x2_m_vl31 )?} 1 } } */
vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_i64m1x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_i64m1x3 )?} 1 } } */
vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_i64m1x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_i64m1x3_vl31 )?} 1 } } */
vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_m (vbool64_t mask, vint64m1x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_i64m1x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_i64m1x3_m )?} 1 } } */
vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_m_vl31 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_i64m1x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_i64m1x3_m_vl31 )?} 1 } } */
vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_i64m1x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_i64m1x4 )?} 1 } } */
vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_i64m1x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_i64m1x4_vl31 )?} 1 } } */
vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_m (vbool64_t mask, vint64m1x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_i64m1x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_i64m1x4_m )?} 1 } } */
vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_m_vl31 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_i64m1x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_i64m1x4_m_vl31 )?} 1 } } */
vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_v_i64m1x5 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_i64m1x5 )?} 1 } } */
vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_i64m1x5 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg5e64ff_v_i64m1x5_vl31 )?} 1 } } */
vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_m (vbool64_t mask, vint64m1x5_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_v_i64m1x5_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_i64m1x5_m )?} 1 } } */
vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_m_vl31 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_i64m1x5_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg5e64ff_v_i64m1x5_m_vl31 )?} 1 } } */
vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_v_i64m1x6 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_i64m1x6 )?} 1 } } */
vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_i64m1x6 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg6e64ff_v_i64m1x6_vl31 )?} 1 } } */
vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_m (vbool64_t mask, vint64m1x6_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_v_i64m1x6_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_i64m1x6_m )?} 1 } } */
vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_m_vl31 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_i64m1x6_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg6e64ff_v_i64m1x6_m_vl31 )?} 1 } } */
vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_v_i64m1x7 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_i64m1x7 )?} 1 } } */
vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_i64m1x7 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg7e64ff_v_i64m1x7_vl31 )?} 1 } } */
vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_m (vbool64_t mask, vint64m1x7_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_v_i64m1x7_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_i64m1x7_m )?} 1 } } */
vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_m_vl31 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_i64m1x7_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg7e64ff_v_i64m1x7_m_vl31 )?} 1 } } */
vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_v_i64m1x8 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_i64m1x8 )?} 1 } } */
vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_i64m1x8 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg8e64ff_v_i64m1x8_vl31 )?} 1 } } */
vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_m (vbool64_t mask, vint64m1x8_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_v_i64m1x8_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_i64m1x8_m )?} 1 } } */
vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_m_vl31 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_i64m1x8_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg8e64ff_v_i64m1x8_m_vl31 )?} 1 } } */
vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m2x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m2x2 )?} 1 } } */
vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m2x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m2x2_vl31 )?} 1 } } */
vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_m (vbool32_t mask, vint64m2x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m2x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m2x2_m )?} 1 } } */
vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_m_vl31 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m2x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m2x2_m_vl31 )?} 1 } } */
vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_i64m2x3 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_i64m2x3 )?} 1 } } */
vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_i64m2x3 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg3e64ff_v_i64m2x3_vl31 )?} 1 } } */
vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_m (vbool32_t mask, vint64m2x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_v_i64m2x3_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_i64m2x3_m )?} 1 } } */
vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_m_vl31 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_i64m2x3_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg3e64ff_v_i64m2x3_m_vl31 )?} 1 } } */
vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_i64m2x4 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_i64m2x4 )?} 1 } } */
vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_i64m2x4 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg4e64ff_v_i64m2x4_vl31 )?} 1 } } */
vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_m (vbool32_t mask, vint64m2x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_v_i64m2x4_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_i64m2x4_m )?} 1 } } */
vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_m_vl31 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_i64m2x4_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg4e64ff_v_i64m2x4_m_vl31 )?} 1 } } */
vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2 (int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m4x2 (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m4x2 )?} 1 } } */
vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_vl31 (int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m4x2 (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlseg2e64ff_v_i64m4x2_vl31 )?} 1 } } */
vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_m (vbool16_t mask, vint64m4x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_v_i64m4x2_m (mask, dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m4x2_m )?} 1 } } */
vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_m_vl31 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_i64m4x2_m (mask, dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlseg.e..?ff\.v).)*\s+vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vlseg2e64ff_v_i64m4x2_m_vl31 )?} 1 } } */
