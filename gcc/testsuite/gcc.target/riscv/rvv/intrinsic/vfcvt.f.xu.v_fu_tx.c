
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfcvt_f_xu_v_f16mf4_ta(vuint16mf4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16mf4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf4_ta )?} 1 } } */

vfloat16mf4_t 
test_vfcvt_f_xu_v_f16mf4_ta_vl31(vuint16mf4_t op1)
{
  return vfcvt_f_xu_v_f16mf4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf4_ta_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfcvt_f_xu_v_f16mf2_ta(vuint16mf2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf2_ta )?} 1 } } */

vfloat16mf2_t 
test_vfcvt_f_xu_v_f16mf2_ta_vl31(vuint16mf2_t op1)
{
  return vfcvt_f_xu_v_f16mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf2_ta_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfcvt_f_xu_v_f16m1_ta(vuint16m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16m1_ta )?} 1 } } */

vfloat16m1_t 
test_vfcvt_f_xu_v_f16m1_ta_vl31(vuint16m1_t op1)
{
  return vfcvt_f_xu_v_f16m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16m1_ta_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfcvt_f_xu_v_f16m2_ta(vuint16m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f16m2_ta )?} 1 } } */

vfloat16m2_t 
test_vfcvt_f_xu_v_f16m2_ta_vl31(vuint16m2_t op1)
{
  return vfcvt_f_xu_v_f16m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f16m2_ta_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfcvt_f_xu_v_f16m4_ta(vuint16m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f16m4_ta )?} 1 } } */

vfloat16m4_t 
test_vfcvt_f_xu_v_f16m4_ta_vl31(vuint16m4_t op1)
{
  return vfcvt_f_xu_v_f16m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f16m4_ta_vl31 )?} 1 } } */

vfloat16m8_t 
test_vfcvt_f_xu_v_f16m8_ta(vuint16m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f16m8_ta )?} 1 } } */

vfloat16m8_t 
test_vfcvt_f_xu_v_f16m8_ta_vl31(vuint16m8_t op1)
{
  return vfcvt_f_xu_v_f16m8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f16m8_ta_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfcvt_f_xu_v_f32mf2_ta(vuint32mf2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32mf2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32mf2_ta )?} 1 } } */

vfloat32mf2_t 
test_vfcvt_f_xu_v_f32mf2_ta_vl31(vuint32mf2_t op1)
{
  return vfcvt_f_xu_v_f32mf2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32mf2_ta_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfcvt_f_xu_v_f32m1_ta(vuint32m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32m1_ta )?} 1 } } */

vfloat32m1_t 
test_vfcvt_f_xu_v_f32m1_ta_vl31(vuint32m1_t op1)
{
  return vfcvt_f_xu_v_f32m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32m1_ta_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfcvt_f_xu_v_f32m2_ta(vuint32m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f32m2_ta )?} 1 } } */

vfloat32m2_t 
test_vfcvt_f_xu_v_f32m2_ta_vl31(vuint32m2_t op1)
{
  return vfcvt_f_xu_v_f32m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f32m2_ta_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfcvt_f_xu_v_f32m4_ta(vuint32m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f32m4_ta )?} 1 } } */

vfloat32m4_t 
test_vfcvt_f_xu_v_f32m4_ta_vl31(vuint32m4_t op1)
{
  return vfcvt_f_xu_v_f32m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f32m4_ta_vl31 )?} 1 } } */

vfloat32m8_t 
test_vfcvt_f_xu_v_f32m8_ta(vuint32m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f32m8_ta )?} 1 } } */

vfloat32m8_t 
test_vfcvt_f_xu_v_f32m8_ta_vl31(vuint32m8_t op1)
{
  return vfcvt_f_xu_v_f32m8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f32m8_ta_vl31 )?} 1 } } */

vfloat64m1_t 
test_vfcvt_f_xu_v_f64m1_ta(vuint64m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f64m1_ta )?} 1 } } */

