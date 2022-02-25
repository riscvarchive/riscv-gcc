
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vmerge_vvm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmerge_vvm_f16mf4(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16mf4 )?} 1 } } */

vfloat16mf4_t 
test_vmerge_vvm_f16mf4_vl31(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmerge_vvm_f16mf4(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16mf4_vl31 )?} 1 } } */

vfloat16mf2_t 
test_vmerge_vvm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmerge_vvm_f16mf2(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16mf2 )?} 1 } } */

vfloat16mf2_t 
test_vmerge_vvm_f16mf2_vl31(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmerge_vvm_f16mf2(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16mf2_vl31 )?} 1 } } */

vfloat16m1_t 
test_vmerge_vvm_f16m1(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmerge_vvm_f16m1(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16m1 )?} 1 } } */

vfloat16m1_t 
test_vmerge_vvm_f16m1_vl31(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmerge_vvm_f16m1(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f16m1_vl31 )?} 1 } } */

vfloat16m2_t 
test_vmerge_vvm_f16m2(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmerge_vvm_f16m2(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f16m2 )?} 1 } } */

vfloat16m2_t 
test_vmerge_vvm_f16m2_vl31(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmerge_vvm_f16m2(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f16m2_vl31 )?} 1 } } */

vfloat16m4_t 
test_vmerge_vvm_f16m4(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmerge_vvm_f16m4(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f16m4 )?} 1 } } */

vfloat16m4_t 
test_vmerge_vvm_f16m4_vl31(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmerge_vvm_f16m4(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f16m4_vl31 )?} 1 } } */

vfloat16m8_t 
test_vmerge_vvm_f16m8(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmerge_vvm_f16m8(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f16m8 )?} 1 } } */

vfloat16m8_t 
test_vmerge_vvm_f16m8_vl31(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmerge_vvm_f16m8(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f16m8_vl31 )?} 1 } } */

vfloat32mf2_t 
test_vmerge_vvm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmerge_vvm_f32mf2(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f32mf2 )?} 1 } } */

vfloat32mf2_t 
test_vmerge_vvm_f32mf2_vl31(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmerge_vvm_f32mf2(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f32mf2_vl31 )?} 1 } } */

vfloat32m1_t 
test_vmerge_vvm_f32m1(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmerge_vvm_f32m1(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f32m1 )?} 1 } } */

vfloat32m1_t 
test_vmerge_vvm_f32m1_vl31(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmerge_vvm_f32m1(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f32m1_vl31 )?} 1 } } */

vfloat32m2_t 
test_vmerge_vvm_f32m2(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmerge_vvm_f32m2(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f32m2 )?} 1 } } */

vfloat32m2_t 
test_vmerge_vvm_f32m2_vl31(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmerge_vvm_f32m2(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f32m2_vl31 )?} 1 } } */

vfloat32m4_t 
test_vmerge_vvm_f32m4(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmerge_vvm_f32m4(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f32m4 )?} 1 } } */

vfloat32m4_t 
test_vmerge_vvm_f32m4_vl31(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmerge_vvm_f32m4(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f32m4_vl31 )?} 1 } } */

vfloat32m8_t 
test_vmerge_vvm_f32m8(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmerge_vvm_f32m8(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f32m8 )?} 1 } } */

vfloat32m8_t 
test_vmerge_vvm_f32m8_vl31(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmerge_vvm_f32m8(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f32m8_vl31 )?} 1 } } */

vfloat64m1_t 
test_vmerge_vvm_f64m1(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmerge_vvm_f64m1(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f64m1 )?} 1 } } */

vfloat64m1_t 
test_vmerge_vvm_f64m1_vl31(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmerge_vvm_f64m1(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\n(?: test_vmerge_vvm_f64m1_vl31 )?} 1 } } */

vfloat64m2_t 
test_vmerge_vvm_f64m2(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmerge_vvm_f64m2(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f64m2 )?} 1 } } */

vfloat64m2_t 
test_vmerge_vvm_f64m2_vl31(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmerge_vvm_f64m2(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\n(?: test_vmerge_vvm_f64m2_vl31 )?} 1 } } */

vfloat64m4_t 
test_vmerge_vvm_f64m4(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmerge_vvm_f64m4(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f64m4 )?} 1 } } */

vfloat64m4_t 
test_vmerge_vvm_f64m4_vl31(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmerge_vvm_f64m4(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\n(?: test_vmerge_vvm_f64m4_vl31 )?} 1 } } */

vfloat64m8_t 
test_vmerge_vvm_f64m8(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmerge_vvm_f64m8(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f64m8 )?} 1 } } */

vfloat64m8_t 
test_vmerge_vvm_f64m8_vl31(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmerge_vvm_f64m8(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmerge\.vvm).)*\s+vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\n(?: test_vmerge_vvm_f64m8_vl31 )?} 1 } } */
