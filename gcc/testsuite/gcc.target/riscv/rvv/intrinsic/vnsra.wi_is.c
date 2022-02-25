
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8mf8_t 
test_vnsra_wx_i8mf8_0(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf8_0 )?} 1 } } */

vint8mf8_t 
test_vnsra_wx_i8mf8_31(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf8_31 )?} 1 } } */

vint8mf8_t 
test_vnsra_wx_i8mf8_vl31_0(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf8_vl31_0 )?} 1 } } */

vint8mf8_t 
test_vnsra_wx_i8mf8_vl31_31(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf8_vl31_31 )?} 1 } } */

vint8mf4_t 
test_vnsra_wx_i8mf4_0(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf4_0 )?} 1 } } */

vint8mf4_t 
test_vnsra_wx_i8mf4_31(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf4_31 )?} 1 } } */

vint8mf4_t 
test_vnsra_wx_i8mf4_vl31_0(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf4_vl31_0 )?} 1 } } */

vint8mf4_t 
test_vnsra_wx_i8mf4_vl31_31(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf4_vl31_31 )?} 1 } } */

vint8mf2_t 
test_vnsra_wx_i8mf2_0(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf2_0 )?} 1 } } */

vint8mf2_t 
test_vnsra_wx_i8mf2_31(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf2_31 )?} 1 } } */

vint8mf2_t 
test_vnsra_wx_i8mf2_vl31_0(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i8mf2_vl31_0 )?} 1 } } */

vint8mf2_t 
test_vnsra_wx_i8mf2_vl31_31(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i8mf2_vl31_31 )?} 1 } } */

vint8m1_t 
test_vnsra_wx_i8m1_0(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i8m1_0 )?} 1 } } */

vint8m1_t 
test_vnsra_wx_i8m1_31(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i8m1_31 )?} 1 } } */

vint8m1_t 
test_vnsra_wx_i8m1_vl31_0(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i8m1_vl31_0 )?} 1 } } */

vint8m1_t 
test_vnsra_wx_i8m1_vl31_31(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i8m1_vl31_31 )?} 1 } } */

vint8m2_t 
test_vnsra_wx_i8m2_0(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i8m2_0 )?} 1 } } */

vint8m2_t 
test_vnsra_wx_i8m2_31(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i8m2_31 )?} 1 } } */

vint8m2_t 
test_vnsra_wx_i8m2_vl31_0(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i8m2_vl31_0 )?} 1 } } */

vint8m2_t 
test_vnsra_wx_i8m2_vl31_31(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i8m2_vl31_31 )?} 1 } } */

vint8m4_t 
test_vnsra_wx_i8m4_0(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i8m4_0 )?} 1 } } */

vint8m4_t 
test_vnsra_wx_i8m4_31(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i8m4_31 )?} 1 } } */

vint8m4_t 
test_vnsra_wx_i8m4_vl31_0(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i8m4_vl31_0 )?} 1 } } */

vint8m4_t 
test_vnsra_wx_i8m4_vl31_31(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i8m4_vl31_31 )?} 1 } } */

vint16mf4_t 
test_vnsra_wx_i16mf4_0(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i16mf4_0 )?} 1 } } */

vint16mf4_t 
test_vnsra_wx_i16mf4_31(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i16mf4_31 )?} 1 } } */

vint16mf4_t 
test_vnsra_wx_i16mf4_vl31_0(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i16mf4_vl31_0 )?} 1 } } */

vint16mf4_t 
test_vnsra_wx_i16mf4_vl31_31(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i16mf4_vl31_31 )?} 1 } } */

vint16mf2_t 
test_vnsra_wx_i16mf2_0(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i16mf2_0 )?} 1 } } */

vint16mf2_t 
test_vnsra_wx_i16mf2_31(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i16mf2_31 )?} 1 } } */

vint16mf2_t 
test_vnsra_wx_i16mf2_vl31_0(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i16mf2_vl31_0 )?} 1 } } */

vint16mf2_t 
test_vnsra_wx_i16mf2_vl31_31(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i16mf2_vl31_31 )?} 1 } } */

vint16m1_t 
test_vnsra_wx_i16m1_0(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i16m1_0 )?} 1 } } */

vint16m1_t 
test_vnsra_wx_i16m1_31(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i16m1_31 )?} 1 } } */

vint16m1_t 
test_vnsra_wx_i16m1_vl31_0(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i16m1_vl31_0 )?} 1 } } */

vint16m1_t 
test_vnsra_wx_i16m1_vl31_31(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i16m1_vl31_31 )?} 1 } } */

vint16m2_t 
test_vnsra_wx_i16m2_0(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i16m2_0 )?} 1 } } */

vint16m2_t 
test_vnsra_wx_i16m2_31(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i16m2_31 )?} 1 } } */

vint16m2_t 
test_vnsra_wx_i16m2_vl31_0(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i16m2_vl31_0 )?} 1 } } */

vint16m2_t 
test_vnsra_wx_i16m2_vl31_31(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i16m2_vl31_31 )?} 1 } } */

vint16m4_t 
test_vnsra_wx_i16m4_0(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i16m4_0 )?} 1 } } */

vint16m4_t 
test_vnsra_wx_i16m4_31(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i16m4_31 )?} 1 } } */

vint16m4_t 
test_vnsra_wx_i16m4_vl31_0(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i16m4_vl31_0 )?} 1 } } */

vint16m4_t 
test_vnsra_wx_i16m4_vl31_31(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i16m4_vl31_31 )?} 1 } } */

vint32mf2_t 
test_vnsra_wx_i32mf2_0(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i32mf2_0 )?} 1 } } */

vint32mf2_t 
test_vnsra_wx_i32mf2_31(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i32mf2_31 )?} 1 } } */

vint32mf2_t 
test_vnsra_wx_i32mf2_vl31_0(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsra_wx_i32mf2_vl31_0 )?} 1 } } */

vint32mf2_t 
test_vnsra_wx_i32mf2_vl31_31(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsra_wx_i32mf2_vl31_31 )?} 1 } } */

vint32m1_t 
test_vnsra_wx_i32m1_0(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i32m1_0 )?} 1 } } */

vint32m1_t 
test_vnsra_wx_i32m1_31(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i32m1_31 )?} 1 } } */

vint32m1_t 
test_vnsra_wx_i32m1_vl31_0(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsra_wx_i32m1_vl31_0 )?} 1 } } */

vint32m1_t 
test_vnsra_wx_i32m1_vl31_31(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsra_wx_i32m1_vl31_31 )?} 1 } } */

vint32m2_t 
test_vnsra_wx_i32m2_0(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i32m2_0 )?} 1 } } */

vint32m2_t 
test_vnsra_wx_i32m2_31(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i32m2_31 )?} 1 } } */

vint32m2_t 
test_vnsra_wx_i32m2_vl31_0(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsra_wx_i32m2_vl31_0 )?} 1 } } */

vint32m2_t 
test_vnsra_wx_i32m2_vl31_31(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsra_wx_i32m2_vl31_31 )?} 1 } } */

vint32m4_t 
test_vnsra_wx_i32m4_0(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i32m4_0 )?} 1 } } */

vint32m4_t 
test_vnsra_wx_i32m4_31(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i32m4_31 )?} 1 } } */

vint32m4_t 
test_vnsra_wx_i32m4_vl31_0(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsra_wx_i32m4_vl31_0 )?} 1 } } */

vint32m4_t 
test_vnsra_wx_i32m4_vl31_31(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vnsra\.wi).)*\s+vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsra_wx_i32m4_vl31_31 )?} 1 } } */