vfloat64m1_t 
test_vfcvt_f_xu_v_f64m1_ta_vl31(vuint64m1_t op1)
{
  return vfcvt_f_xu_v_f64m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f64m1_ta_vl31 )?} 1 } } */

vfloat64m2_t 
test_vfcvt_f_xu_v_f64m2_ta(vuint64m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f64m2_ta )?} 1 } } */

vfloat64m2_t 
test_vfcvt_f_xu_v_f64m2_ta_vl31(vuint64m2_t op1)
{
  return vfcvt_f_xu_v_f64m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f64m2_ta_vl31 )?} 1 } } */

vfloat64m4_t 
test_vfcvt_f_xu_v_f64m4_ta(vuint64m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f64m4_ta )?} 1 } } */

vfloat64m4_t 
test_vfcvt_f_xu_v_f64m4_ta_vl31(vuint64m4_t op1)
{
  return vfcvt_f_xu_v_f64m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f64m4_ta_vl31 )?} 1 } } */

vfloat64m8_t 
test_vfcvt_f_xu_v_f64m8_ta(vuint64m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f64m8_ta )?} 1 } } */

vfloat64m8_t 
test_vfcvt_f_xu_v_f64m8_ta_vl31(vuint64m8_t op1)
{
  return vfcvt_f_xu_v_f64m8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f64m8_ta_vl31 )?} 1 } } */

vfloat16mf4_t 
test_vfcvt_f_xu_v_f16mf4_tu(vfloat16mf4_t dest, vuint16mf4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16mf4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf4_tu )?} 1 } } */

vfloat16mf4_t 
test_vfcvt_f_xu_v_f16mf4_tu_vl31(vfloat16mf4_t dest, vuint16mf4_t op1)
{
  return vfcvt_f_xu_v_f16mf4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf4_tu_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vfcvt_f_xu_v_f16mf2_tu(vfloat16mf2_t dest, vuint16mf2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf2_tu )?} 1 } } */

vfloat16mf2_t 
test_vfcvt_f_xu_v_f16mf2_tu_vl31(vfloat16mf2_t dest, vuint16mf2_t op1)
{
  return vfcvt_f_xu_v_f16mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16mf2_tu_vl31 )?} 1 } } */

vfloat16m1_t 
test_vfcvt_f_xu_v_f16m1_tu(vfloat16m1_t dest, vuint16m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16m1_tu )?} 1 } } */

vfloat16m1_t 
test_vfcvt_f_xu_v_f16m1_tu_vl31(vfloat16m1_t dest, vuint16m1_t op1)
{
  return vfcvt_f_xu_v_f16m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f16m1_tu_vl31 )?} 1 } } */

vfloat16m2_t 
test_vfcvt_f_xu_v_f16m2_tu(vfloat16m2_t dest, vuint16m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f16m2_tu )?} 1 } } */

vfloat16m2_t 
test_vfcvt_f_xu_v_f16m2_tu_vl31(vfloat16m2_t dest, vuint16m2_t op1)
{
  return vfcvt_f_xu_v_f16m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f16m2_tu_vl31 )?} 1 } } */

vfloat16m4_t 
test_vfcvt_f_xu_v_f16m4_tu(vfloat16m4_t dest, vuint16m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f16m4_tu )?} 1 } } */

vfloat16m4_t 
test_vfcvt_f_xu_v_f16m4_tu_vl31(vfloat16m4_t dest, vuint16m4_t op1)
{
  return vfcvt_f_xu_v_f16m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f16m4_tu_vl31 )?} 1 } } */

vfloat16m8_t 
test_vfcvt_f_xu_v_f16m8_tu(vfloat16m8_t dest, vuint16m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f16m8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f16m8_tu )?} 1 } } */

vfloat16m8_t 
test_vfcvt_f_xu_v_f16m8_tu_vl31(vfloat16m8_t dest, vuint16m8_t op1)
{
  return vfcvt_f_xu_v_f16m8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f16m8_tu_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfcvt_f_xu_v_f32mf2_tu(vfloat32mf2_t dest, vuint32mf2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32mf2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32mf2_tu )?} 1 } } */

