
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vslidedown_vx_u8mf8_vl32_0(vuint8mf8_t dest, vuint8mf8_t op1)
{
  dest = vslidedown_vx_u8mf8(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u8mf8_vl32_0 )?} 1 } } */

vuint8mf8_t 
test_vslidedown_vx_u8mf8_vl32_31(vuint8mf8_t dest, vuint8mf8_t op1)
{
  dest = vslidedown_vx_u8mf8(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u8mf8_vl32_31 )?} 1 } } */

vuint8mf4_t 
test_vslidedown_vx_u8mf4_vl32_0(vuint8mf4_t dest, vuint8mf4_t op1)
{
  dest = vslidedown_vx_u8mf4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u8mf4_vl32_0 )?} 1 } } */

vuint8mf4_t 
test_vslidedown_vx_u8mf4_vl32_31(vuint8mf4_t dest, vuint8mf4_t op1)
{
  dest = vslidedown_vx_u8mf4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u8mf4_vl32_31 )?} 1 } } */

vuint8mf2_t 
test_vslidedown_vx_u8mf2_vl32_0(vuint8mf2_t dest, vuint8mf2_t op1)
{
  dest = vslidedown_vx_u8mf2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u8mf2_vl32_0 )?} 1 } } */

vuint8mf2_t 
test_vslidedown_vx_u8mf2_vl32_31(vuint8mf2_t dest, vuint8mf2_t op1)
{
  dest = vslidedown_vx_u8mf2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u8mf2_vl32_31 )?} 1 } } */

vuint8m1_t 
test_vslidedown_vx_u8m1_vl32_0(vuint8m1_t dest, vuint8m1_t op1)
{
  dest = vslidedown_vx_u8m1(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u8m1_vl32_0 )?} 1 } } */

vuint8m1_t 
test_vslidedown_vx_u8m1_vl32_31(vuint8m1_t dest, vuint8m1_t op1)
{
  dest = vslidedown_vx_u8m1(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u8m1_vl32_31 )?} 1 } } */

vuint8m2_t 
test_vslidedown_vx_u8m2_vl32_0(vuint8m2_t dest, vuint8m2_t op1)
{
  dest = vslidedown_vx_u8m2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vslidedown_vx_u8m2_vl32_0 )?} 1 } } */

vuint8m2_t 
test_vslidedown_vx_u8m2_vl32_31(vuint8m2_t dest, vuint8m2_t op1)
{
  dest = vslidedown_vx_u8m2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vslidedown_vx_u8m2_vl32_31 )?} 1 } } */

vuint8m4_t 
test_vslidedown_vx_u8m4_vl32_0(vuint8m4_t dest, vuint8m4_t op1)
{
  dest = vslidedown_vx_u8m4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vslidedown_vx_u8m4_vl32_0 )?} 1 } } */

vuint8m4_t 
test_vslidedown_vx_u8m4_vl32_31(vuint8m4_t dest, vuint8m4_t op1)
{
  dest = vslidedown_vx_u8m4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vslidedown_vx_u8m4_vl32_31 )?} 1 } } */

vuint8m8_t 
test_vslidedown_vx_u8m8_vl32_0(vuint8m8_t dest, vuint8m8_t op1)
{
  dest = vslidedown_vx_u8m8(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vslidedown_vx_u8m8_vl32_0 )?} 1 } } */

vuint8m8_t 
test_vslidedown_vx_u8m8_vl32_31(vuint8m8_t dest, vuint8m8_t op1)
{
  dest = vslidedown_vx_u8m8(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vslidedown_vx_u8m8_vl32_31 )?} 1 } } */

vuint16mf4_t 
test_vslidedown_vx_u16mf4_vl32_0(vuint16mf4_t dest, vuint16mf4_t op1)
{
  dest = vslidedown_vx_u16mf4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u16mf4_vl32_0 )?} 1 } } */

