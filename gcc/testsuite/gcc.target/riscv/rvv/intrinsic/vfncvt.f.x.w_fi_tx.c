
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfncvt_f_x_w_f16mf4_ta(vint32mf2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16mf4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf4_ta )?} 1 } } */

vfloat16mf4_t 
test_vfncvt_f_x_w_f16mf4_ta_vl31(vint32mf2_t op1)
{
  return vfncvt_f_x_w_f16mf4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf4_ta_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_x_w_f16mf2_ta(vint32m1_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf2_ta )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_x_w_f16mf2_ta_vl31(vint32m1_t op1)
{
  return vfncvt_f_x_w_f16mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf2_ta_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_x_w_f16m1_ta(vint32m2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f16m1_ta )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_x_w_f16m1_ta_vl31(vint32m2_t op1)
{
  return vfncvt_f_x_w_f16m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f16m1_ta_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_x_w_f16m2_ta(vint32m4_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f16m2_ta )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_x_w_f16m2_ta_vl31(vint32m4_t op1)
{
  return vfncvt_f_x_w_f16m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f16m2_ta_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_x_w_f16m4_ta(vint32m8_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f16m4_ta )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_x_w_f16m4_ta_vl31(vint32m8_t op1)
{
  return vfncvt_f_x_w_f16m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f16m4_ta_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_x_w_f32mf2_ta(vint64m1_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f32mf2_ta )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_x_w_f32mf2_ta_vl31(vint64m1_t op1)
{
  return vfncvt_f_x_w_f32mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f32mf2_ta_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_x_w_f32m1_ta(vint64m2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f32m1_ta )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_x_w_f32m1_ta_vl31(vint64m2_t op1)
{
  return vfncvt_f_x_w_f32m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f32m1_ta_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_x_w_f32m2_ta(vint64m4_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f32m2_ta )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_x_w_f32m2_ta_vl31(vint64m4_t op1)
{
  return vfncvt_f_x_w_f32m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f32m2_ta_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_x_w_f32m4_ta(vint64m8_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f32m4_ta )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_x_w_f32m4_ta_vl31(vint64m8_t op1)
{
  return vfncvt_f_x_w_f32m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f32m4_ta_vl31 )?} 1 } } */

vfloat16mf4_t 
test_vfncvt_f_x_w_f16mf4_tu(vfloat16mf4_t dest, vint32mf2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16mf4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf4_tu )?} 1 } } */

vfloat16mf4_t 
test_vfncvt_f_x_w_f16mf4_tu_vl31(vfloat16mf4_t dest, vint32mf2_t op1)
{
  return vfncvt_f_x_w_f16mf4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf4_tu_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_x_w_f16mf2_tu(vfloat16mf2_t dest, vint32m1_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf2_tu )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_x_w_f16mf2_tu_vl31(vfloat16mf2_t dest, vint32m1_t op1)
{
  return vfncvt_f_x_w_f16mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f16mf2_tu_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_x_w_f16m1_tu(vfloat16m1_t dest, vint32m2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f16m1_tu )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_x_w_f16m1_tu_vl31(vfloat16m1_t dest, vint32m2_t op1)
{
  return vfncvt_f_x_w_f16m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f16m1_tu_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_x_w_f16m2_tu(vfloat16m2_t dest, vint32m4_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f16m2_tu )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_x_w_f16m2_tu_vl31(vfloat16m2_t dest, vint32m4_t op1)
{
  return vfncvt_f_x_w_f16m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f16m2_tu_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_x_w_f16m4_tu(vfloat16m4_t dest, vint32m8_t op1, size_t vl)
{
  return vfncvt_f_x_w_f16m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f16m4_tu )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_x_w_f16m4_tu_vl31(vfloat16m4_t dest, vint32m8_t op1)
{
  return vfncvt_f_x_w_f16m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f16m4_tu_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_x_w_f32mf2_tu(vfloat32mf2_t dest, vint64m1_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f32mf2_tu )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_x_w_f32mf2_tu_vl31(vfloat32mf2_t dest, vint64m1_t op1)
{
  return vfncvt_f_x_w_f32mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_x_w_f32mf2_tu_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_x_w_f32m1_tu(vfloat32m1_t dest, vint64m2_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f32m1_tu )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_x_w_f32m1_tu_vl31(vfloat32m1_t dest, vint64m2_t op1)
{
  return vfncvt_f_x_w_f32m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_x_w_f32m1_tu_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_x_w_f32m2_tu(vfloat32m2_t dest, vint64m4_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f32m2_tu )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_x_w_f32m2_tu_vl31(vfloat32m2_t dest, vint64m4_t op1)
{
  return vfncvt_f_x_w_f32m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_x_w_f32m2_tu_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_x_w_f32m4_tu(vfloat32m4_t dest, vint64m8_t op1, size_t vl)
{
  return vfncvt_f_x_w_f32m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f32m4_tu )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_x_w_f32m4_tu_vl31(vfloat32m4_t dest, vint64m8_t op1)
{
  return vfncvt_f_x_w_f32m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.x\.w).)*\s+vfncvt\.f\.x\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_x_w_f32m4_tu_vl31 )?} 1 } } */
