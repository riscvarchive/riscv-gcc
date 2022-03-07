
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_m16(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf8_ta_m16 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_15(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf8_ta_15 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl31_m16(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf8_ta_vl31_m16 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_ta_vl31_15(vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf8_ta_vl31_15 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_m16(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf4_ta_m16 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_15(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf4_ta_15 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl31_m16(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf4_ta_vl31_m16 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_ta_vl31_15(vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf4_ta_vl31_15 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_m16(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf2_ta_m16 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_15(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf2_ta_15 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl31_m16(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf2_ta_vl31_m16 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_ta_vl31_15(vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf2_ta_vl31_15 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_ta_m16(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m1_ta_m16 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_ta_15(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m1_ta_15 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl31_m16(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m1_ta_vl31_m16 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_ta_vl31_15(vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m1_ta_vl31_15 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_ta_m16(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m2_ta_m16 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_ta_15(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m2_ta_15 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl31_m16(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m2_ta_vl31_m16 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_ta_vl31_15(vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m2_ta_vl31_15 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_ta_m16(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m4_ta_m16 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_ta_15(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m4_ta_15 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl31_m16(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m4_ta_vl31_m16 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_ta_vl31_15(vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m4_ta_vl31_15 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_ta_m16(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m8_ta_m16 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_ta_15(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m8_ta_15 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl31_m16(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m8_ta_vl31_m16 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_ta_vl31_15(vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m8_ta_vl31_15 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_m16(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf4_ta_m16 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_15(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf4_ta_15 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl31_m16(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf4_ta_vl31_m16 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_ta_vl31_15(vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf4_ta_vl31_15 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_m16(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf2_ta_m16 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_15(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf2_ta_15 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl31_m16(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf2_ta_vl31_m16 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_ta_vl31_15(vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf2_ta_vl31_15 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_ta_m16(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m1_ta_m16 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_ta_15(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m1_ta_15 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl31_m16(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m1_ta_vl31_m16 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_ta_vl31_15(vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m1_ta_vl31_15 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_ta_m16(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m2_ta_m16 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_ta_15(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m2_ta_15 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl31_m16(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m2_ta_vl31_m16 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_ta_vl31_15(vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m2_ta_vl31_15 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_ta_m16(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m4_ta_m16 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_ta_15(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m4_ta_15 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl31_m16(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m4_ta_vl31_m16 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_ta_vl31_15(vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m4_ta_vl31_15 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_ta_m16(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m8_ta_m16 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_ta_15(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m8_ta_15 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl31_m16(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m8_ta_vl31_m16 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_ta_vl31_15(vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m8_ta_vl31_15 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_m16(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32mf2_ta_m16 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_15(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32mf2_ta_15 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl31_m16(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32mf2_ta_vl31_m16 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_ta_vl31_15(vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32mf2_ta_vl31_15 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_ta_m16(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m1_ta_m16 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_ta_15(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m1_ta_15 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl31_m16(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m1_ta_vl31_m16 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_ta_vl31_15(vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m1_ta_vl31_15 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_ta_m16(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m2_ta_m16 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_ta_15(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m2_ta_15 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl31_m16(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m2_ta_vl31_m16 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_ta_vl31_15(vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m2_ta_vl31_15 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_ta_m16(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m4_ta_m16 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_ta_15(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m4_ta_15 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl31_m16(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m4_ta_vl31_m16 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_ta_vl31_15(vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m4_ta_vl31_15 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_ta_m16(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m8_ta_m16 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_ta_15(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m8_ta_15 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl31_m16(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m8_ta_vl31_m16 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_ta_vl31_15(vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m8_ta_vl31_15 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_m16(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m1_ta_m16 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_15(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m1_ta_15 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl31_m16(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m1_ta_vl31_m16 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_ta_vl31_15(vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m1_ta_vl31_15 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_m16(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m2_ta_m16 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_15(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m2_ta_15 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl31_m16(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m2_ta_vl31_m16 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_ta_vl31_15(vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m2_ta_vl31_15 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_m16(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m4_ta_m16 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_15(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m4_ta_15 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl31_m16(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m4_ta_vl31_m16 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_ta_vl31_15(vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m4_ta_vl31_15 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_m16(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m8_ta_m16 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_15(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m8_ta_15 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl31_m16(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m8_ta_vl31_m16 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_ta_vl31_15(vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_ta(mask, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m8_ta_vl31_15 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_m16(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf8_tu_m16 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_15(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf8_tu_15 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl31_m16(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf8_tu_vl31_m16 )?} 1 } } */

vuint8mf8_t 
test_vmerge_vxm_u8mf8_tu_vl31_15(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vmerge_vxm_u8mf8_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf8_tu_vl31_15 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_m16(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf4_tu_m16 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_15(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf4_tu_15 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl31_m16(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf4_tu_vl31_m16 )?} 1 } } */

vuint8mf4_t 
test_vmerge_vxm_u8mf4_tu_vl31_15(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vmerge_vxm_u8mf4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf4_tu_vl31_15 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_m16(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf2_tu_m16 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_15(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf2_tu_15 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl31_m16(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8mf2_tu_vl31_m16 )?} 1 } } */

vuint8mf2_t 
test_vmerge_vxm_u8mf2_tu_vl31_15(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vmerge_vxm_u8mf2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8mf2_tu_vl31_15 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_tu_m16(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m1_tu_m16 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_tu_15(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m1_tu_15 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl31_m16(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m1_tu_vl31_m16 )?} 1 } } */

vuint8m1_t 
test_vmerge_vxm_u8m1_tu_vl31_15(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vmerge_vxm_u8m1_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m1_tu_vl31_15 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_tu_m16(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m2_tu_m16 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_tu_15(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m2_tu_15 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl31_m16(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m2_tu_vl31_m16 )?} 1 } } */

vuint8m2_t 
test_vmerge_vxm_u8m2_tu_vl31_15(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vmerge_vxm_u8m2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m2_tu_vl31_15 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_tu_m16(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m4_tu_m16 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_tu_15(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m4_tu_15 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl31_m16(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m4_tu_vl31_m16 )?} 1 } } */

vuint8m4_t 
test_vmerge_vxm_u8m4_tu_vl31_15(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vmerge_vxm_u8m4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m4_tu_vl31_15 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_tu_m16(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m8_tu_m16 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_tu_15(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m8_tu_15 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl31_m16(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u8m8_tu_vl31_m16 )?} 1 } } */

vuint8m8_t 
test_vmerge_vxm_u8m8_tu_vl31_15(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vmerge_vxm_u8m8_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u8m8_tu_vl31_15 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_m16(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf4_tu_m16 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_15(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf4_tu_15 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl31_m16(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf4_tu_vl31_m16 )?} 1 } } */

vuint16mf4_t 
test_vmerge_vxm_u16mf4_tu_vl31_15(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vmerge_vxm_u16mf4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf4_tu_vl31_15 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_m16(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf2_tu_m16 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_15(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf2_tu_15 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl31_m16(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16mf2_tu_vl31_m16 )?} 1 } } */

vuint16mf2_t 
test_vmerge_vxm_u16mf2_tu_vl31_15(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vmerge_vxm_u16mf2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16mf2_tu_vl31_15 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_tu_m16(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m1_tu_m16 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_tu_15(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m1_tu_15 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl31_m16(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m1_tu_vl31_m16 )?} 1 } } */

vuint16m1_t 
test_vmerge_vxm_u16m1_tu_vl31_15(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vmerge_vxm_u16m1_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m1_tu_vl31_15 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_tu_m16(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m2_tu_m16 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_tu_15(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m2_tu_15 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl31_m16(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m2_tu_vl31_m16 )?} 1 } } */

vuint16m2_t 
test_vmerge_vxm_u16m2_tu_vl31_15(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vmerge_vxm_u16m2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m2_tu_vl31_15 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_tu_m16(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m4_tu_m16 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_tu_15(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m4_tu_15 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl31_m16(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m4_tu_vl31_m16 )?} 1 } } */

vuint16m4_t 
test_vmerge_vxm_u16m4_tu_vl31_15(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vmerge_vxm_u16m4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m4_tu_vl31_15 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_tu_m16(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m8_tu_m16 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_tu_15(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m8_tu_15 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl31_m16(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u16m8_tu_vl31_m16 )?} 1 } } */

vuint16m8_t 
test_vmerge_vxm_u16m8_tu_vl31_15(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vmerge_vxm_u16m8_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u16m8_tu_vl31_15 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_m16(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32mf2_tu_m16 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_15(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32mf2_tu_15 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl31_m16(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32mf2_tu_vl31_m16 )?} 1 } } */

vuint32mf2_t 
test_vmerge_vxm_u32mf2_tu_vl31_15(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vmerge_vxm_u32mf2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32mf2_tu_vl31_15 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_tu_m16(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m1_tu_m16 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_tu_15(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m1_tu_15 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl31_m16(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m1_tu_vl31_m16 )?} 1 } } */

vuint32m1_t 
test_vmerge_vxm_u32m1_tu_vl31_15(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vmerge_vxm_u32m1_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m1_tu_vl31_15 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_tu_m16(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m2_tu_m16 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_tu_15(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m2_tu_15 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl31_m16(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m2_tu_vl31_m16 )?} 1 } } */

vuint32m2_t 
test_vmerge_vxm_u32m2_tu_vl31_15(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vmerge_vxm_u32m2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m2_tu_vl31_15 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_tu_m16(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m4_tu_m16 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_tu_15(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m4_tu_15 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl31_m16(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m4_tu_vl31_m16 )?} 1 } } */

vuint32m4_t 
test_vmerge_vxm_u32m4_tu_vl31_15(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vmerge_vxm_u32m4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m4_tu_vl31_15 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_tu_m16(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m8_tu_m16 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_tu_15(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m8_tu_15 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl31_m16(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u32m8_tu_vl31_m16 )?} 1 } } */

vuint32m8_t 
test_vmerge_vxm_u32m8_tu_vl31_15(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vmerge_vxm_u32m8_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u32m8_tu_vl31_15 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_m16(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m1_tu_m16 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_15(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m1_tu_15 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl31_m16(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m1_tu_vl31_m16 )?} 1 } } */

vuint64m1_t 
test_vmerge_vxm_u64m1_tu_vl31_15(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vmerge_vxm_u64m1_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m1_tu_vl31_15 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_m16(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m2_tu_m16 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_15(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m2_tu_15 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl31_m16(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m2_tu_vl31_m16 )?} 1 } } */

vuint64m2_t 
test_vmerge_vxm_u64m2_tu_vl31_15(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vmerge_vxm_u64m2_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m2_tu_vl31_15 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_m16(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m4_tu_m16 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_15(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m4_tu_15 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl31_m16(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m4_tu_vl31_m16 )?} 1 } } */

vuint64m4_t 
test_vmerge_vxm_u64m4_tu_vl31_15(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vmerge_vxm_u64m4_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m4_tu_vl31_15 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_m16(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m8_tu_m16 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_15(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m8_tu_15 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl31_m16(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\n(?: test_vmerge_vxm_u64m8_tu_vl31_m16 )?} 1 } } */

vuint64m8_t 
test_vmerge_vxm_u64m8_tu_vl31_15(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vmerge_vxm_u64m8_tu(mask, dest, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmerge\.vim).)*\s+vmerge\.vim\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\n(?: test_vmerge_vxm_u64m8_tu_vl31_15 )?} 1 } } */