vuint16mf4_t 
test_vslidedown_vx_u16mf4_vl32_31(vuint16mf4_t dest, vuint16mf4_t op1)
{
  dest = vslidedown_vx_u16mf4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u16mf4_vl32_31 )?} 1 } } */

vuint16mf2_t 
test_vslidedown_vx_u16mf2_vl32_0(vuint16mf2_t dest, vuint16mf2_t op1)
{
  dest = vslidedown_vx_u16mf2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u16mf2_vl32_0 )?} 1 } } */

vuint16mf2_t 
test_vslidedown_vx_u16mf2_vl32_31(vuint16mf2_t dest, vuint16mf2_t op1)
{
  dest = vslidedown_vx_u16mf2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u16mf2_vl32_31 )?} 1 } } */

vuint16m1_t 
test_vslidedown_vx_u16m1_vl32_0(vuint16m1_t dest, vuint16m1_t op1)
{
  dest = vslidedown_vx_u16m1(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u16m1_vl32_0 )?} 1 } } */

vuint16m1_t 
test_vslidedown_vx_u16m1_vl32_31(vuint16m1_t dest, vuint16m1_t op1)
{
  dest = vslidedown_vx_u16m1(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u16m1_vl32_31 )?} 1 } } */

vuint16m2_t 
test_vslidedown_vx_u16m2_vl32_0(vuint16m2_t dest, vuint16m2_t op1)
{
  dest = vslidedown_vx_u16m2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vslidedown_vx_u16m2_vl32_0 )?} 1 } } */

vuint16m2_t 
test_vslidedown_vx_u16m2_vl32_31(vuint16m2_t dest, vuint16m2_t op1)
{
  dest = vslidedown_vx_u16m2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vslidedown_vx_u16m2_vl32_31 )?} 1 } } */

vuint16m4_t 
test_vslidedown_vx_u16m4_vl32_0(vuint16m4_t dest, vuint16m4_t op1)
{
  dest = vslidedown_vx_u16m4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vslidedown_vx_u16m4_vl32_0 )?} 1 } } */

vuint16m4_t 
test_vslidedown_vx_u16m4_vl32_31(vuint16m4_t dest, vuint16m4_t op1)
{
  dest = vslidedown_vx_u16m4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vslidedown_vx_u16m4_vl32_31 )?} 1 } } */

vuint16m8_t 
test_vslidedown_vx_u16m8_vl32_0(vuint16m8_t dest, vuint16m8_t op1)
{
  dest = vslidedown_vx_u16m8(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vslidedown_vx_u16m8_vl32_0 )?} 1 } } */

vuint16m8_t 
test_vslidedown_vx_u16m8_vl32_31(vuint16m8_t dest, vuint16m8_t op1)
{
  dest = vslidedown_vx_u16m8(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vslidedown_vx_u16m8_vl32_31 )?} 1 } } */

vuint32mf2_t 
test_vslidedown_vx_u32mf2_vl32_0(vuint32mf2_t dest, vuint32mf2_t op1)
{
  dest = vslidedown_vx_u32mf2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u32mf2_vl32_0 )?} 1 } } */

vuint32mf2_t 
test_vslidedown_vx_u32mf2_vl32_31(vuint32mf2_t dest, vuint32mf2_t op1)
{
  dest = vslidedown_vx_u32mf2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u32mf2_vl32_31 )?} 1 } } */

vuint32m1_t 
test_vslidedown_vx_u32m1_vl32_0(vuint32m1_t dest, vuint32m1_t op1)
{
  dest = vslidedown_vx_u32m1(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u32m1_vl32_0 )?} 1 } } */

vuint32m1_t 
test_vslidedown_vx_u32m1_vl32_31(vuint32m1_t dest, vuint32m1_t op1)
{
  dest = vslidedown_vx_u32m1(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u32m1_vl32_31 )?} 1 } } */

