
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vsub_vx_u8mf8_m15(vuint8mf8_t op1, size_t vl)
{
  return vsub_vx_u8mf8(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf8_m15 )?} 1 } } */

vuint8mf8_t 
test_vsub_vx_u8mf8_16(vuint8mf8_t op1, size_t vl)
{
  return vsub_vx_u8mf8(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf8_16 )?} 1 } } */

vuint8mf8_t 
test_vsub_vx_u8mf8_vl31_m15(vuint8mf8_t op1)
{
  return vsub_vx_u8mf8(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf8_vl31_m15 )?} 1 } } */

vuint8mf8_t 
test_vsub_vx_u8mf8_vl31_16(vuint8mf8_t op1)
{
  return vsub_vx_u8mf8(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf8_vl31_16 )?} 1 } } */

vuint8mf4_t 
test_vsub_vx_u8mf4_m15(vuint8mf4_t op1, size_t vl)
{
  return vsub_vx_u8mf4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf4_m15 )?} 1 } } */

vuint8mf4_t 
test_vsub_vx_u8mf4_16(vuint8mf4_t op1, size_t vl)
{
  return vsub_vx_u8mf4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf4_16 )?} 1 } } */

vuint8mf4_t 
test_vsub_vx_u8mf4_vl31_m15(vuint8mf4_t op1)
{
  return vsub_vx_u8mf4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf4_vl31_m15 )?} 1 } } */

vuint8mf4_t 
test_vsub_vx_u8mf4_vl31_16(vuint8mf4_t op1)
{
  return vsub_vx_u8mf4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf4_vl31_16 )?} 1 } } */

vuint8mf2_t 
test_vsub_vx_u8mf2_m15(vuint8mf2_t op1, size_t vl)
{
  return vsub_vx_u8mf2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf2_m15 )?} 1 } } */

vuint8mf2_t 
test_vsub_vx_u8mf2_16(vuint8mf2_t op1, size_t vl)
{
  return vsub_vx_u8mf2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf2_16 )?} 1 } } */

vuint8mf2_t 
test_vsub_vx_u8mf2_vl31_m15(vuint8mf2_t op1)
{
  return vsub_vx_u8mf2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8mf2_vl31_m15 )?} 1 } } */

vuint8mf2_t 
test_vsub_vx_u8mf2_vl31_16(vuint8mf2_t op1)
{
  return vsub_vx_u8mf2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8mf2_vl31_16 )?} 1 } } */

vuint8m1_t 
test_vsub_vx_u8m1_m15(vuint8m1_t op1, size_t vl)
{
  return vsub_vx_u8m1(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8m1_m15 )?} 1 } } */

vuint8m1_t 
test_vsub_vx_u8m1_16(vuint8m1_t op1, size_t vl)
{
  return vsub_vx_u8m1(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8m1_16 )?} 1 } } */

vuint8m1_t 
test_vsub_vx_u8m1_vl31_m15(vuint8m1_t op1)
{
  return vsub_vx_u8m1(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u8m1_vl31_m15 )?} 1 } } */

vuint8m1_t 
test_vsub_vx_u8m1_vl31_16(vuint8m1_t op1)
{
  return vsub_vx_u8m1(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u8m1_vl31_16 )?} 1 } } */

vuint8m2_t 
test_vsub_vx_u8m2_m15(vuint8m2_t op1, size_t vl)
{
  return vsub_vx_u8m2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u8m2_m15 )?} 1 } } */

vuint8m2_t 
test_vsub_vx_u8m2_16(vuint8m2_t op1, size_t vl)
{
  return vsub_vx_u8m2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u8m2_16 )?} 1 } } */

vuint8m2_t 
test_vsub_vx_u8m2_vl31_m15(vuint8m2_t op1)
{
  return vsub_vx_u8m2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u8m2_vl31_m15 )?} 1 } } */

vuint8m2_t 
test_vsub_vx_u8m2_vl31_16(vuint8m2_t op1)
{
  return vsub_vx_u8m2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u8m2_vl31_16 )?} 1 } } */

vuint8m4_t 
test_vsub_vx_u8m4_m15(vuint8m4_t op1, size_t vl)
{
  return vsub_vx_u8m4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u8m4_m15 )?} 1 } } */

vuint8m4_t 
test_vsub_vx_u8m4_16(vuint8m4_t op1, size_t vl)
{
  return vsub_vx_u8m4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u8m4_16 )?} 1 } } */

