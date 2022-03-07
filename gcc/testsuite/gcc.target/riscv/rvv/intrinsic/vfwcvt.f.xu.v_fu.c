
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfwcvt_f_xu_v_f16mf4(vuint8mf8_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16mf4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16mf4 )?} 1 } } */

vfloat16mf4_t 
test_vfwcvt_f_xu_v_f16mf4_vl31(vuint8mf8_t op1)
{
  return vfwcvt_f_xu_v_f16mf4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16mf4_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfwcvt_f_xu_v_f16mf2(vuint8mf4_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16mf2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16mf2 )?} 1 } } */

vfloat16mf2_t 
test_vfwcvt_f_xu_v_f16mf2_vl31(vuint8mf4_t op1)
{
  return vfwcvt_f_xu_v_f16mf2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16mf2_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfwcvt_f_xu_v_f16m1(vuint8mf2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16m1 )?} 1 } } */

vfloat16m1_t 
test_vfwcvt_f_xu_v_f16m1_vl31(vuint8mf2_t op1)
{
  return vfwcvt_f_xu_v_f16m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16m1_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfwcvt_f_xu_v_f16m2(vuint8m1_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16m2 )?} 1 } } */

vfloat16m2_t 
test_vfwcvt_f_xu_v_f16m2_vl31(vuint8m1_t op1)
{
  return vfwcvt_f_xu_v_f16m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f16m2_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfwcvt_f_xu_v_f16m4(vuint8m2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f16m4 )?} 1 } } */

vfloat16m4_t 
test_vfwcvt_f_xu_v_f16m4_vl31(vuint8m2_t op1)
{
  return vfwcvt_f_xu_v_f16m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f16m4_vl31 )?} 1 } } */

vfloat16m8_t 
test_vfwcvt_f_xu_v_f16m8(vuint8m4_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f16m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f16m8 )?} 1 } } */

vfloat16m8_t 
test_vfwcvt_f_xu_v_f16m8_vl31(vuint8m4_t op1)
{
  return vfwcvt_f_xu_v_f16m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f16m8_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfwcvt_f_xu_v_f32mf2(vuint16mf4_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f32mf2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32mf2 )?} 1 } } */

vfloat32mf2_t 
test_vfwcvt_f_xu_v_f32mf2_vl31(vuint16mf4_t op1)
{
  return vfwcvt_f_xu_v_f32mf2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32mf2_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfwcvt_f_xu_v_f32m1(vuint16mf2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f32m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32m1 )?} 1 } } */

vfloat32m1_t 
test_vfwcvt_f_xu_v_f32m1_vl31(vuint16mf2_t op1)
{
  return vfwcvt_f_xu_v_f32m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32m1_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfwcvt_f_xu_v_f32m2(vuint16m1_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f32m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32m2 )?} 1 } } */

vfloat32m2_t 
test_vfwcvt_f_xu_v_f32m2_vl31(vuint16m1_t op1)
{
  return vfwcvt_f_xu_v_f32m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f32m2_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfwcvt_f_xu_v_f32m4(vuint16m2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f32m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f32m4 )?} 1 } } */

vfloat32m4_t 
test_vfwcvt_f_xu_v_f32m4_vl31(vuint16m2_t op1)
{
  return vfwcvt_f_xu_v_f32m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f32m4_vl31 )?} 1 } } */

vfloat32m8_t 
test_vfwcvt_f_xu_v_f32m8(vuint16m4_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f32m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f32m8 )?} 1 } } */

vfloat32m8_t 
test_vfwcvt_f_xu_v_f32m8_vl31(vuint16m4_t op1)
{
  return vfwcvt_f_xu_v_f32m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f32m8_vl31 )?} 1 } } */

vfloat64m1_t 
test_vfwcvt_f_xu_v_f64m1(vuint32mf2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f64m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f64m1 )?} 1 } } */

vfloat64m1_t 
test_vfwcvt_f_xu_v_f64m1_vl31(vuint32mf2_t op1)
{
  return vfwcvt_f_xu_v_f64m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f64m1_vl31 )?} 1 } } */

vfloat64m2_t 
test_vfwcvt_f_xu_v_f64m2(vuint32m1_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f64m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f64m2 )?} 1 } } */

vfloat64m2_t 
test_vfwcvt_f_xu_v_f64m2_vl31(vuint32m1_t op1)
{
  return vfwcvt_f_xu_v_f64m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwcvt_f_xu_v_f64m2_vl31 )?} 1 } } */

vfloat64m4_t 
test_vfwcvt_f_xu_v_f64m4(vuint32m2_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f64m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f64m4 )?} 1 } } */

vfloat64m4_t 
test_vfwcvt_f_xu_v_f64m4_vl31(vuint32m2_t op1)
{
  return vfwcvt_f_xu_v_f64m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwcvt_f_xu_v_f64m4_vl31 )?} 1 } } */

vfloat64m8_t 
test_vfwcvt_f_xu_v_f64m8(vuint32m4_t op1, size_t vl)
{
  return vfwcvt_f_xu_v_f64m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f64m8 )?} 1 } } */

vfloat64m8_t 
test_vfwcvt_f_xu_v_f64m8_vl31(vuint32m4_t op1)
{
  return vfwcvt_f_xu_v_f64m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vfwcvt\.f\.xu\.v).)*\s+vfwcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwcvt_f_xu_v_f64m8_vl31 )?} 1 } } */