vuint32m2_t 
test_vslidedown_vx_u32m2_vl32_0(vuint32m2_t dest, vuint32m2_t op1)
{
  dest = vslidedown_vx_u32m2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vslidedown_vx_u32m2_vl32_0 )?} 1 } } */

vuint32m2_t 
test_vslidedown_vx_u32m2_vl32_31(vuint32m2_t dest, vuint32m2_t op1)
{
  dest = vslidedown_vx_u32m2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vslidedown_vx_u32m2_vl32_31 )?} 1 } } */

vuint32m4_t 
test_vslidedown_vx_u32m4_vl32_0(vuint32m4_t dest, vuint32m4_t op1)
{
  dest = vslidedown_vx_u32m4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vslidedown_vx_u32m4_vl32_0 )?} 1 } } */

vuint32m4_t 
test_vslidedown_vx_u32m4_vl32_31(vuint32m4_t dest, vuint32m4_t op1)
{
  dest = vslidedown_vx_u32m4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vslidedown_vx_u32m4_vl32_31 )?} 1 } } */

vuint32m8_t 
test_vslidedown_vx_u32m8_vl32_0(vuint32m8_t dest, vuint32m8_t op1)
{
  dest = vslidedown_vx_u32m8(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vslidedown_vx_u32m8_vl32_0 )?} 1 } } */

vuint32m8_t 
test_vslidedown_vx_u32m8_vl32_31(vuint32m8_t dest, vuint32m8_t op1)
{
  dest = vslidedown_vx_u32m8(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vslidedown_vx_u32m8_vl32_31 )?} 1 } } */

vuint64m1_t 
test_vslidedown_vx_u64m1_vl32_0(vuint64m1_t dest, vuint64m1_t op1)
{
  dest = vslidedown_vx_u64m1(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0\n(?: test_vslidedown_vx_u64m1_vl32_0 )?} 1 } } */

vuint64m1_t 
test_vslidedown_vx_u64m1_vl32_31(vuint64m1_t dest, vuint64m1_t op1)
{
  dest = vslidedown_vx_u64m1(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31\n(?: test_vslidedown_vx_u64m1_vl32_31 )?} 1 } } */

vuint64m2_t 
test_vslidedown_vx_u64m2_vl32_0(vuint64m2_t dest, vuint64m2_t op1)
{
  dest = vslidedown_vx_u64m2(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0\n(?: test_vslidedown_vx_u64m2_vl32_0 )?} 1 } } */

vuint64m2_t 
test_vslidedown_vx_u64m2_vl32_31(vuint64m2_t dest, vuint64m2_t op1)
{
  dest = vslidedown_vx_u64m2(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31\n(?: test_vslidedown_vx_u64m2_vl32_31 )?} 1 } } */

vuint64m4_t 
test_vslidedown_vx_u64m4_vl32_0(vuint64m4_t dest, vuint64m4_t op1)
{
  dest = vslidedown_vx_u64m4(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0\n(?: test_vslidedown_vx_u64m4_vl32_0 )?} 1 } } */

vuint64m4_t 
test_vslidedown_vx_u64m4_vl32_31(vuint64m4_t dest, vuint64m4_t op1)
{
  dest = vslidedown_vx_u64m4(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31\n(?: test_vslidedown_vx_u64m4_vl32_31 )?} 1 } } */

vuint64m8_t 
test_vslidedown_vx_u64m8_vl32_0(vuint64m8_t dest, vuint64m8_t op1)
{
  dest = vslidedown_vx_u64m8(dest, op1, 0, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0\n(?: test_vslidedown_vx_u64m8_vl32_0 )?} 1 } } */

vuint64m8_t 
test_vslidedown_vx_u64m8_vl32_31(vuint64m8_t dest, vuint64m8_t op1)
{
  dest = vslidedown_vx_u64m8(dest, op1, 31, 32);
  return dest;
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslidedown\.vi).)*\s+vslidedown\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31\n(?: test_vslidedown_vx_u64m8_vl32_31 )?} 1 } } */