vfloat32mf2_t 
test_vfcvt_f_xu_v_f32mf2_tu_vl31(vfloat32mf2_t dest, vuint32mf2_t op1)
{
  return vfcvt_f_xu_v_f32mf2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32mf2_tu_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfcvt_f_xu_v_f32m1_tu(vfloat32m1_t dest, vuint32m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32m1_tu )?} 1 } } */

vfloat32m1_t 
test_vfcvt_f_xu_v_f32m1_tu_vl31(vfloat32m1_t dest, vuint32m1_t op1)
{
  return vfcvt_f_xu_v_f32m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f32m1_tu_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfcvt_f_xu_v_f32m2_tu(vfloat32m2_t dest, vuint32m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f32m2_tu )?} 1 } } */

vfloat32m2_t 
test_vfcvt_f_xu_v_f32m2_tu_vl31(vfloat32m2_t dest, vuint32m2_t op1)
{
  return vfcvt_f_xu_v_f32m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f32m2_tu_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfcvt_f_xu_v_f32m4_tu(vfloat32m4_t dest, vuint32m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f32m4_tu )?} 1 } } */

vfloat32m4_t 
test_vfcvt_f_xu_v_f32m4_tu_vl31(vfloat32m4_t dest, vuint32m4_t op1)
{
  return vfcvt_f_xu_v_f32m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f32m4_tu_vl31 )?} 1 } } */

vfloat32m8_t 
test_vfcvt_f_xu_v_f32m8_tu(vfloat32m8_t dest, vuint32m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f32m8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f32m8_tu )?} 1 } } */

vfloat32m8_t 
test_vfcvt_f_xu_v_f32m8_tu_vl31(vfloat32m8_t dest, vuint32m8_t op1)
{
  return vfcvt_f_xu_v_f32m8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f32m8_tu_vl31 )?} 1 } } */

vfloat64m1_t 
test_vfcvt_f_xu_v_f64m1_tu(vfloat64m1_t dest, vuint64m1_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f64m1_tu )?} 1 } } */

vfloat64m1_t 
test_vfcvt_f_xu_v_f64m1_tu_vl31(vfloat64m1_t dest, vuint64m1_t op1)
{
  return vfcvt_f_xu_v_f64m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfcvt_f_xu_v_f64m1_tu_vl31 )?} 1 } } */

vfloat64m2_t 
test_vfcvt_f_xu_v_f64m2_tu(vfloat64m2_t dest, vuint64m2_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f64m2_tu )?} 1 } } */

vfloat64m2_t 
test_vfcvt_f_xu_v_f64m2_tu_vl31(vfloat64m2_t dest, vuint64m2_t op1)
{
  return vfcvt_f_xu_v_f64m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfcvt_f_xu_v_f64m2_tu_vl31 )?} 1 } } */

vfloat64m4_t 
test_vfcvt_f_xu_v_f64m4_tu(vfloat64m4_t dest, vuint64m4_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f64m4_tu )?} 1 } } */

vfloat64m4_t 
test_vfcvt_f_xu_v_f64m4_tu_vl31(vfloat64m4_t dest, vuint64m4_t op1)
{
  return vfcvt_f_xu_v_f64m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfcvt_f_xu_v_f64m4_tu_vl31 )?} 1 } } */

vfloat64m8_t 
test_vfcvt_f_xu_v_f64m8_tu(vfloat64m8_t dest, vuint64m8_t op1, size_t vl)
{
  return vfcvt_f_xu_v_f64m8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f64m8_tu )?} 1 } } */

vfloat64m8_t 
test_vfcvt_f_xu_v_f64m8_tu_vl31(vfloat64m8_t dest, vuint64m8_t op1)
{
  return vfcvt_f_xu_v_f64m8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfcvt\.f\.xu\.v).)*\s+vfcvt\.f\.xu\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfcvt_f_xu_v_f64m8_tu_vl31 )?} 1 } } */
