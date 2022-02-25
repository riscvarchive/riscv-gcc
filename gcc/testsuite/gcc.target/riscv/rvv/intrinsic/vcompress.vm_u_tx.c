
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vcompress_vm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vcompress_vm_u8mf8_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf8_ta )?} 1 } } */

vuint8mf8_t 
test_vcompress_vm_u8mf8_ta_vl31(vbool64_t mask, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf8_ta_vl31 )?} 1 } } */

vuint8mf4_t 
test_vcompress_vm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vcompress_vm_u8mf4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf4_ta )?} 1 } } */

vuint8mf4_t 
test_vcompress_vm_u8mf4_ta_vl31(vbool32_t mask, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf4_ta_vl31 )?} 1 } } */

vuint8mf2_t 
test_vcompress_vm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vcompress_vm_u8mf2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf2_ta )?} 1 } } */

vuint8mf2_t 
test_vcompress_vm_u8mf2_ta_vl31(vbool16_t mask, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf2_ta_vl31 )?} 1 } } */

vuint8m1_t 
test_vcompress_vm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vcompress_vm_u8m1_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m1_ta )?} 1 } } */

vuint8m1_t 
test_vcompress_vm_u8m1_ta_vl31(vbool8_t mask, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m1_ta_vl31 )?} 1 } } */

vuint8m2_t 
test_vcompress_vm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vcompress_vm_u8m2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m2_ta )?} 1 } } */

vuint8m2_t 
test_vcompress_vm_u8m2_ta_vl31(vbool4_t mask, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m2_ta_vl31 )?} 1 } } */

vuint8m4_t 
test_vcompress_vm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vcompress_vm_u8m4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m4_ta )?} 1 } } */

vuint8m4_t 
test_vcompress_vm_u8m4_ta_vl31(vbool2_t mask, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m4_ta_vl31 )?} 1 } } */

vuint8m8_t 
test_vcompress_vm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vcompress_vm_u8m8_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m8_ta )?} 1 } } */

vuint8m8_t 
test_vcompress_vm_u8m8_ta_vl31(vbool1_t mask, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m8_ta_vl31 )?} 1 } } */

vuint16mf4_t 
test_vcompress_vm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vcompress_vm_u16mf4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf4_ta )?} 1 } } */

vuint16mf4_t 
test_vcompress_vm_u16mf4_ta_vl31(vbool64_t mask, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf4_ta_vl31 )?} 1 } } */

vuint16mf2_t 
test_vcompress_vm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vcompress_vm_u16mf2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf2_ta )?} 1 } } */

vuint16mf2_t 
test_vcompress_vm_u16mf2_ta_vl31(vbool32_t mask, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf2_ta_vl31 )?} 1 } } */

vuint16m1_t 
test_vcompress_vm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vcompress_vm_u16m1_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m1_ta )?} 1 } } */

vuint16m1_t 
test_vcompress_vm_u16m1_ta_vl31(vbool16_t mask, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m1_ta_vl31 )?} 1 } } */

vuint16m2_t 
test_vcompress_vm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vcompress_vm_u16m2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m2_ta )?} 1 } } */

vuint16m2_t 
test_vcompress_vm_u16m2_ta_vl31(vbool8_t mask, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m2_ta_vl31 )?} 1 } } */

vuint16m4_t 
test_vcompress_vm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vcompress_vm_u16m4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m4_ta )?} 1 } } */

vuint16m4_t 
test_vcompress_vm_u16m4_ta_vl31(vbool4_t mask, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m4_ta_vl31 )?} 1 } } */

vuint16m8_t 
test_vcompress_vm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vcompress_vm_u16m8_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m8_ta )?} 1 } } */

vuint16m8_t 
test_vcompress_vm_u16m8_ta_vl31(vbool2_t mask, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m8_ta_vl31 )?} 1 } } */

vuint32mf2_t 
test_vcompress_vm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vcompress_vm_u32mf2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32mf2_ta )?} 1 } } */

vuint32mf2_t 
test_vcompress_vm_u32mf2_ta_vl31(vbool64_t mask, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32mf2_ta_vl31 )?} 1 } } */

