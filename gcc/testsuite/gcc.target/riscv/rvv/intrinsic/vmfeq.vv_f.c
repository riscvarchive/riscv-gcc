
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmfeq_vv_f16mf4_b64(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vmfeq_vv_f16mf4_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16mf4_b64 )?} 1 } } */

vbool64_t 
test_vmfeq_vv_f16mf4_b64_vl31(vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmfeq_vv_f16mf4_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16mf4_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f16mf2_b32(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vmfeq_vv_f16mf2_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16mf2_b32 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f16mf2_b32_vl31(vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmfeq_vv_f16mf2_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16mf2_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f16m1_b16(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vmfeq_vv_f16m1_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16m1_b16 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f16m1_b16_vl31(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmfeq_vv_f16m1_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f16m1_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f16m2_b8(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vmfeq_vv_f16m2_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f16m2_b8 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f16m2_b8_vl31(vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmfeq_vv_f16m2_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f16m2_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmfeq_vv_f16m4_b4(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vmfeq_vv_f16m4_b4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f16m4_b4 )?} 1 } } */

vbool4_t 
test_vmfeq_vv_f16m4_b4_vl31(vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmfeq_vv_f16m4_b4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f16m4_b4_vl31 )?} 1 } } */

vbool2_t 
test_vmfeq_vv_f16m8_b2(vfloat16m8_t op1, vfloat16m8_t op2, size_t vl)
{
  return vmfeq_vv_f16m8_b2(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f16m8_b2 )?} 1 } } */

vbool2_t 
test_vmfeq_vv_f16m8_b2_vl31(vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmfeq_vv_f16m8_b2(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f16m8_b2_vl31 )?} 1 } } */

vbool64_t 
test_vmfeq_vv_f32mf2_b64(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vmfeq_vv_f32mf2_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f32mf2_b64 )?} 1 } } */

vbool64_t 
test_vmfeq_vv_f32mf2_b64_vl31(vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmfeq_vv_f32mf2_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f32mf2_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f32m1_b32(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vmfeq_vv_f32m1_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f32m1_b32 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f32m1_b32_vl31(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmfeq_vv_f32m1_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f32m1_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f32m2_b16(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vmfeq_vv_f32m2_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f32m2_b16 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f32m2_b16_vl31(vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmfeq_vv_f32m2_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f32m2_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f32m4_b8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vmfeq_vv_f32m4_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f32m4_b8 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f32m4_b8_vl31(vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmfeq_vv_f32m4_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f32m4_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmfeq_vv_f32m8_b4(vfloat32m8_t op1, vfloat32m8_t op2, size_t vl)
{
  return vmfeq_vv_f32m8_b4(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f32m8_b4 )?} 1 } } */

vbool4_t 
test_vmfeq_vv_f32m8_b4_vl31(vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmfeq_vv_f32m8_b4(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f32m8_b4_vl31 )?} 1 } } */

vbool64_t 
test_vmfeq_vv_f64m1_b64(vfloat64m1_t op1, vfloat64m1_t op2, size_t vl)
{
  return vmfeq_vv_f64m1_b64(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f64m1_b64 )?} 1 } } */

vbool64_t 
test_vmfeq_vv_f64m1_b64_vl31(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmfeq_vv_f64m1_b64(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmfeq_vv_f64m1_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f64m2_b32(vfloat64m2_t op1, vfloat64m2_t op2, size_t vl)
{
  return vmfeq_vv_f64m2_b32(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f64m2_b32 )?} 1 } } */

vbool32_t 
test_vmfeq_vv_f64m2_b32_vl31(vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmfeq_vv_f64m2_b32(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmfeq_vv_f64m2_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f64m4_b16(vfloat64m4_t op1, vfloat64m4_t op2, size_t vl)
{
  return vmfeq_vv_f64m4_b16(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f64m4_b16 )?} 1 } } */

vbool16_t 
test_vmfeq_vv_f64m4_b16_vl31(vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmfeq_vv_f64m4_b16(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmfeq_vv_f64m4_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f64m8_b8(vfloat64m8_t op1, vfloat64m8_t op2, size_t vl)
{
  return vmfeq_vv_f64m8_b8(op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f64m8_b8 )?} 1 } } */

vbool8_t 
test_vmfeq_vv_f64m8_b8_vl31(vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmfeq_vv_f64m8_b8(op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmfeq\.vv).)*\s+vmfeq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmfeq_vv_f64m8_b8_vl31 )?} 1 } } */
