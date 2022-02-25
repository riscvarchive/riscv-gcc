
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfmul_vv_f16mf4_vl32(vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfmul_vv_f16mf4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f16mf4_vl32 )?} 1 } } */

vfloat16mf2_t 
test_vfmul_vv_f16mf2_vl32(vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfmul_vv_f16mf2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f16mf2_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfmul_vv_f16m1_vl32(vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfmul_vv_f16m1(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f16m1_vl32 )?} 1 } } */

vfloat16m2_t 
test_vfmul_vv_f16m2_vl32(vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfmul_vv_f16m2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfmul_vv_f16m2_vl32 )?} 1 } } */

vfloat16m4_t 
test_vfmul_vv_f16m4_vl32(vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfmul_vv_f16m4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfmul_vv_f16m4_vl32 )?} 1 } } */

vfloat16m8_t 
test_vfmul_vv_f16m8_vl32(vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vfmul_vv_f16m8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfmul_vv_f16m8_vl32 )?} 1 } } */

vfloat32mf2_t 
test_vfmul_vv_f32mf2_vl32(vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfmul_vv_f32mf2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f32mf2_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfmul_vv_f32m1_vl32(vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfmul_vv_f32m1(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f32m1_vl32 )?} 1 } } */

vfloat32m2_t 
test_vfmul_vv_f32m2_vl32(vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfmul_vv_f32m2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfmul_vv_f32m2_vl32 )?} 1 } } */

vfloat32m4_t 
test_vfmul_vv_f32m4_vl32(vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfmul_vv_f32m4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfmul_vv_f32m4_vl32 )?} 1 } } */

vfloat32m8_t 
test_vfmul_vv_f32m8_vl32(vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vfmul_vv_f32m8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfmul_vv_f32m8_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfmul_vv_f64m1_vl32(vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfmul_vv_f64m1(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfmul_vv_f64m1_vl32 )?} 1 } } */

vfloat64m2_t 
test_vfmul_vv_f64m2_vl32(vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vfmul_vv_f64m2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vfmul_vv_f64m2_vl32 )?} 1 } } */

vfloat64m4_t 
test_vfmul_vv_f64m4_vl32(vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vfmul_vv_f64m4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vfmul_vv_f64m4_vl32 )?} 1 } } */

vfloat64m8_t 
test_vfmul_vv_f64m8_vl32(vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vfmul_vv_f64m8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmul\.vv).)*\s+vfmul\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vfmul_vv_f64m8_vl32 )?} 1 } } */