vuint8m4_t 
test_vsub_vx_u8m4_vl31_m15(vuint8m4_t op1)
{
  return vsub_vx_u8m4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u8m4_vl31_m15 )?} 1 } } */

vuint8m4_t 
test_vsub_vx_u8m4_vl31_16(vuint8m4_t op1)
{
  return vsub_vx_u8m4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u8m4_vl31_16 )?} 1 } } */

vuint8m8_t 
test_vsub_vx_u8m8_m15(vuint8m8_t op1, size_t vl)
{
  return vsub_vx_u8m8(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u8m8_m15 )?} 1 } } */

vuint8m8_t 
test_vsub_vx_u8m8_16(vuint8m8_t op1, size_t vl)
{
  return vsub_vx_u8m8(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u8m8_16 )?} 1 } } */

vuint8m8_t 
test_vsub_vx_u8m8_vl31_m15(vuint8m8_t op1)
{
  return vsub_vx_u8m8(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u8m8_vl31_m15 )?} 1 } } */

vuint8m8_t 
test_vsub_vx_u8m8_vl31_16(vuint8m8_t op1)
{
  return vsub_vx_u8m8(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u8m8_vl31_16 )?} 1 } } */

vuint16mf4_t 
test_vsub_vx_u16mf4_m15(vuint16mf4_t op1, size_t vl)
{
  return vsub_vx_u16mf4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16mf4_m15 )?} 1 } } */

vuint16mf4_t 
test_vsub_vx_u16mf4_16(vuint16mf4_t op1, size_t vl)
{
  return vsub_vx_u16mf4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16mf4_16 )?} 1 } } */

vuint16mf4_t 
test_vsub_vx_u16mf4_vl31_m15(vuint16mf4_t op1)
{
  return vsub_vx_u16mf4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16mf4_vl31_m15 )?} 1 } } */

vuint16mf4_t 
test_vsub_vx_u16mf4_vl31_16(vuint16mf4_t op1)
{
  return vsub_vx_u16mf4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16mf4_vl31_16 )?} 1 } } */

vuint16mf2_t 
test_vsub_vx_u16mf2_m15(vuint16mf2_t op1, size_t vl)
{
  return vsub_vx_u16mf2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16mf2_m15 )?} 1 } } */

vuint16mf2_t 
test_vsub_vx_u16mf2_16(vuint16mf2_t op1, size_t vl)
{
  return vsub_vx_u16mf2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16mf2_16 )?} 1 } } */

vuint16mf2_t 
test_vsub_vx_u16mf2_vl31_m15(vuint16mf2_t op1)
{
  return vsub_vx_u16mf2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16mf2_vl31_m15 )?} 1 } } */

vuint16mf2_t 
test_vsub_vx_u16mf2_vl31_16(vuint16mf2_t op1)
{
  return vsub_vx_u16mf2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16mf2_vl31_16 )?} 1 } } */

vuint16m1_t 
test_vsub_vx_u16m1_m15(vuint16m1_t op1, size_t vl)
{
  return vsub_vx_u16m1(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16m1_m15 )?} 1 } } */

vuint16m1_t 
test_vsub_vx_u16m1_16(vuint16m1_t op1, size_t vl)
{
  return vsub_vx_u16m1(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16m1_16 )?} 1 } } */

vuint16m1_t 
test_vsub_vx_u16m1_vl31_m15(vuint16m1_t op1)
{
  return vsub_vx_u16m1(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u16m1_vl31_m15 )?} 1 } } */

vuint16m1_t 
test_vsub_vx_u16m1_vl31_16(vuint16m1_t op1)
{
  return vsub_vx_u16m1(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u16m1_vl31_16 )?} 1 } } */

vuint16m2_t 
test_vsub_vx_u16m2_m15(vuint16m2_t op1, size_t vl)
{
  return vsub_vx_u16m2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u16m2_m15 )?} 1 } } */

vuint16m2_t 
test_vsub_vx_u16m2_16(vuint16m2_t op1, size_t vl)
{
  return vsub_vx_u16m2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u16m2_16 )?} 1 } } */

vuint16m2_t 
test_vsub_vx_u16m2_vl31_m15(vuint16m2_t op1)
{
  return vsub_vx_u16m2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u16m2_vl31_m15 )?} 1 } } */

vuint16m2_t 
test_vsub_vx_u16m2_vl31_16(vuint16m2_t op1)
{
  return vsub_vx_u16m2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u16m2_vl31_16 )?} 1 } } */

