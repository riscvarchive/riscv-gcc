
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfncvt_f_xu_w_f16mf4(vuint32mf2_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f16mf4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f16mf4 )?} 1 } } */

vfloat16mf4_t 
test_vfncvt_f_xu_w_f16mf4_vl31(vuint32mf2_t op1)
{
  return vfncvt_f_xu_w_f16mf4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f16mf4_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_xu_w_f16mf2(vuint32m1_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f16mf2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f16mf2 )?} 1 } } */

vfloat16mf2_t 
test_vfncvt_f_xu_w_f16mf2_vl31(vuint32m1_t op1)
{
  return vfncvt_f_xu_w_f16mf2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f16mf2_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_xu_w_f16m1(vuint32m2_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f16m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_xu_w_f16m1 )?} 1 } } */

vfloat16m1_t 
test_vfncvt_f_xu_w_f16m1_vl31(vuint32m2_t op1)
{
  return vfncvt_f_xu_w_f16m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_xu_w_f16m1_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_xu_w_f16m2(vuint32m4_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f16m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_xu_w_f16m2 )?} 1 } } */

vfloat16m2_t 
test_vfncvt_f_xu_w_f16m2_vl31(vuint32m4_t op1)
{
  return vfncvt_f_xu_w_f16m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_xu_w_f16m2_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_xu_w_f16m4(vuint32m8_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f16m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_xu_w_f16m4 )?} 1 } } */

vfloat16m4_t 
test_vfncvt_f_xu_w_f16m4_vl31(vuint32m8_t op1)
{
  return vfncvt_f_xu_w_f16m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_xu_w_f16m4_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_xu_w_f32mf2(vuint64m1_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f32mf2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f32mf2 )?} 1 } } */

vfloat32mf2_t 
test_vfncvt_f_xu_w_f32mf2_vl31(vuint64m1_t op1)
{
  return vfncvt_f_xu_w_f32mf2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfncvt_f_xu_w_f32mf2_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_xu_w_f32m1(vuint64m2_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f32m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_xu_w_f32m1 )?} 1 } } */

vfloat32m1_t 
test_vfncvt_f_xu_w_f32m1_vl31(vuint64m2_t op1)
{
  return vfncvt_f_xu_w_f32m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfncvt_f_xu_w_f32m1_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_xu_w_f32m2(vuint64m4_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f32m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_xu_w_f32m2 )?} 1 } } */

vfloat32m2_t 
test_vfncvt_f_xu_w_f32m2_vl31(vuint64m4_t op1)
{
  return vfncvt_f_xu_w_f32m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfncvt_f_xu_w_f32m2_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_xu_w_f32m4(vuint64m8_t op1, size_t vl)
{
  return vfncvt_f_xu_w_f32m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_xu_w_f32m4 )?} 1 } } */

vfloat32m4_t 
test_vfncvt_f_xu_w_f32m4_vl31(vuint64m8_t op1)
{
  return vfncvt_f_xu_w_f32m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfncvt\.f\.xu\.w).)*\s+vfncvt\.f\.xu\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24)\n(?: test_vfncvt_f_xu_w_f32m4_vl31 )?} 1 } } */
