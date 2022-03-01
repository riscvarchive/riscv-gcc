
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat32mf2_t 
test_vfwnmsac_vv_f32mf2_ta(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwnmsac_vv_f32mf2_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32mf2_ta )?} 1 } } */

vfloat32mf2_t 
test_vfwnmsac_vv_f32mf2_ta_vl31(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwnmsac_vv_f32mf2_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32mf2_ta_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfwnmsac_vv_f32m1_ta(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m1_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m1_ta )?} 1 } } */

vfloat32m1_t 
test_vfwnmsac_vv_f32m1_ta_vl31(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwnmsac_vv_f32m1_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m1_ta_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfwnmsac_vv_f32m2_ta(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m2_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m2_ta )?} 1 } } */

vfloat32m2_t 
test_vfwnmsac_vv_f32m2_ta_vl31(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwnmsac_vv_f32m2_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m2_ta_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfwnmsac_vv_f32m4_ta(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m4_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f32m4_ta )?} 1 } } */

vfloat32m4_t 
test_vfwnmsac_vv_f32m4_ta_vl31(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwnmsac_vv_f32m4_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f32m4_ta_vl31 )?} 1 } } */

vfloat32m8_t 
test_vfwnmsac_vv_f32m8_ta(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m8_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f32m8_ta )?} 1 } } */

vfloat32m8_t 
test_vfwnmsac_vv_f32m8_ta_vl31(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwnmsac_vv_f32m8_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f32m8_ta_vl31 )?} 1 } } */

vfloat64m1_t 
test_vfwnmsac_vv_f64m1_ta(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m1_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m1_ta )?} 1 } } */

vfloat64m1_t 
test_vfwnmsac_vv_f64m1_ta_vl31(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwnmsac_vv_f64m1_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m1_ta_vl31 )?} 1 } } */

vfloat64m2_t 
test_vfwnmsac_vv_f64m2_ta(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m2_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m2_ta )?} 1 } } */

vfloat64m2_t 
test_vfwnmsac_vv_f64m2_ta_vl31(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwnmsac_vv_f64m2_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m2_ta_vl31 )?} 1 } } */

vfloat64m4_t 
test_vfwnmsac_vv_f64m4_ta(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m4_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f64m4_ta )?} 1 } } */

vfloat64m4_t 
test_vfwnmsac_vv_f64m4_ta_vl31(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwnmsac_vv_f64m4_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f64m4_ta_vl31 )?} 1 } } */

vfloat64m8_t 
test_vfwnmsac_vv_f64m8_ta(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m8_ta(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f64m8_ta )?} 1 } } */

vfloat64m8_t 
test_vfwnmsac_vv_f64m8_ta_vl31(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwnmsac_vv_f64m8_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f64m8_ta_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vfwnmsac_vv_f32mf2_tu(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwnmsac_vv_f32mf2_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32mf2_tu )?} 1 } } */

vfloat32mf2_t 
test_vfwnmsac_vv_f32mf2_tu_vl31(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwnmsac_vv_f32mf2_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32mf2_tu_vl31 )?} 1 } } */

vfloat32m1_t 
test_vfwnmsac_vv_f32m1_tu(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m1_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m1_tu )?} 1 } } */

vfloat32m1_t 
test_vfwnmsac_vv_f32m1_tu_vl31(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwnmsac_vv_f32m1_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m1_tu_vl31 )?} 1 } } */

vfloat32m2_t 
test_vfwnmsac_vv_f32m2_tu(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m2_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m2_tu )?} 1 } } */

vfloat32m2_t 
test_vfwnmsac_vv_f32m2_tu_vl31(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwnmsac_vv_f32m2_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f32m2_tu_vl31 )?} 1 } } */

vfloat32m4_t 
test_vfwnmsac_vv_f32m4_tu(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m4_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f32m4_tu )?} 1 } } */

vfloat32m4_t 
test_vfwnmsac_vv_f32m4_tu_vl31(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwnmsac_vv_f32m4_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f32m4_tu_vl31 )?} 1 } } */

vfloat32m8_t 
test_vfwnmsac_vv_f32m8_tu(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwnmsac_vv_f32m8_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f32m8_tu )?} 1 } } */

vfloat32m8_t 
test_vfwnmsac_vv_f32m8_tu_vl31(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwnmsac_vv_f32m8_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f32m8_tu_vl31 )?} 1 } } */

vfloat64m1_t 
test_vfwnmsac_vv_f64m1_tu(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m1_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m1_tu )?} 1 } } */

vfloat64m1_t 
test_vfwnmsac_vv_f64m1_tu_vl31(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwnmsac_vv_f64m1_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m1_tu_vl31 )?} 1 } } */

vfloat64m2_t 
test_vfwnmsac_vv_f64m2_tu(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m2_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m2_tu )?} 1 } } */

vfloat64m2_t 
test_vfwnmsac_vv_f64m2_tu_vl31(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwnmsac_vv_f64m2_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfwnmsac_vv_f64m2_tu_vl31 )?} 1 } } */

vfloat64m4_t 
test_vfwnmsac_vv_f64m4_tu(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m4_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f64m4_tu )?} 1 } } */

vfloat64m4_t 
test_vfwnmsac_vv_f64m4_tu_vl31(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwnmsac_vv_f64m4_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfwnmsac_vv_f64m4_tu_vl31 )?} 1 } } */

vfloat64m8_t 
test_vfwnmsac_vv_f64m8_tu(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwnmsac_vv_f64m8_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f64m8_tu )?} 1 } } */

vfloat64m8_t 
test_vfwnmsac_vv_f64m8_tu_vl31(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwnmsac_vv_f64m8_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vfwnmsac\.vv).)*\s+vfwnmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfwnmsac_vv_f64m8_tu_vl31 )?} 1 } } */
