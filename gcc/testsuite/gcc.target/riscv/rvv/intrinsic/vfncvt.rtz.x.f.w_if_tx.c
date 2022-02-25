
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8mf8_t 
test_vfncvt_rtz_x_f_w_i8mf8_ta(vfloat16mf4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf8_ta )?} 1 } } */

vint8mf8_t 
test_vfncvt_rtz_x_f_w_i8mf8_ta_vl31(vfloat16mf4_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf8_ta_vl31 )?} 1 } } */

vint8mf4_t 
test_vfncvt_rtz_x_f_w_i8mf4_ta(vfloat16mf2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf4_ta )?} 1 } } */

vint8mf4_t 
test_vfncvt_rtz_x_f_w_i8mf4_ta_vl31(vfloat16mf2_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf4_ta_vl31 )?} 1 } } */

vint8mf2_t 
test_vfncvt_rtz_x_f_w_i8mf2_ta(vfloat16m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf2_ta )?} 1 } } */

vint8mf2_t 
test_vfncvt_rtz_x_f_w_i8mf2_ta_vl31(vfloat16m1_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf2_ta_vl31 )?} 1 } } */

vint8m1_t 
test_vfncvt_rtz_x_f_w_i8m1_ta(vfloat16m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i8m1_ta )?} 1 } } */

vint8m1_t 
test_vfncvt_rtz_x_f_w_i8m1_ta_vl31(vfloat16m2_t op1)
{
  return vfncvt_rtz_x_f_w_i8m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i8m1_ta_vl31 )?} 1 } } */

vint8m2_t 
test_vfncvt_rtz_x_f_w_i8m2_ta(vfloat16m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i8m2_ta )?} 1 } } */

vint8m2_t 
test_vfncvt_rtz_x_f_w_i8m2_ta_vl31(vfloat16m4_t op1)
{
  return vfncvt_rtz_x_f_w_i8m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i8m2_ta_vl31 )?} 1 } } */

vint8m4_t 
test_vfncvt_rtz_x_f_w_i8m4_ta(vfloat16m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i8m4_ta )?} 1 } } */

vint8m4_t 
test_vfncvt_rtz_x_f_w_i8m4_ta_vl31(vfloat16m8_t op1)
{
  return vfncvt_rtz_x_f_w_i8m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i8m4_ta_vl31 )?} 1 } } */

vint16mf4_t 
test_vfncvt_rtz_x_f_w_i16mf4_ta(vfloat32mf2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16mf4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf4_ta )?} 1 } } */

vint16mf4_t 
test_vfncvt_rtz_x_f_w_i16mf4_ta_vl31(vfloat32mf2_t op1)
{
  return vfncvt_rtz_x_f_w_i16mf4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf4_ta_vl31 )?} 1 } } */

vint16mf2_t 
test_vfncvt_rtz_x_f_w_i16mf2_ta(vfloat32m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf2_ta )?} 1 } } */

vint16mf2_t 
test_vfncvt_rtz_x_f_w_i16mf2_ta_vl31(vfloat32m1_t op1)
{
  return vfncvt_rtz_x_f_w_i16mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf2_ta_vl31 )?} 1 } } */

vint16m1_t 
test_vfncvt_rtz_x_f_w_i16m1_ta(vfloat32m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i16m1_ta )?} 1 } } */

vint16m1_t 
test_vfncvt_rtz_x_f_w_i16m1_ta_vl31(vfloat32m2_t op1)
{
  return vfncvt_rtz_x_f_w_i16m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i16m1_ta_vl31 )?} 1 } } */

vint16m2_t 
test_vfncvt_rtz_x_f_w_i16m2_ta(vfloat32m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i16m2_ta )?} 1 } } */

vint16m2_t 
test_vfncvt_rtz_x_f_w_i16m2_ta_vl31(vfloat32m4_t op1)
{
  return vfncvt_rtz_x_f_w_i16m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i16m2_ta_vl31 )?} 1 } } */

vint16m4_t 
test_vfncvt_rtz_x_f_w_i16m4_ta(vfloat32m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i16m4_ta )?} 1 } } */

vint16m4_t 
test_vfncvt_rtz_x_f_w_i16m4_ta_vl31(vfloat32m8_t op1)
{
  return vfncvt_rtz_x_f_w_i16m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i16m4_ta_vl31 )?} 1 } } */

