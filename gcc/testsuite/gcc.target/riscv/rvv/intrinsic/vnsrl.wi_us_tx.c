
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vnsrl_wx_u8mf8_ta_0(vuint16mf4_t op1, size_t vl)
{
  return vnsrl_wx_u8mf8_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf8_ta_0 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_ta_31(vuint16mf4_t op1, size_t vl)
{
  return vnsrl_wx_u8mf8_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf8_ta_31 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_ta_vl31_0(vuint16mf4_t op1)
{
  return vnsrl_wx_u8mf8_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf8_ta_vl31_0 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_ta_vl31_31(vuint16mf4_t op1)
{
  return vnsrl_wx_u8mf8_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf8_ta_vl31_31 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_ta_0(vuint16mf2_t op1, size_t vl)
{
  return vnsrl_wx_u8mf4_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf4_ta_0 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_ta_31(vuint16mf2_t op1, size_t vl)
{
  return vnsrl_wx_u8mf4_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf4_ta_31 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_ta_vl31_0(vuint16mf2_t op1)
{
  return vnsrl_wx_u8mf4_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf4_ta_vl31_0 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_ta_vl31_31(vuint16mf2_t op1)
{
  return vnsrl_wx_u8mf4_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf4_ta_vl31_31 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_ta_0(vuint16m1_t op1, size_t vl)
{
  return vnsrl_wx_u8mf2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf2_ta_0 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_ta_31(vuint16m1_t op1, size_t vl)
{
  return vnsrl_wx_u8mf2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf2_ta_31 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_ta_vl31_0(vuint16m1_t op1)
{
  return vnsrl_wx_u8mf2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf2_ta_vl31_0 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_ta_vl31_31(vuint16m1_t op1)
{
  return vnsrl_wx_u8mf2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf2_ta_vl31_31 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_ta_0(vuint16m2_t op1, size_t vl)
{
  return vnsrl_wx_u8m1_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u8m1_ta_0 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_ta_31(vuint16m2_t op1, size_t vl)
{
  return vnsrl_wx_u8m1_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u8m1_ta_31 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_ta_vl31_0(vuint16m2_t op1)
{
  return vnsrl_wx_u8m1_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u8m1_ta_vl31_0 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_ta_vl31_31(vuint16m2_t op1)
{
  return vnsrl_wx_u8m1_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u8m1_ta_vl31_31 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_ta_0(vuint16m4_t op1, size_t vl)
{
  return vnsrl_wx_u8m2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u8m2_ta_0 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_ta_31(vuint16m4_t op1, size_t vl)
{
  return vnsrl_wx_u8m2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u8m2_ta_31 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_ta_vl31_0(vuint16m4_t op1)
{
  return vnsrl_wx_u8m2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u8m2_ta_vl31_0 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_ta_vl31_31(vuint16m4_t op1)
{
  return vnsrl_wx_u8m2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u8m2_ta_vl31_31 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_ta_0(vuint16m8_t op1, size_t vl)
{
  return vnsrl_wx_u8m4_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u8m4_ta_0 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_ta_31(vuint16m8_t op1, size_t vl)
{
  return vnsrl_wx_u8m4_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u8m4_ta_31 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_ta_vl31_0(vuint16m8_t op1)
{
  return vnsrl_wx_u8m4_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u8m4_ta_vl31_0 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_ta_vl31_31(vuint16m8_t op1)
{
  return vnsrl_wx_u8m4_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u8m4_ta_vl31_31 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_ta_0(vuint32mf2_t op1, size_t vl)
{
  return vnsrl_wx_u16mf4_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf4_ta_0 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_ta_31(vuint32mf2_t op1, size_t vl)
{
  return vnsrl_wx_u16mf4_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf4_ta_31 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_ta_vl31_0(vuint32mf2_t op1)
{
  return vnsrl_wx_u16mf4_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf4_ta_vl31_0 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_ta_vl31_31(vuint32mf2_t op1)
{
  return vnsrl_wx_u16mf4_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf4_ta_vl31_31 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_ta_0(vuint32m1_t op1, size_t vl)
{
  return vnsrl_wx_u16mf2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf2_ta_0 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_ta_31(vuint32m1_t op1, size_t vl)
{
  return vnsrl_wx_u16mf2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf2_ta_31 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_ta_vl31_0(vuint32m1_t op1)
{
  return vnsrl_wx_u16mf2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf2_ta_vl31_0 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_ta_vl31_31(vuint32m1_t op1)
{
  return vnsrl_wx_u16mf2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf2_ta_vl31_31 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_ta_0(vuint32m2_t op1, size_t vl)
{
  return vnsrl_wx_u16m1_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u16m1_ta_0 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_ta_31(vuint32m2_t op1, size_t vl)
{
  return vnsrl_wx_u16m1_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u16m1_ta_31 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_ta_vl31_0(vuint32m2_t op1)
{
  return vnsrl_wx_u16m1_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u16m1_ta_vl31_0 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_ta_vl31_31(vuint32m2_t op1)
{
  return vnsrl_wx_u16m1_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u16m1_ta_vl31_31 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_ta_0(vuint32m4_t op1, size_t vl)
{
  return vnsrl_wx_u16m2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u16m2_ta_0 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_ta_31(vuint32m4_t op1, size_t vl)
{
  return vnsrl_wx_u16m2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u16m2_ta_31 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_ta_vl31_0(vuint32m4_t op1)
{
  return vnsrl_wx_u16m2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u16m2_ta_vl31_0 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_ta_vl31_31(vuint32m4_t op1)
{
  return vnsrl_wx_u16m2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u16m2_ta_vl31_31 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_ta_0(vuint32m8_t op1, size_t vl)
{
  return vnsrl_wx_u16m4_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u16m4_ta_0 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_ta_31(vuint32m8_t op1, size_t vl)
{
  return vnsrl_wx_u16m4_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u16m4_ta_31 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_ta_vl31_0(vuint32m8_t op1)
{
  return vnsrl_wx_u16m4_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u16m4_ta_vl31_0 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_ta_vl31_31(vuint32m8_t op1)
{
  return vnsrl_wx_u16m4_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u16m4_ta_vl31_31 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_ta_0(vuint64m1_t op1, size_t vl)
{
  return vnsrl_wx_u32mf2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u32mf2_ta_0 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_ta_31(vuint64m1_t op1, size_t vl)
{
  return vnsrl_wx_u32mf2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u32mf2_ta_31 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_ta_vl31_0(vuint64m1_t op1)
{
  return vnsrl_wx_u32mf2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u32mf2_ta_vl31_0 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_ta_vl31_31(vuint64m1_t op1)
{
  return vnsrl_wx_u32mf2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u32mf2_ta_vl31_31 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_ta_0(vuint64m2_t op1, size_t vl)
{
  return vnsrl_wx_u32m1_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u32m1_ta_0 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_ta_31(vuint64m2_t op1, size_t vl)
{
  return vnsrl_wx_u32m1_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u32m1_ta_31 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_ta_vl31_0(vuint64m2_t op1)
{
  return vnsrl_wx_u32m1_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u32m1_ta_vl31_0 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_ta_vl31_31(vuint64m2_t op1)
{
  return vnsrl_wx_u32m1_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u32m1_ta_vl31_31 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_ta_0(vuint64m4_t op1, size_t vl)
{
  return vnsrl_wx_u32m2_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u32m2_ta_0 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_ta_31(vuint64m4_t op1, size_t vl)
{
  return vnsrl_wx_u32m2_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u32m2_ta_31 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_ta_vl31_0(vuint64m4_t op1)
{
  return vnsrl_wx_u32m2_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u32m2_ta_vl31_0 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_ta_vl31_31(vuint64m4_t op1)
{
  return vnsrl_wx_u32m2_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u32m2_ta_vl31_31 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_ta_0(vuint64m8_t op1, size_t vl)
{
  return vnsrl_wx_u32m4_ta(op1, 0, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u32m4_ta_0 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_ta_31(vuint64m8_t op1, size_t vl)
{
  return vnsrl_wx_u32m4_ta(op1, 31, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u32m4_ta_31 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_ta_vl31_0(vuint64m8_t op1)
{
  return vnsrl_wx_u32m4_ta(op1, 0, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u32m4_ta_vl31_0 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_ta_vl31_31(vuint64m8_t op1)
{
  return vnsrl_wx_u32m4_ta(op1, 31, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u32m4_ta_vl31_31 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_tu_0(vuint8mf8_t dest, vuint16mf4_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf8_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf8_tu_0 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_tu_31(vuint8mf8_t dest, vuint16mf4_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf8_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf8_tu_31 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_tu_vl31_0(vuint8mf8_t dest, vuint16mf4_t op1)
{
  dest = vnsrl_wx_u8mf8_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf8_tu_vl31_0 )?} 1 } } */

vuint8mf8_t 
test_vnsrl_wx_u8mf8_tu_vl31_31(vuint8mf8_t dest, vuint16mf4_t op1)
{
  dest = vnsrl_wx_u8mf8_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf8_tu_vl31_31 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_tu_0(vuint8mf4_t dest, vuint16mf2_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf4_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf4_tu_0 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_tu_31(vuint8mf4_t dest, vuint16mf2_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf4_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf4_tu_31 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_tu_vl31_0(vuint8mf4_t dest, vuint16mf2_t op1)
{
  dest = vnsrl_wx_u8mf4_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf4_tu_vl31_0 )?} 1 } } */

vuint8mf4_t 
test_vnsrl_wx_u8mf4_tu_vl31_31(vuint8mf4_t dest, vuint16mf2_t op1)
{
  dest = vnsrl_wx_u8mf4_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf4_tu_vl31_31 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_tu_0(vuint8mf2_t dest, vuint16m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf2_tu_0 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_tu_31(vuint8mf2_t dest, vuint16m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u8mf2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf2_tu_31 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_tu_vl31_0(vuint8mf2_t dest, vuint16m1_t op1)
{
  dest = vnsrl_wx_u8mf2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u8mf2_tu_vl31_0 )?} 1 } } */

vuint8mf2_t 
test_vnsrl_wx_u8mf2_tu_vl31_31(vuint8mf2_t dest, vuint16m1_t op1)
{
  dest = vnsrl_wx_u8mf2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u8mf2_tu_vl31_31 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_tu_0(vuint8m1_t dest, vuint16m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m1_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u8m1_tu_0 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_tu_31(vuint8m1_t dest, vuint16m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m1_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u8m1_tu_31 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_tu_vl31_0(vuint8m1_t dest, vuint16m2_t op1)
{
  dest = vnsrl_wx_u8m1_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u8m1_tu_vl31_0 )?} 1 } } */

vuint8m1_t 
test_vnsrl_wx_u8m1_tu_vl31_31(vuint8m1_t dest, vuint16m2_t op1)
{
  dest = vnsrl_wx_u8m1_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u8m1_tu_vl31_31 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_tu_0(vuint8m2_t dest, vuint16m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u8m2_tu_0 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_tu_31(vuint8m2_t dest, vuint16m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u8m2_tu_31 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_tu_vl31_0(vuint8m2_t dest, vuint16m4_t op1)
{
  dest = vnsrl_wx_u8m2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u8m2_tu_vl31_0 )?} 1 } } */

vuint8m2_t 
test_vnsrl_wx_u8m2_tu_vl31_31(vuint8m2_t dest, vuint16m4_t op1)
{
  dest = vnsrl_wx_u8m2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u8m2_tu_vl31_31 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_tu_0(vuint8m4_t dest, vuint16m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m4_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u8m4_tu_0 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_tu_31(vuint8m4_t dest, vuint16m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u8m4_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u8m4_tu_31 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_tu_vl31_0(vuint8m4_t dest, vuint16m8_t op1)
{
  dest = vnsrl_wx_u8m4_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u8m4_tu_vl31_0 )?} 1 } } */

vuint8m4_t 
test_vnsrl_wx_u8m4_tu_vl31_31(vuint8m4_t dest, vuint16m8_t op1)
{
  dest = vnsrl_wx_u8m4_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u8m4_tu_vl31_31 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_tu_0(vuint16mf4_t dest, vuint32mf2_t op1, size_t vl)
{
  dest = vnsrl_wx_u16mf4_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf4_tu_0 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_tu_31(vuint16mf4_t dest, vuint32mf2_t op1, size_t vl)
{
  dest = vnsrl_wx_u16mf4_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf4_tu_31 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_tu_vl31_0(vuint16mf4_t dest, vuint32mf2_t op1)
{
  dest = vnsrl_wx_u16mf4_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf4_tu_vl31_0 )?} 1 } } */

vuint16mf4_t 
test_vnsrl_wx_u16mf4_tu_vl31_31(vuint16mf4_t dest, vuint32mf2_t op1)
{
  dest = vnsrl_wx_u16mf4_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf4_tu_vl31_31 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_tu_0(vuint16mf2_t dest, vuint32m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u16mf2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf2_tu_0 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_tu_31(vuint16mf2_t dest, vuint32m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u16mf2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf2_tu_31 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_tu_vl31_0(vuint16mf2_t dest, vuint32m1_t op1)
{
  dest = vnsrl_wx_u16mf2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u16mf2_tu_vl31_0 )?} 1 } } */

vuint16mf2_t 
test_vnsrl_wx_u16mf2_tu_vl31_31(vuint16mf2_t dest, vuint32m1_t op1)
{
  dest = vnsrl_wx_u16mf2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u16mf2_tu_vl31_31 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_tu_0(vuint16m1_t dest, vuint32m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m1_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u16m1_tu_0 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_tu_31(vuint16m1_t dest, vuint32m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m1_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u16m1_tu_31 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_tu_vl31_0(vuint16m1_t dest, vuint32m2_t op1)
{
  dest = vnsrl_wx_u16m1_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u16m1_tu_vl31_0 )?} 1 } } */

vuint16m1_t 
test_vnsrl_wx_u16m1_tu_vl31_31(vuint16m1_t dest, vuint32m2_t op1)
{
  dest = vnsrl_wx_u16m1_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u16m1_tu_vl31_31 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_tu_0(vuint16m2_t dest, vuint32m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u16m2_tu_0 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_tu_31(vuint16m2_t dest, vuint32m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u16m2_tu_31 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_tu_vl31_0(vuint16m2_t dest, vuint32m4_t op1)
{
  dest = vnsrl_wx_u16m2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u16m2_tu_vl31_0 )?} 1 } } */

vuint16m2_t 
test_vnsrl_wx_u16m2_tu_vl31_31(vuint16m2_t dest, vuint32m4_t op1)
{
  dest = vnsrl_wx_u16m2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u16m2_tu_vl31_31 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_tu_0(vuint16m4_t dest, vuint32m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m4_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u16m4_tu_0 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_tu_31(vuint16m4_t dest, vuint32m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u16m4_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u16m4_tu_31 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_tu_vl31_0(vuint16m4_t dest, vuint32m8_t op1)
{
  dest = vnsrl_wx_u16m4_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u16m4_tu_vl31_0 )?} 1 } } */

vuint16m4_t 
test_vnsrl_wx_u16m4_tu_vl31_31(vuint16m4_t dest, vuint32m8_t op1)
{
  dest = vnsrl_wx_u16m4_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u16m4_tu_vl31_31 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_tu_0(vuint32mf2_t dest, vuint64m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u32mf2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u32mf2_tu_0 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_tu_31(vuint32mf2_t dest, vuint64m1_t op1, size_t vl)
{
  dest = vnsrl_wx_u32mf2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u32mf2_tu_31 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_tu_vl31_0(vuint32mf2_t dest, vuint64m1_t op1)
{
  dest = vnsrl_wx_u32mf2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vnsrl_wx_u32mf2_tu_vl31_0 )?} 1 } } */

vuint32mf2_t 
test_vnsrl_wx_u32mf2_tu_vl31_31(vuint32mf2_t dest, vuint64m1_t op1)
{
  dest = vnsrl_wx_u32mf2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vnsrl_wx_u32mf2_tu_vl31_31 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_tu_0(vuint32m1_t dest, vuint64m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m1_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u32m1_tu_0 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_tu_31(vuint32m1_t dest, vuint64m2_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m1_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u32m1_tu_31 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_tu_vl31_0(vuint32m1_t dest, vuint64m2_t op1)
{
  dest = vnsrl_wx_u32m1_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vnsrl_wx_u32m1_tu_vl31_0 )?} 1 } } */

vuint32m1_t 
test_vnsrl_wx_u32m1_tu_vl31_31(vuint32m1_t dest, vuint64m2_t op1)
{
  dest = vnsrl_wx_u32m1_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vnsrl_wx_u32m1_tu_vl31_31 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_tu_0(vuint32m2_t dest, vuint64m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m2_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u32m2_tu_0 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_tu_31(vuint32m2_t dest, vuint64m4_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m2_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u32m2_tu_31 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_tu_vl31_0(vuint32m2_t dest, vuint64m4_t op1)
{
  dest = vnsrl_wx_u32m2_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vnsrl_wx_u32m2_tu_vl31_0 )?} 1 } } */

vuint32m2_t 
test_vnsrl_wx_u32m2_tu_vl31_31(vuint32m2_t dest, vuint64m4_t op1)
{
  dest = vnsrl_wx_u32m2_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vnsrl_wx_u32m2_tu_vl31_31 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_tu_0(vuint32m4_t dest, vuint64m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m4_tu(dest, op1, 0, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u32m4_tu_0 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_tu_31(vuint32m4_t dest, vuint64m8_t op1, size_t vl)
{
  dest = vnsrl_wx_u32m4_tu(dest, op1, 31, vl);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u32m4_tu_31 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_tu_vl31_0(vuint32m4_t dest, vuint64m8_t op1)
{
  dest = vnsrl_wx_u32m4_tu(dest, op1, 0, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vnsrl_wx_u32m4_tu_vl31_0 )?} 1 } } */

vuint32m4_t 
test_vnsrl_wx_u32m4_tu_vl31_31(vuint32m4_t dest, vuint64m8_t op1)
{
  dest = vnsrl_wx_u32m4_tu(dest, op1, 31, 31);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vnsrl\.wi).)*\s+vnsrl\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vnsrl_wx_u32m4_tu_vl31_31 )?} 1 } } */