vuint16m4_t 
test_vsub_vx_u16m4_m15(vuint16m4_t op1, size_t vl)
{
  return vsub_vx_u16m4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u16m4_m15 )?} 1 } } */

vuint16m4_t 
test_vsub_vx_u16m4_16(vuint16m4_t op1, size_t vl)
{
  return vsub_vx_u16m4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u16m4_16 )?} 1 } } */

vuint16m4_t 
test_vsub_vx_u16m4_vl31_m15(vuint16m4_t op1)
{
  return vsub_vx_u16m4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u16m4_vl31_m15 )?} 1 } } */

vuint16m4_t 
test_vsub_vx_u16m4_vl31_16(vuint16m4_t op1)
{
  return vsub_vx_u16m4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u16m4_vl31_16 )?} 1 } } */

vuint16m8_t 
test_vsub_vx_u16m8_m15(vuint16m8_t op1, size_t vl)
{
  return vsub_vx_u16m8(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u16m8_m15 )?} 1 } } */

vuint16m8_t 
test_vsub_vx_u16m8_16(vuint16m8_t op1, size_t vl)
{
  return vsub_vx_u16m8(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u16m8_16 )?} 1 } } */

vuint16m8_t 
test_vsub_vx_u16m8_vl31_m15(vuint16m8_t op1)
{
  return vsub_vx_u16m8(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u16m8_vl31_m15 )?} 1 } } */

vuint16m8_t 
test_vsub_vx_u16m8_vl31_16(vuint16m8_t op1)
{
  return vsub_vx_u16m8(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u16m8_vl31_16 )?} 1 } } */

vuint32mf2_t 
test_vsub_vx_u32mf2_m15(vuint32mf2_t op1, size_t vl)
{
  return vsub_vx_u32mf2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u32mf2_m15 )?} 1 } } */

vuint32mf2_t 
test_vsub_vx_u32mf2_16(vuint32mf2_t op1, size_t vl)
{
  return vsub_vx_u32mf2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u32mf2_16 )?} 1 } } */

vuint32mf2_t 
test_vsub_vx_u32mf2_vl31_m15(vuint32mf2_t op1)
{
  return vsub_vx_u32mf2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u32mf2_vl31_m15 )?} 1 } } */

vuint32mf2_t 
test_vsub_vx_u32mf2_vl31_16(vuint32mf2_t op1)
{
  return vsub_vx_u32mf2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u32mf2_vl31_16 )?} 1 } } */

vuint32m1_t 
test_vsub_vx_u32m1_m15(vuint32m1_t op1, size_t vl)
{
  return vsub_vx_u32m1(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u32m1_m15 )?} 1 } } */

vuint32m1_t 
test_vsub_vx_u32m1_16(vuint32m1_t op1, size_t vl)
{
  return vsub_vx_u32m1(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u32m1_16 )?} 1 } } */

vuint32m1_t 
test_vsub_vx_u32m1_vl31_m15(vuint32m1_t op1)
{
  return vsub_vx_u32m1(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u32m1_vl31_m15 )?} 1 } } */

vuint32m1_t 
test_vsub_vx_u32m1_vl31_16(vuint32m1_t op1)
{
  return vsub_vx_u32m1(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u32m1_vl31_16 )?} 1 } } */

vuint32m2_t 
test_vsub_vx_u32m2_m15(vuint32m2_t op1, size_t vl)
{
  return vsub_vx_u32m2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u32m2_m15 )?} 1 } } */

vuint32m2_t 
test_vsub_vx_u32m2_16(vuint32m2_t op1, size_t vl)
{
  return vsub_vx_u32m2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u32m2_16 )?} 1 } } */

vuint32m2_t 
test_vsub_vx_u32m2_vl31_m15(vuint32m2_t op1)
{
  return vsub_vx_u32m2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u32m2_vl31_m15 )?} 1 } } */

vuint32m2_t 
test_vsub_vx_u32m2_vl31_16(vuint32m2_t op1)
{
  return vsub_vx_u32m2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u32m2_vl31_16 )?} 1 } } */

vuint32m4_t 
test_vsub_vx_u32m4_m15(vuint32m4_t op1, size_t vl)
{
  return vsub_vx_u32m4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u32m4_m15 )?} 1 } } */

vuint32m4_t 
test_vsub_vx_u32m4_16(vuint32m4_t op1, size_t vl)
{
  return vsub_vx_u32m4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u32m4_16 )?} 1 } } */

vuint32m4_t 
test_vsub_vx_u32m4_vl31_m15(vuint32m4_t op1)
{
  return vsub_vx_u32m4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u32m4_vl31_m15 )?} 1 } } */