vint32mf2_t 
test_vfncvt_rtz_x_f_w_i32mf2_ta(vfloat64m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i32mf2_ta )?} 1 } } */

vint32mf2_t 
test_vfncvt_rtz_x_f_w_i32mf2_ta_vl31(vfloat64m1_t op1)
{
  return vfncvt_rtz_x_f_w_i32mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i32mf2_ta_vl31 )?} 1 } } */

vint32m1_t 
test_vfncvt_rtz_x_f_w_i32m1_ta(vfloat64m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i32m1_ta )?} 1 } } */

vint32m1_t 
test_vfncvt_rtz_x_f_w_i32m1_ta_vl31(vfloat64m2_t op1)
{
  return vfncvt_rtz_x_f_w_i32m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i32m1_ta_vl31 )?} 1 } } */

vint32m2_t 
test_vfncvt_rtz_x_f_w_i32m2_ta(vfloat64m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i32m2_ta )?} 1 } } */

vint32m2_t 
test_vfncvt_rtz_x_f_w_i32m2_ta_vl31(vfloat64m4_t op1)
{
  return vfncvt_rtz_x_f_w_i32m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i32m2_ta_vl31 )?} 1 } } */

vint32m4_t 
test_vfncvt_rtz_x_f_w_i32m4_ta(vfloat64m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i32m4_ta )?} 1 } } */

vint32m4_t 
test_vfncvt_rtz_x_f_w_i32m4_ta_vl31(vfloat64m8_t op1)
{
  return vfncvt_rtz_x_f_w_i32m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i32m4_ta_vl31 )?} 1 } } */

vint8mf8_t 
test_vfncvt_rtz_x_f_w_i8mf8_tu(vint8mf8_t dest, vfloat16mf4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf8_tu )?} 1 } } */

vint8mf8_t 
test_vfncvt_rtz_x_f_w_i8mf8_tu_vl31(vint8mf8_t dest, vfloat16mf4_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf8_tu_vl31 )?} 1 } } */

vint8mf4_t 
test_vfncvt_rtz_x_f_w_i8mf4_tu(vint8mf4_t dest, vfloat16mf2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf4_tu )?} 1 } } */

vint8mf4_t 
test_vfncvt_rtz_x_f_w_i8mf4_tu_vl31(vint8mf4_t dest, vfloat16mf2_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf4_tu_vl31 )?} 1 } } */

vint8mf2_t 
test_vfncvt_rtz_x_f_w_i8mf2_tu(vint8mf2_t dest, vfloat16m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf2_tu )?} 1 } } */

vint8mf2_t 
test_vfncvt_rtz_x_f_w_i8mf2_tu_vl31(vint8mf2_t dest, vfloat16m1_t op1)
{
  return vfncvt_rtz_x_f_w_i8mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i8mf2_tu_vl31 )?} 1 } } */

vint8m1_t 
test_vfncvt_rtz_x_f_w_i8m1_tu(vint8m1_t dest, vfloat16m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i8m1_tu )?} 1 } } */

vint8m1_t 
test_vfncvt_rtz_x_f_w_i8m1_tu_vl31(vint8m1_t dest, vfloat16m2_t op1)
{
  return vfncvt_rtz_x_f_w_i8m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i8m1_tu_vl31 )?} 1 } } */

vint8m2_t 
test_vfncvt_rtz_x_f_w_i8m2_tu(vint8m2_t dest, vfloat16m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i8m2_tu )?} 1 } } */

vint8m2_t 
test_vfncvt_rtz_x_f_w_i8m2_tu_vl31(vint8m2_t dest, vfloat16m4_t op1)
{
  return vfncvt_rtz_x_f_w_i8m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i8m2_tu_vl31 )?} 1 } } */

vint8m4_t 
test_vfncvt_rtz_x_f_w_i8m4_tu(vint8m4_t dest, vfloat16m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i8m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i8m4_tu )?} 1 } } */

vint8m4_t 
test_vfncvt_rtz_x_f_w_i8m4_tu_vl31(vint8m4_t dest, vfloat16m8_t op1)
{
  return vfncvt_rtz_x_f_w_i8m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i8m4_tu_vl31 )?} 1 } } */