vuint32m1_t 
test_vcompress_vm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vcompress_vm_u32m1_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m1_ta )?} 1 } } */

vuint32m1_t 
test_vcompress_vm_u32m1_ta_vl31(vbool32_t mask, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m1_ta_vl31 )?} 1 } } */

vuint32m2_t 
test_vcompress_vm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vcompress_vm_u32m2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m2_ta )?} 1 } } */

vuint32m2_t 
test_vcompress_vm_u32m2_ta_vl31(vbool16_t mask, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m2_ta_vl31 )?} 1 } } */

vuint32m4_t 
test_vcompress_vm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vcompress_vm_u32m4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m4_ta )?} 1 } } */

vuint32m4_t 
test_vcompress_vm_u32m4_ta_vl31(vbool8_t mask, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m4_ta_vl31 )?} 1 } } */

vuint32m8_t 
test_vcompress_vm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vcompress_vm_u32m8_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m8_ta )?} 1 } } */

vuint32m8_t 
test_vcompress_vm_u32m8_ta_vl31(vbool4_t mask, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m8_ta_vl31 )?} 1 } } */

vuint64m1_t 
test_vcompress_vm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vcompress_vm_u64m1_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m1_ta )?} 1 } } */

vuint64m1_t 
test_vcompress_vm_u64m1_ta_vl31(vbool64_t mask, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m1_ta_vl31 )?} 1 } } */

vuint64m2_t 
test_vcompress_vm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vcompress_vm_u64m2_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m2_ta )?} 1 } } */

vuint64m2_t 
test_vcompress_vm_u64m2_ta_vl31(vbool32_t mask, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m2_ta_vl31 )?} 1 } } */

vuint64m4_t 
test_vcompress_vm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vcompress_vm_u64m4_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m4_ta )?} 1 } } */

vuint64m4_t 
test_vcompress_vm_u64m4_ta_vl31(vbool16_t mask, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m4_ta_vl31 )?} 1 } } */

vuint64m8_t 
test_vcompress_vm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vcompress_vm_u64m8_ta(mask, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m8_ta )?} 1 } } */

vuint64m8_t 
test_vcompress_vm_u64m8_ta_vl31(vbool8_t mask, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_ta(mask, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m8_ta_vl31 )?} 1 } } */

vuint8mf8_t 
test_vcompress_vm_u8mf8_tu(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1, size_t vl)
{
  return vcompress_vm_u8mf8_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf8_tu )?} 1 } } */

vuint8mf8_t 
test_vcompress_vm_u8mf8_tu_vl31(vuint8mf8_t dest, vbool64_t mask, vuint8mf8_t op1)
{
  return vcompress_vm_u8mf8_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf8_tu_vl31 )?} 1 } } */

vuint8mf4_t 
test_vcompress_vm_u8mf4_tu(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1, size_t vl)
{
  return vcompress_vm_u8mf4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf4_tu )?} 1 } } */

vuint8mf4_t 
test_vcompress_vm_u8mf4_tu_vl31(vuint8mf4_t dest, vbool32_t mask, vuint8mf4_t op1)
{
  return vcompress_vm_u8mf4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf4_tu_vl31 )?} 1 } } */

vuint8mf2_t 
test_vcompress_vm_u8mf2_tu(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1, size_t vl)
{
  return vcompress_vm_u8mf2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf2_tu )?} 1 } } */

vuint8mf2_t 
test_vcompress_vm_u8mf2_tu_vl31(vuint8mf2_t dest, vbool16_t mask, vuint8mf2_t op1)
{
  return vcompress_vm_u8mf2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8mf2_tu_vl31 )?} 1 } } */

vuint8m1_t 
test_vcompress_vm_u8m1_tu(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1, size_t vl)
{
  return vcompress_vm_u8m1_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m1_tu )?} 1 } } */

vuint8m1_t 
test_vcompress_vm_u8m1_tu_vl31(vuint8m1_t dest, vbool8_t mask, vuint8m1_t op1)
{
  return vcompress_vm_u8m1_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m1_tu_vl31 )?} 1 } } */