vuint32m4_t 
test_vsub_vx_u32m4_vl31_16(vuint32m4_t op1)
{
  return vsub_vx_u32m4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u32m4_vl31_16 )?} 1 } } */

vuint32m8_t 
test_vsub_vx_u32m8_m15(vuint32m8_t op1, size_t vl)
{
  return vsub_vx_u32m8(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u32m8_m15 )?} 1 } } */

vuint32m8_t 
test_vsub_vx_u32m8_16(vuint32m8_t op1, size_t vl)
{
  return vsub_vx_u32m8(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u32m8_16 )?} 1 } } */

vuint32m8_t 
test_vsub_vx_u32m8_vl31_m15(vuint32m8_t op1)
{
  return vsub_vx_u32m8(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u32m8_vl31_m15 )?} 1 } } */

vuint32m8_t 
test_vsub_vx_u32m8_vl31_16(vuint32m8_t op1)
{
  return vsub_vx_u32m8(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u32m8_vl31_16 )?} 1 } } */

vuint64m1_t 
test_vsub_vx_u64m1_m15(vuint64m1_t op1, size_t vl)
{
  return vsub_vx_u64m1(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u64m1_m15 )?} 1 } } */

vuint64m1_t 
test_vsub_vx_u64m1_16(vuint64m1_t op1, size_t vl)
{
  return vsub_vx_u64m1(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u64m1_16 )?} 1 } } */

vuint64m1_t 
test_vsub_vx_u64m1_vl31_m15(vuint64m1_t op1)
{
  return vsub_vx_u64m1(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vsub_vx_u64m1_vl31_m15 )?} 1 } } */

vuint64m1_t 
test_vsub_vx_u64m1_vl31_16(vuint64m1_t op1)
{
  return vsub_vx_u64m1(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vsub_vx_u64m1_vl31_16 )?} 1 } } */

vuint64m2_t 
test_vsub_vx_u64m2_m15(vuint64m2_t op1, size_t vl)
{
  return vsub_vx_u64m2(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u64m2_m15 )?} 1 } } */

vuint64m2_t 
test_vsub_vx_u64m2_16(vuint64m2_t op1, size_t vl)
{
  return vsub_vx_u64m2(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u64m2_16 )?} 1 } } */

vuint64m2_t 
test_vsub_vx_u64m2_vl31_m15(vuint64m2_t op1)
{
  return vsub_vx_u64m2(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vsub_vx_u64m2_vl31_m15 )?} 1 } } */

vuint64m2_t 
test_vsub_vx_u64m2_vl31_16(vuint64m2_t op1)
{
  return vsub_vx_u64m2(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vsub_vx_u64m2_vl31_16 )?} 1 } } */

vuint64m4_t 
test_vsub_vx_u64m4_m15(vuint64m4_t op1, size_t vl)
{
  return vsub_vx_u64m4(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u64m4_m15 )?} 1 } } */

vuint64m4_t 
test_vsub_vx_u64m4_16(vuint64m4_t op1, size_t vl)
{
  return vsub_vx_u64m4(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u64m4_16 )?} 1 } } */

vuint64m4_t 
test_vsub_vx_u64m4_vl31_m15(vuint64m4_t op1)
{
  return vsub_vx_u64m4(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vsub_vx_u64m4_vl31_m15 )?} 1 } } */

vuint64m4_t 
test_vsub_vx_u64m4_vl31_16(vuint64m4_t op1)
{
  return vsub_vx_u64m4(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vsub_vx_u64m4_vl31_16 )?} 1 } } */

vuint64m8_t 
test_vsub_vx_u64m8_m15(vuint64m8_t op1, size_t vl)
{
  return vsub_vx_u64m8(op1, -15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u64m8_m15 )?} 1 } } */

vuint64m8_t 
test_vsub_vx_u64m8_16(vuint64m8_t op1, size_t vl)
{
  return vsub_vx_u64m8(op1, 16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u64m8_16 )?} 1 } } */

vuint64m8_t 
test_vsub_vx_u64m8_vl31_m15(vuint64m8_t op1)
{
  return vsub_vx_u64m8(op1, -15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15\n(?: test_vsub_vx_u64m8_vl31_m15 )?} 1 } } */

vuint64m8_t 
test_vsub_vx_u64m8_vl31_16(vuint64m8_t op1)
{
  return vsub_vx_u64m8(op1, 16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16\n(?: test_vsub_vx_u64m8_vl31_16 )?} 1 } } */
