
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsgt_vx_i8mf8_b64(vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8mf8_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf8_b64 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i8mf8_b64_vl31(vint8mf8_t op1, int8_t op2)
{
  return vmsgt_vx_i8mf8_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf8_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i8mf4_b32(vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8mf4_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf4_b32 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i8mf4_b32_vl31(vint8mf4_t op1, int8_t op2)
{
  return vmsgt_vx_i8mf4_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf4_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i8mf2_b16(vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8mf2_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf2_b16 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i8mf2_b16_vl31(vint8mf2_t op1, int8_t op2)
{
  return vmsgt_vx_i8mf2_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8mf2_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i8m1_b8(vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8m1_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m1_b8 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i8m1_b8_vl31(vint8m1_t op1, int8_t op2)
{
  return vmsgt_vx_i8m1_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m1_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i8m2_b4(vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8m2_b4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m2_b4 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i8m2_b4_vl31(vint8m2_t op1, int8_t op2)
{
  return vmsgt_vx_i8m2_b4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m2_b4_vl31 )?} 1 } } */

vbool2_t 
test_vmsgt_vx_i8m4_b2(vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8m4_b2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m4_b2 )?} 1 } } */

vbool2_t 
test_vmsgt_vx_i8m4_b2_vl31(vint8m4_t op1, int8_t op2)
{
  return vmsgt_vx_i8m4_b2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m4_b2_vl31 )?} 1 } } */

vbool1_t 
test_vmsgt_vx_i8m8_b1(vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmsgt_vx_i8m8_b1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m8_b1 )?} 1 } } */

vbool1_t 
test_vmsgt_vx_i8m8_b1_vl31(vint8m8_t op1, int8_t op2)
{
  return vmsgt_vx_i8m8_b1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i8m8_b1_vl31 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i16mf4_b64(vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16mf4_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16mf4_b64 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i16mf4_b64_vl31(vint16mf4_t op1, int16_t op2)
{
  return vmsgt_vx_i16mf4_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16mf4_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i16mf2_b32(vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16mf2_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16mf2_b32 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i16mf2_b32_vl31(vint16mf2_t op1, int16_t op2)
{
  return vmsgt_vx_i16mf2_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16mf2_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i16m1_b16(vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16m1_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m1_b16 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i16m1_b16_vl31(vint16m1_t op1, int16_t op2)
{
  return vmsgt_vx_i16m1_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m1_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i16m2_b8(vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16m2_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m2_b8 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i16m2_b8_vl31(vint16m2_t op1, int16_t op2)
{
  return vmsgt_vx_i16m2_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m2_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i16m4_b4(vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16m4_b4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m4_b4 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i16m4_b4_vl31(vint16m4_t op1, int16_t op2)
{
  return vmsgt_vx_i16m4_b4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m4_b4_vl31 )?} 1 } } */

vbool2_t 
test_vmsgt_vx_i16m8_b2(vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmsgt_vx_i16m8_b2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m8_b2 )?} 1 } } */

vbool2_t 
test_vmsgt_vx_i16m8_b2_vl31(vint16m8_t op1, int16_t op2)
{
  return vmsgt_vx_i16m8_b2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i16m8_b2_vl31 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i32mf2_b64(vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmsgt_vx_i32mf2_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32mf2_b64 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i32mf2_b64_vl31(vint32mf2_t op1, int32_t op2)
{
  return vmsgt_vx_i32mf2_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32mf2_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i32m1_b32(vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmsgt_vx_i32m1_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m1_b32 )?} 1 } } */

vbool32_t 
test_vmsgt_vx_i32m1_b32_vl31(vint32m1_t op1, int32_t op2)
{
  return vmsgt_vx_i32m1_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m1_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i32m2_b16(vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmsgt_vx_i32m2_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m2_b16 )?} 1 } } */

vbool16_t 
test_vmsgt_vx_i32m2_b16_vl31(vint32m2_t op1, int32_t op2)
{
  return vmsgt_vx_i32m2_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m2_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i32m4_b8(vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmsgt_vx_i32m4_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m4_b8 )?} 1 } } */

vbool8_t 
test_vmsgt_vx_i32m4_b8_vl31(vint32m4_t op1, int32_t op2)
{
  return vmsgt_vx_i32m4_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m4_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i32m8_b4(vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmsgt_vx_i32m8_b4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m8_b4 )?} 1 } } */

vbool4_t 
test_vmsgt_vx_i32m8_b4_vl31(vint32m8_t op1, int32_t op2)
{
  return vmsgt_vx_i32m8_b4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i32m8_b4_vl31 )?} 1 } } */

vbool64_t 
test_vmsgt_vx_i64m1_b64(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmsgt_vx_i64m1_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m1_b64 )?} 1 {target riscv64-*-*}} } */

vbool64_t 
test_vmsgt_vx_i64m1_b64_vl31(vint64m1_t op1, int64_t op2)
{
  return vmsgt_vx_i64m1_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m1_b64_vl31 )?} 1 {target riscv64-*-*}} } */

vbool32_t 
test_vmsgt_vx_i64m2_b32(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmsgt_vx_i64m2_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m2_b32 )?} 1 {target riscv64-*-*}} } */

vbool32_t 
test_vmsgt_vx_i64m2_b32_vl31(vint64m2_t op1, int64_t op2)
{
  return vmsgt_vx_i64m2_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m2_b32_vl31 )?} 1 {target riscv64-*-*}} } */

vbool16_t 
test_vmsgt_vx_i64m4_b16(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmsgt_vx_i64m4_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m4_b16 )?} 1 {target riscv64-*-*}} } */

vbool16_t 
test_vmsgt_vx_i64m4_b16_vl31(vint64m4_t op1, int64_t op2)
{
  return vmsgt_vx_i64m4_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m4_b16_vl31 )?} 1 {target riscv64-*-*}} } */

vbool8_t 
test_vmsgt_vx_i64m8_b8(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmsgt_vx_i64m8_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m8_b8 )?} 1 {target riscv64-*-*}} } */

vbool8_t 
test_vmsgt_vx_i64m8_b8_vl31(vint64m8_t op1, int64_t op2)
{
  return vmsgt_vx_i64m8_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsgt\.vx).)*\s+vmsgt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmsgt_vx_i64m8_b8_vl31 )?} 1 {target riscv64-*-*}} } */
