
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint16mf4_t 
test_vwsub_vx_i16mf4(vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16mf4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16mf4 )?} 1 } } */

vint16mf4_t 
test_vwsub_vx_i16mf4_vl31(vint8mf8_t op1, int8_t op2)
{
  return vwsub_vx_i16mf4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16mf4_vl31 )?} 1 } } */

vint16mf2_t 
test_vwsub_vx_i16mf2(vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16mf2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16mf2 )?} 1 } } */

vint16mf2_t 
test_vwsub_vx_i16mf2_vl31(vint8mf4_t op1, int8_t op2)
{
  return vwsub_vx_i16mf2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16mf2_vl31 )?} 1 } } */

vint16m1_t 
test_vwsub_vx_i16m1(vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m1 )?} 1 } } */

vint16m1_t 
test_vwsub_vx_i16m1_vl31(vint8mf2_t op1, int8_t op2)
{
  return vwsub_vx_i16m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m1_vl31 )?} 1 } } */

vint16m2_t 
test_vwsub_vx_i16m2(vint8m1_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16m2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m2 )?} 1 } } */

vint16m2_t 
test_vwsub_vx_i16m2_vl31(vint8m1_t op1, int8_t op2)
{
  return vwsub_vx_i16m2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m2_vl31 )?} 1 } } */

vint16m4_t 
test_vwsub_vx_i16m4(vint8m2_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16m4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m4 )?} 1 } } */

vint16m4_t 
test_vwsub_vx_i16m4_vl31(vint8m2_t op1, int8_t op2)
{
  return vwsub_vx_i16m4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m4_vl31 )?} 1 } } */

vint16m8_t 
test_vwsub_vx_i16m8(vint8m4_t op1, int8_t op2, size_t vl)
{
  return vwsub_vx_i16m8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m8 )?} 1 } } */

vint16m8_t 
test_vwsub_vx_i16m8_vl31(vint8m4_t op1, int8_t op2)
{
  return vwsub_vx_i16m8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i16m8_vl31 )?} 1 } } */

vint32mf2_t 
test_vwsub_vx_i32mf2(vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vwsub_vx_i32mf2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32mf2 )?} 1 } } */

vint32mf2_t 
test_vwsub_vx_i32mf2_vl31(vint16mf4_t op1, int16_t op2)
{
  return vwsub_vx_i32mf2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32mf2_vl31 )?} 1 } } */

vint32m1_t 
test_vwsub_vx_i32m1(vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vwsub_vx_i32m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m1 )?} 1 } } */

vint32m1_t 
test_vwsub_vx_i32m1_vl31(vint16mf2_t op1, int16_t op2)
{
  return vwsub_vx_i32m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m1_vl31 )?} 1 } } */

vint32m2_t 
test_vwsub_vx_i32m2(vint16m1_t op1, int16_t op2, size_t vl)
{
  return vwsub_vx_i32m2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m2 )?} 1 } } */

vint32m2_t 
test_vwsub_vx_i32m2_vl31(vint16m1_t op1, int16_t op2)
{
  return vwsub_vx_i32m2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m2_vl31 )?} 1 } } */

vint32m4_t 
test_vwsub_vx_i32m4(vint16m2_t op1, int16_t op2, size_t vl)
{
  return vwsub_vx_i32m4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m4 )?} 1 } } */

vint32m4_t 
test_vwsub_vx_i32m4_vl31(vint16m2_t op1, int16_t op2)
{
  return vwsub_vx_i32m4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m4_vl31 )?} 1 } } */

vint32m8_t 
test_vwsub_vx_i32m8(vint16m4_t op1, int16_t op2, size_t vl)
{
  return vwsub_vx_i32m8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m8 )?} 1 } } */

vint32m8_t 
test_vwsub_vx_i32m8_vl31(vint16m4_t op1, int16_t op2)
{
  return vwsub_vx_i32m8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i32m8_vl31 )?} 1 } } */

vint64m1_t 
test_vwsub_vx_i64m1(vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vwsub_vx_i64m1(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m1 )?} 1 } } */

vint64m1_t 
test_vwsub_vx_i64m1_vl31(vint32mf2_t op1, int32_t op2)
{
  return vwsub_vx_i64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m1_vl31 )?} 1 } } */

vint64m2_t 
test_vwsub_vx_i64m2(vint32m1_t op1, int32_t op2, size_t vl)
{
  return vwsub_vx_i64m2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m2 )?} 1 } } */

vint64m2_t 
test_vwsub_vx_i64m2_vl31(vint32m1_t op1, int32_t op2)
{
  return vwsub_vx_i64m2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m2_vl31 )?} 1 } } */

vint64m4_t 
test_vwsub_vx_i64m4(vint32m2_t op1, int32_t op2, size_t vl)
{
  return vwsub_vx_i64m4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m4 )?} 1 } } */

vint64m4_t 
test_vwsub_vx_i64m4_vl31(vint32m2_t op1, int32_t op2)
{
  return vwsub_vx_i64m4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m4_vl31 )?} 1 } } */

vint64m8_t 
test_vwsub_vx_i64m8(vint32m4_t op1, int32_t op2, size_t vl)
{
  return vwsub_vx_i64m8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m8 )?} 1 } } */

vint64m8_t 
test_vwsub_vx_i64m8_vl31(vint32m4_t op1, int32_t op2)
{
  return vwsub_vx_i64m8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vwsub\.vx).)*\s+vwsub\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vwsub_vx_i64m8_vl31 )?} 1 } } */