vuint8m2_t 
test_vcompress_vm_u8m2_tu(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1, size_t vl)
{
  return vcompress_vm_u8m2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m2_tu )?} 1 } } */

vuint8m2_t 
test_vcompress_vm_u8m2_tu_vl31(vuint8m2_t dest, vbool4_t mask, vuint8m2_t op1)
{
  return vcompress_vm_u8m2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m2_tu_vl31 )?} 1 } } */

vuint8m4_t 
test_vcompress_vm_u8m4_tu(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1, size_t vl)
{
  return vcompress_vm_u8m4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m4_tu )?} 1 } } */

vuint8m4_t 
test_vcompress_vm_u8m4_tu_vl31(vuint8m4_t dest, vbool2_t mask, vuint8m4_t op1)
{
  return vcompress_vm_u8m4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m4_tu_vl31 )?} 1 } } */

vuint8m8_t 
test_vcompress_vm_u8m8_tu(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1, size_t vl)
{
  return vcompress_vm_u8m8_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m8_tu )?} 1 } } */

vuint8m8_t 
test_vcompress_vm_u8m8_tu_vl31(vuint8m8_t dest, vbool1_t mask, vuint8m8_t op1)
{
  return vcompress_vm_u8m8_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u8m8_tu_vl31 )?} 1 } } */

vuint16mf4_t 
test_vcompress_vm_u16mf4_tu(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1, size_t vl)
{
  return vcompress_vm_u16mf4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf4_tu )?} 1 } } */

vuint16mf4_t 
test_vcompress_vm_u16mf4_tu_vl31(vuint16mf4_t dest, vbool64_t mask, vuint16mf4_t op1)
{
  return vcompress_vm_u16mf4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf4_tu_vl31 )?} 1 } } */

vuint16mf2_t 
test_vcompress_vm_u16mf2_tu(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1, size_t vl)
{
  return vcompress_vm_u16mf2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf2_tu )?} 1 } } */

vuint16mf2_t 
test_vcompress_vm_u16mf2_tu_vl31(vuint16mf2_t dest, vbool32_t mask, vuint16mf2_t op1)
{
  return vcompress_vm_u16mf2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16mf2_tu_vl31 )?} 1 } } */

vuint16m1_t 
test_vcompress_vm_u16m1_tu(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1, size_t vl)
{
  return vcompress_vm_u16m1_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m1_tu )?} 1 } } */

vuint16m1_t 
test_vcompress_vm_u16m1_tu_vl31(vuint16m1_t dest, vbool16_t mask, vuint16m1_t op1)
{
  return vcompress_vm_u16m1_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m1_tu_vl31 )?} 1 } } */

vuint16m2_t 
test_vcompress_vm_u16m2_tu(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1, size_t vl)
{
  return vcompress_vm_u16m2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m2_tu )?} 1 } } */

vuint16m2_t 
test_vcompress_vm_u16m2_tu_vl31(vuint16m2_t dest, vbool8_t mask, vuint16m2_t op1)
{
  return vcompress_vm_u16m2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m2_tu_vl31 )?} 1 } } */

vuint16m4_t 
test_vcompress_vm_u16m4_tu(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1, size_t vl)
{
  return vcompress_vm_u16m4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m4_tu )?} 1 } } */

vuint16m4_t 
test_vcompress_vm_u16m4_tu_vl31(vuint16m4_t dest, vbool4_t mask, vuint16m4_t op1)
{
  return vcompress_vm_u16m4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m4_tu_vl31 )?} 1 } } */

vuint16m8_t 
test_vcompress_vm_u16m8_tu(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1, size_t vl)
{
  return vcompress_vm_u16m8_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m8_tu )?} 1 } } */

vuint16m8_t 
test_vcompress_vm_u16m8_tu_vl31(vuint16m8_t dest, vbool2_t mask, vuint16m8_t op1)
{
  return vcompress_vm_u16m8_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u16m8_tu_vl31 )?} 1 } } */

