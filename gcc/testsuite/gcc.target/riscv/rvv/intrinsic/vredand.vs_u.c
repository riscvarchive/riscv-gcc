
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m1_t 
test_vredand_vs_u8mf8_u8m1(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8mf8_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf8_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8mf8_u8m1_vl31(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8mf8_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf8_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8mf4_u8m1(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8mf4_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf4_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8mf4_u8m1_vl31(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8mf4_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf4_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8mf2_u8m1(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8mf2_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf2_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8mf2_u8m1_vl31(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8mf2_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8mf2_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m1_u8m1(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8m1_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m1_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m1_u8m1_vl31(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8m1_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m1_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m2_u8m1(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8m2_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m2_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m2_u8m1_vl31(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8m2_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m2_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m4_u8m1(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8m4_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m4_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m4_u8m1_vl31(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8m4_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m4_u8m1_vl31 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m8_u8m1(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredand_vs_u8m8_u8m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m8_u8m1 )?} 1 } } */

vuint8m1_t 
test_vredand_vs_u8m8_u8m1_vl31(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredand_vs_u8m8_u8m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u8m8_u8m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16mf4_u16m1(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16mf4_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16mf4_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16mf4_u16m1_vl31(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16mf4_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16mf4_u16m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16mf2_u16m1(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16mf2_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16mf2_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16mf2_u16m1_vl31(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16mf2_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16mf2_u16m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m1_u16m1(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16m1_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m1_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m1_u16m1_vl31(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16m1_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m1_u16m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m2_u16m1(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16m2_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m2_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m2_u16m1_vl31(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16m2_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m2_u16m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m4_u16m1(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16m4_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m4_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m4_u16m1_vl31(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16m4_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m4_u16m1_vl31 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m8_u16m1(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredand_vs_u16m8_u16m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m8_u16m1 )?} 1 } } */

vuint16m1_t 
test_vredand_vs_u16m8_u16m1_vl31(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredand_vs_u16m8_u16m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u16m8_u16m1_vl31 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32mf2_u32m1(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredand_vs_u32mf2_u32m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32mf2_u32m1 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32mf2_u32m1_vl31(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredand_vs_u32mf2_u32m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32mf2_u32m1_vl31 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m1_u32m1(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredand_vs_u32m1_u32m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m1_u32m1 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m1_u32m1_vl31(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredand_vs_u32m1_u32m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m1_u32m1_vl31 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m2_u32m1(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredand_vs_u32m2_u32m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m2_u32m1 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m2_u32m1_vl31(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredand_vs_u32m2_u32m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m2_u32m1_vl31 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m4_u32m1(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredand_vs_u32m4_u32m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m4_u32m1 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m4_u32m1_vl31(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredand_vs_u32m4_u32m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m4_u32m1_vl31 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m8_u32m1(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredand_vs_u32m8_u32m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m8_u32m1 )?} 1 } } */

vuint32m1_t 
test_vredand_vs_u32m8_u32m1_vl31(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredand_vs_u32m8_u32m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u32m8_u32m1_vl31 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m1_u64m1(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredand_vs_u64m1_u64m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m1_u64m1 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m1_u64m1_vl31(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredand_vs_u64m1_u64m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m1_u64m1_vl31 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m2_u64m1(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredand_vs_u64m2_u64m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m2_u64m1 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m2_u64m1_vl31(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredand_vs_u64m2_u64m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m2_u64m1_vl31 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m4_u64m1(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredand_vs_u64m4_u64m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m4_u64m1 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m4_u64m1_vl31(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredand_vs_u64m4_u64m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m4_u64m1_vl31 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m8_u64m1(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredand_vs_u64m8_u64m1(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m8_u64m1 )?} 1 } } */

vuint64m1_t 
test_vredand_vs_u64m8_u64m1_vl31(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredand_vs_u64m8_u64m1(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredand\.vs).)*\s+vredand\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredand_vs_u64m8_u64m1_vl31 )?} 1 } } */
