
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vint8mf8_t
test_vlse8_v_i8mf8_tama (vbool64_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf8_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tama )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tama_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf8_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tama_vl31 )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf8_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tamu )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tamu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf8_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tamu_vl31 )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf8_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tuma )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tuma_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf8_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tuma_vl31 )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf8_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tumu )?} 1 } } */
vint8mf8_t
test_vlse8_v_i8mf8_tumu_vl31 (vbool64_t mask, vint8mf8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf8_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf8_tumu_vl31 )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tama (vbool32_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tama )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tama_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tama_vl31 )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tamu )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tamu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tamu_vl31 )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tuma )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tuma_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tuma_vl31 )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tumu )?} 1 } } */
vint8mf4_t
test_vlse8_v_i8mf4_tumu_vl31 (vbool32_t mask, vint8mf4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf4_tumu_vl31 )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tama (vbool16_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tama )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tama_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tama_vl31 )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tamu )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tamu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tamu_vl31 )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tuma )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tuma_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tuma_vl31 )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8mf2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tumu )?} 1 } } */
vint8mf2_t
test_vlse8_v_i8mf2_tumu_vl31 (vbool16_t mask, vint8mf2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8mf2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8mf2_tumu_vl31 )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tama (vbool8_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m1_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tama )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tama_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m1_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tama_vl31 )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m1_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tamu )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tamu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m1_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tamu_vl31 )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m1_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tuma )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tuma_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m1_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tuma_vl31 )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m1_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tumu )?} 1 } } */
vint8m1_t
test_vlse8_v_i8m1_tumu_vl31 (vbool8_t mask, vint8m1_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m1_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m1_tumu_vl31 )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tama (vbool4_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tama )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tama_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tama_vl31 )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tamu (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tamu )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tamu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tamu_vl31 )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tuma (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tuma )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tuma_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tuma_vl31 )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tumu (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tumu )?} 1 } } */
vint8m2_t
test_vlse8_v_i8m2_tumu_vl31 (vbool4_t mask, vint8m2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m2_tumu_vl31 )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tama (vbool2_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tama )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tama_vl31 (vbool2_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tama_vl31 )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tamu (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tamu )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tamu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tamu_vl31 )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tuma (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tuma )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tuma_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tuma_vl31 )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tumu (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tumu )?} 1 } } */
vint8m4_t
test_vlse8_v_i8m4_tumu_vl31 (vbool2_t mask, vint8m4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m4_tumu_vl31 )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tama (vbool1_t mask, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m8_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tama )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tama_vl31 (vbool1_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m8_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tama_vl31 )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tamu (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m8_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tamu )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tamu_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m8_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tamu_vl31 )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tuma (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m8_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tuma )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tuma_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m8_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tuma_vl31 )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tumu (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse8_v_i8m8_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tumu )?} 1 } } */
vint8m8_t
test_vlse8_v_i8m8_tumu_vl31 (vbool1_t mask, vint8m8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlse8_v_i8m8_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse8_v_i8m8_tumu_vl31 )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tama (vbool64_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tama )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tama_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tama_vl31 )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tamu )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tamu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tamu_vl31 )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tuma )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tuma_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tuma_vl31 )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tumu )?} 1 } } */
vint16mf4_t
test_vlse16_v_i16mf4_tumu_vl31 (vbool64_t mask, vint16mf4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf4_tumu_vl31 )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tama (vbool32_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tama )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tama_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tama_vl31 )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tamu )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tamu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tamu_vl31 )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tuma )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tuma_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tuma_vl31 )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16mf2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tumu )?} 1 } } */
vint16mf2_t
test_vlse16_v_i16mf2_tumu_vl31 (vbool32_t mask, vint16mf2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16mf2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16mf2_tumu_vl31 )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m1_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tama )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m1_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tama_vl31 )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m1_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tamu )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tamu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m1_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tamu_vl31 )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m1_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tuma )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tuma_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m1_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tuma_vl31 )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m1_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tumu )?} 1 } } */
vint16m1_t
test_vlse16_v_i16m1_tumu_vl31 (vbool16_t mask, vint16m1_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m1_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m1_tumu_vl31 )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tama (vbool8_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tama )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tama_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tama_vl31 )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tamu )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tamu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tamu_vl31 )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tuma )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tuma_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tuma_vl31 )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tumu )?} 1 } } */
vint16m2_t
test_vlse16_v_i16m2_tumu_vl31 (vbool8_t mask, vint16m2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m2_tumu_vl31 )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tama (vbool4_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tama )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tama_vl31 (vbool4_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tama_vl31 )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tamu (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tamu )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tamu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tamu_vl31 )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tuma (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tuma )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tuma_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tuma_vl31 )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tumu (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tumu )?} 1 } } */
vint16m4_t
test_vlse16_v_i16m4_tumu_vl31 (vbool4_t mask, vint16m4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m4_tumu_vl31 )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tama (vbool2_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m8_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tama )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tama_vl31 (vbool2_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m8_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tama_vl31 )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tamu (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m8_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tamu )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tamu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m8_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tamu_vl31 )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tuma (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m8_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tuma )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tuma_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m8_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tuma_vl31 )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tumu (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse16_v_i16m8_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tumu )?} 1 } } */
vint16m8_t
test_vlse16_v_i16m8_tumu_vl31 (vbool2_t mask, vint16m8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlse16_v_i16m8_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse16_v_i16m8_tumu_vl31 )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32mf2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tama )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32mf2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tama_vl31 )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32mf2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tamu )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tamu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32mf2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tamu_vl31 )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32mf2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tuma )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tuma_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32mf2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tuma_vl31 )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32mf2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tumu )?} 1 } } */
vint32mf2_t
test_vlse32_v_i32mf2_tumu_vl31 (vbool64_t mask, vint32mf2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32mf2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32mf2_tumu_vl31 )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m1_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tama )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m1_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tama_vl31 )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m1_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tamu )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tamu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m1_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tamu_vl31 )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m1_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tuma )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tuma_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m1_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tuma_vl31 )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m1_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tumu )?} 1 } } */
vint32m1_t
test_vlse32_v_i32m1_tumu_vl31 (vbool32_t mask, vint32m1_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m1_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m1_tumu_vl31 )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tama (vbool16_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tama )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tama_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tama_vl31 )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tamu )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tamu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tamu_vl31 )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tuma )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tuma_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tuma_vl31 )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tumu )?} 1 } } */
vint32m2_t
test_vlse32_v_i32m2_tumu_vl31 (vbool16_t mask, vint32m2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m2_tumu_vl31 )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tama (vbool8_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tama )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tama_vl31 (vbool8_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tama_vl31 )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tamu )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tamu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tamu_vl31 )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tuma )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tuma_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tuma_vl31 )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tumu )?} 1 } } */
vint32m4_t
test_vlse32_v_i32m4_tumu_vl31 (vbool8_t mask, vint32m4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m4_tumu_vl31 )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tama (vbool4_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m8_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tama )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tama_vl31 (vbool4_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m8_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tama_vl31 )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tamu (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m8_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tamu )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tamu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m8_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tamu_vl31 )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tuma (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m8_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tuma )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tuma_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m8_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tuma_vl31 )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tumu (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse32_v_i32m8_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tumu )?} 1 } } */
vint32m8_t
test_vlse32_v_i32m8_tumu_vl31 (vbool4_t mask, vint32m8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlse32_v_i32m8_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse32_v_i32m8_tumu_vl31 )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m1_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tama )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m1_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tama_vl31 )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m1_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tamu )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tamu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m1_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tamu_vl31 )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m1_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tuma )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tuma_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m1_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tuma_vl31 )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m1_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tumu )?} 1 } } */
vint64m1_t
test_vlse64_v_i64m1_tumu_vl31 (vbool64_t mask, vint64m1_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m1_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m1_tumu_vl31 )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tama (vbool32_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m2_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tama )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tama_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m2_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tama_vl31 )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m2_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tamu )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tamu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m2_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tamu_vl31 )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m2_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tuma )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tuma_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m2_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tuma_vl31 )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m2_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tumu )?} 1 } } */
vint64m2_t
test_vlse64_v_i64m2_tumu_vl31 (vbool32_t mask, vint64m2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m2_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m2_tumu_vl31 )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tama (vbool16_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m4_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tama )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tama_vl31 (vbool16_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m4_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tama_vl31 )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m4_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tamu )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tamu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m4_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tamu_vl31 )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m4_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tuma )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tuma_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m4_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tuma_vl31 )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m4_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tumu )?} 1 } } */
vint64m4_t
test_vlse64_v_i64m4_tumu_vl31 (vbool16_t mask, vint64m4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m4_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m4_tumu_vl31 )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tama (vbool8_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m8_tama (mask, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tama )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tama_vl31 (vbool8_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m8_tama (mask, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tama_vl31 )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m8_tamu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tamu )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tamu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m8_tamu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tamu_vl31 )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m8_tuma (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tuma )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tuma_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m8_tuma (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tuma_vl31 )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlse64_v_i64m8_tumu (mask, dest, base, bstride, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tumu )?} 1 } } */
vint64m8_t
test_vlse64_v_i64m8_tumu_vl31 (vbool8_t mask, vint64m8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlse64_v_i64m8_tumu (mask, dest, base, bstride, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vlse..?\.v).)*\s+vlse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vlse64_v_i64m8_tumu_vl31 )?} 1 } } */
