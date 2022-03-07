
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m1_t 
test_vredsum_vs_i8mf8_i8m1(vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8mf8_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf8_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8mf8_i8m1_vl31(vint8mf8_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8mf8_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf8_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8mf4_i8m1(vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8mf4_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf4_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8mf4_i8m1_vl31(vint8mf4_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8mf4_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf4_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8mf2_i8m1(vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8mf2_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf2_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8mf2_i8m1_vl31(vint8mf2_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8mf2_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8mf2_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m1_i8m1(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8m1_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m1_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m1_i8m1_vl31(vint8m1_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8m1_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m1_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m2_i8m1(vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8m2_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m2_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m2_i8m1_vl31(vint8m2_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8m2_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m2_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m4_i8m1(vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8m4_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m4_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m4_i8m1_vl31(vint8m4_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8m4_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m4_i8m1_vl31 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m8_i8m1(vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredsum_vs_i8m8_i8m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m8_i8m1 )?} 1 } } */

vint8m1_t 
test_vredsum_vs_i8m8_i8m1_vl31(vint8m8_t op1, vint8m1_t op2)
{
  return vredsum_vs_i8m8_i8m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i8m8_i8m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16mf4_i16m1(vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16mf4_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16mf4_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16mf4_i16m1_vl31(vint16mf4_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16mf4_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16mf4_i16m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16mf2_i16m1(vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16mf2_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16mf2_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16mf2_i16m1_vl31(vint16mf2_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16mf2_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16mf2_i16m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m1_i16m1(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16m1_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m1_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m1_i16m1_vl31(vint16m1_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16m1_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m1_i16m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m2_i16m1(vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16m2_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m2_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m2_i16m1_vl31(vint16m2_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16m2_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m2_i16m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m4_i16m1(vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16m4_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m4_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m4_i16m1_vl31(vint16m4_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16m4_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m4_i16m1_vl31 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m8_i16m1(vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredsum_vs_i16m8_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m8_i16m1 )?} 1 } } */

vint16m1_t 
test_vredsum_vs_i16m8_i16m1_vl31(vint16m8_t op1, vint16m1_t op2)
{
  return vredsum_vs_i16m8_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i16m8_i16m1_vl31 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32mf2_i32m1(vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredsum_vs_i32mf2_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32mf2_i32m1 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32mf2_i32m1_vl31(vint32mf2_t op1, vint32m1_t op2)
{
  return vredsum_vs_i32mf2_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32mf2_i32m1_vl31 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m1_i32m1(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredsum_vs_i32m1_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m1_i32m1 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m1_i32m1_vl31(vint32m1_t op1, vint32m1_t op2)
{
  return vredsum_vs_i32m1_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m1_i32m1_vl31 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m2_i32m1(vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredsum_vs_i32m2_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m2_i32m1 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m2_i32m1_vl31(vint32m2_t op1, vint32m1_t op2)
{
  return vredsum_vs_i32m2_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m2_i32m1_vl31 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m4_i32m1(vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredsum_vs_i32m4_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m4_i32m1 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m4_i32m1_vl31(vint32m4_t op1, vint32m1_t op2)
{
  return vredsum_vs_i32m4_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m4_i32m1_vl31 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m8_i32m1(vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredsum_vs_i32m8_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m8_i32m1 )?} 1 } } */

vint32m1_t 
test_vredsum_vs_i32m8_i32m1_vl31(vint32m8_t op1, vint32m1_t op2)
{
  return vredsum_vs_i32m8_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i32m8_i32m1_vl31 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m1_i64m1(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredsum_vs_i64m1_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m1_i64m1 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m1_i64m1_vl31(vint64m1_t op1, vint64m1_t op2)
{
  return vredsum_vs_i64m1_i64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m1_i64m1_vl31 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m2_i64m1(vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredsum_vs_i64m2_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m2_i64m1 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m2_i64m1_vl31(vint64m2_t op1, vint64m1_t op2)
{
  return vredsum_vs_i64m2_i64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m2_i64m1_vl31 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m4_i64m1(vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredsum_vs_i64m4_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m4_i64m1 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m4_i64m1_vl31(vint64m4_t op1, vint64m1_t op2)
{
  return vredsum_vs_i64m4_i64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m4_i64m1_vl31 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m8_i64m1(vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredsum_vs_i64m8_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m8_i64m1 )?} 1 } } */

vint64m1_t 
test_vredsum_vs_i64m8_i64m1_vl31(vint64m8_t op1, vint64m1_t op2)
{
  return vredsum_vs_i64m8_i64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vredsum\.vs).)*\s+vredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vredsum_vs_i64m8_i64m1_vl31 )?} 1 } } */