vint16mf4_t 
test_vfncvt_rtz_x_f_w_i16mf4_tu(vint16mf4_t dest, vfloat32mf2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16mf4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf4_tu )?} 1 } } */

vint16mf4_t 
test_vfncvt_rtz_x_f_w_i16mf4_tu_vl31(vint16mf4_t dest, vfloat32mf2_t op1)
{
  return vfncvt_rtz_x_f_w_i16mf4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf4_tu_vl31 )?} 1 } } */

vint16mf2_t 
test_vfncvt_rtz_x_f_w_i16mf2_tu(vint16mf2_t dest, vfloat32m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf2_tu )?} 1 } } */

vint16mf2_t 
test_vfncvt_rtz_x_f_w_i16mf2_tu_vl31(vint16mf2_t dest, vfloat32m1_t op1)
{
  return vfncvt_rtz_x_f_w_i16mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i16mf2_tu_vl31 )?} 1 } } */

vint16m1_t 
test_vfncvt_rtz_x_f_w_i16m1_tu(vint16m1_t dest, vfloat32m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i16m1_tu )?} 1 } } */

vint16m1_t 
test_vfncvt_rtz_x_f_w_i16m1_tu_vl31(vint16m1_t dest, vfloat32m2_t op1)
{
  return vfncvt_rtz_x_f_w_i16m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i16m1_tu_vl31 )?} 1 } } */

vint16m2_t 
test_vfncvt_rtz_x_f_w_i16m2_tu(vint16m2_t dest, vfloat32m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i16m2_tu )?} 1 } } */

vint16m2_t 
test_vfncvt_rtz_x_f_w_i16m2_tu_vl31(vint16m2_t dest, vfloat32m4_t op1)
{
  return vfncvt_rtz_x_f_w_i16m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i16m2_tu_vl31 )?} 1 } } */

vint16m4_t 
test_vfncvt_rtz_x_f_w_i16m4_tu(vint16m4_t dest, vfloat32m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i16m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i16m4_tu )?} 1 } } */

vint16m4_t 
test_vfncvt_rtz_x_f_w_i16m4_tu_vl31(vint16m4_t dest, vfloat32m8_t op1)
{
  return vfncvt_rtz_x_f_w_i16m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i16m4_tu_vl31 )?} 1 } } */

vint32mf2_t 
test_vfncvt_rtz_x_f_w_i32mf2_tu(vint32mf2_t dest, vfloat64m1_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i32mf2_tu )?} 1 } } */

vint32mf2_t 
test_vfncvt_rtz_x_f_w_i32mf2_tu_vl31(vint32mf2_t dest, vfloat64m1_t op1)
{
  return vfncvt_rtz_x_f_w_i32mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_rtz_x_f_w_i32mf2_tu_vl31 )?} 1 } } */

vint32m1_t 
test_vfncvt_rtz_x_f_w_i32m1_tu(vint32m1_t dest, vfloat64m2_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i32m1_tu )?} 1 } } */

vint32m1_t 
test_vfncvt_rtz_x_f_w_i32m1_tu_vl31(vint32m1_t dest, vfloat64m2_t op1)
{
  return vfncvt_rtz_x_f_w_i32m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_rtz_x_f_w_i32m1_tu_vl31 )?} 1 } } */

vint32m2_t 
test_vfncvt_rtz_x_f_w_i32m2_tu(vint32m2_t dest, vfloat64m4_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i32m2_tu )?} 1 } } */

vint32m2_t 
test_vfncvt_rtz_x_f_w_i32m2_tu_vl31(vint32m2_t dest, vfloat64m4_t op1)
{
  return vfncvt_rtz_x_f_w_i32m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_rtz_x_f_w_i32m2_tu_vl31 )?} 1 } } */

vint32m4_t 
test_vfncvt_rtz_x_f_w_i32m4_tu(vint32m4_t dest, vfloat64m8_t op1, size_t vl)
{
  return vfncvt_rtz_x_f_w_i32m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i32m4_tu )?} 1 } } */

vint32m4_t 
test_vfncvt_rtz_x_f_w_i32m4_tu_vl31(vint32m4_t dest, vfloat64m8_t op1)
{
  return vfncvt_rtz_x_f_w_i32m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.rtz\.x\.f\.w).)*\s+vfncvt\.rtz\.x\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_rtz_x_f_w_i32m4_tu_vl31 )?} 1 } } */