vuint32mf2_t 
test_vcompress_vm_u32mf2_tu(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1, size_t vl)
{
  return vcompress_vm_u32mf2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32mf2_tu )?} 1 } } */

vuint32mf2_t 
test_vcompress_vm_u32mf2_tu_vl31(vuint32mf2_t dest, vbool64_t mask, vuint32mf2_t op1)
{
  return vcompress_vm_u32mf2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32mf2_tu_vl31 )?} 1 } } */

vuint32m1_t 
test_vcompress_vm_u32m1_tu(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1, size_t vl)
{
  return vcompress_vm_u32m1_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m1_tu )?} 1 } } */

vuint32m1_t 
test_vcompress_vm_u32m1_tu_vl31(vuint32m1_t dest, vbool32_t mask, vuint32m1_t op1)
{
  return vcompress_vm_u32m1_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m1_tu_vl31 )?} 1 } } */

vuint32m2_t 
test_vcompress_vm_u32m2_tu(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1, size_t vl)
{
  return vcompress_vm_u32m2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m2_tu )?} 1 } } */

vuint32m2_t 
test_vcompress_vm_u32m2_tu_vl31(vuint32m2_t dest, vbool16_t mask, vuint32m2_t op1)
{
  return vcompress_vm_u32m2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m2_tu_vl31 )?} 1 } } */

vuint32m4_t 
test_vcompress_vm_u32m4_tu(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1, size_t vl)
{
  return vcompress_vm_u32m4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m4_tu )?} 1 } } */

vuint32m4_t 
test_vcompress_vm_u32m4_tu_vl31(vuint32m4_t dest, vbool8_t mask, vuint32m4_t op1)
{
  return vcompress_vm_u32m4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m4_tu_vl31 )?} 1 } } */

vuint32m8_t 
test_vcompress_vm_u32m8_tu(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1, size_t vl)
{
  return vcompress_vm_u32m8_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m8_tu )?} 1 } } */

vuint32m8_t 
test_vcompress_vm_u32m8_tu_vl31(vuint32m8_t dest, vbool4_t mask, vuint32m8_t op1)
{
  return vcompress_vm_u32m8_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u32m8_tu_vl31 )?} 1 } } */

vuint64m1_t 
test_vcompress_vm_u64m1_tu(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1, size_t vl)
{
  return vcompress_vm_u64m1_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m1_tu )?} 1 } } */

vuint64m1_t 
test_vcompress_vm_u64m1_tu_vl31(vuint64m1_t dest, vbool64_t mask, vuint64m1_t op1)
{
  return vcompress_vm_u64m1_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m1_tu_vl31 )?} 1 } } */

vuint64m2_t 
test_vcompress_vm_u64m2_tu(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1, size_t vl)
{
  return vcompress_vm_u64m2_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m2_tu )?} 1 } } */

vuint64m2_t 
test_vcompress_vm_u64m2_tu_vl31(vuint64m2_t dest, vbool32_t mask, vuint64m2_t op1)
{
  return vcompress_vm_u64m2_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m2_tu_vl31 )?} 1 } } */

vuint64m4_t 
test_vcompress_vm_u64m4_tu(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1, size_t vl)
{
  return vcompress_vm_u64m4_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m4_tu )?} 1 } } */

vuint64m4_t 
test_vcompress_vm_u64m4_tu_vl31(vuint64m4_t dest, vbool16_t mask, vuint64m4_t op1)
{
  return vcompress_vm_u64m4_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m4_tu_vl31 )?} 1 } } */

vuint64m8_t 
test_vcompress_vm_u64m8_tu(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1, size_t vl)
{
  return vcompress_vm_u64m8_tu(mask, dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m8_tu )?} 1 } } */

vuint64m8_t 
test_vcompress_vm_u64m8_tu_vl31(vuint64m8_t dest, vbool8_t mask, vuint64m8_t op1)
{
  return vcompress_vm_u64m8_tu(mask, dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vcompress\.vm).)*\s+vcompress\.vm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vcompress_vm_u64m8_tu_vl31 )?} 1 } } */
