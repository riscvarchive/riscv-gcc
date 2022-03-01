
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfsgnjx_vf_f16mf4_ta_vl32(vfloat16mf4_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16mf4_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16mf4_ta_vl32 )?} 1 } } */

vfloat16mf2_t 
test_vfsgnjx_vf_f16mf2_ta_vl32(vfloat16mf2_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16mf2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16mf2_ta_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfsgnjx_vf_f16m1_ta_vl32(vfloat16m1_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m1_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m1_ta_vl32 )?} 1 } } */

vfloat16m2_t 
test_vfsgnjx_vf_f16m2_ta_vl32(vfloat16m2_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m2_ta_vl32 )?} 1 } } */

vfloat16m4_t 
test_vfsgnjx_vf_f16m4_ta_vl32(vfloat16m4_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m4_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m4_ta_vl32 )?} 1 } } */

vfloat16m8_t 
test_vfsgnjx_vf_f16m8_ta_vl32(vfloat16m8_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m8_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m8_ta_vl32 )?} 1 } } */

vfloat32mf2_t 
test_vfsgnjx_vf_f32mf2_ta_vl32(vfloat32mf2_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32mf2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32mf2_ta_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfsgnjx_vf_f32m1_ta_vl32(vfloat32m1_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m1_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m1_ta_vl32 )?} 1 } } */

vfloat32m2_t 
test_vfsgnjx_vf_f32m2_ta_vl32(vfloat32m2_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m2_ta_vl32 )?} 1 } } */

vfloat32m4_t 
test_vfsgnjx_vf_f32m4_ta_vl32(vfloat32m4_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m4_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m4_ta_vl32 )?} 1 } } */

vfloat32m8_t 
test_vfsgnjx_vf_f32m8_ta_vl32(vfloat32m8_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m8_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m8_ta_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfsgnjx_vf_f64m1_ta_vl32(vfloat64m1_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m1_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m1_ta_vl32 )?} 1 } } */

vfloat64m2_t 
test_vfsgnjx_vf_f64m2_ta_vl32(vfloat64m2_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m2_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m2_ta_vl32 )?} 1 } } */

vfloat64m4_t 
test_vfsgnjx_vf_f64m4_ta_vl32(vfloat64m4_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m4_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m4_ta_vl32 )?} 1 } } */

vfloat64m8_t 
test_vfsgnjx_vf_f64m8_ta_vl32(vfloat64m8_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m8_ta(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m8_ta_vl32 )?} 1 } } */

vfloat16mf4_t 
test_vfsgnjx_vf_f16mf4_tu_vl32(vfloat16mf4_t dest, vfloat16mf4_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16mf4_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16mf4_tu_vl32 )?} 1 } } */

vfloat16mf2_t 
test_vfsgnjx_vf_f16mf2_tu_vl32(vfloat16mf2_t dest, vfloat16mf2_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16mf2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16mf2_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfsgnjx_vf_f16m1_tu_vl32(vfloat16m1_t dest, vfloat16m1_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m1_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m1_tu_vl32 )?} 1 } } */

vfloat16m2_t 
test_vfsgnjx_vf_f16m2_tu_vl32(vfloat16m2_t dest, vfloat16m2_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m2_tu_vl32 )?} 1 } } */

vfloat16m4_t 
test_vfsgnjx_vf_f16m4_tu_vl32(vfloat16m4_t dest, vfloat16m4_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m4_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m4_tu_vl32 )?} 1 } } */

vfloat16m8_t 
test_vfsgnjx_vf_f16m8_tu_vl32(vfloat16m8_t dest, vfloat16m8_t op1, float16_t op2)
{
  return vfsgnjx_vf_f16m8_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f16m8_tu_vl32 )?} 1 } } */

vfloat32mf2_t 
test_vfsgnjx_vf_f32mf2_tu_vl32(vfloat32mf2_t dest, vfloat32mf2_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32mf2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32mf2_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfsgnjx_vf_f32m1_tu_vl32(vfloat32m1_t dest, vfloat32m1_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m1_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m1_tu_vl32 )?} 1 } } */

vfloat32m2_t 
test_vfsgnjx_vf_f32m2_tu_vl32(vfloat32m2_t dest, vfloat32m2_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m2_tu_vl32 )?} 1 } } */

vfloat32m4_t 
test_vfsgnjx_vf_f32m4_tu_vl32(vfloat32m4_t dest, vfloat32m4_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m4_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m4_tu_vl32 )?} 1 } } */

vfloat32m8_t 
test_vfsgnjx_vf_f32m8_tu_vl32(vfloat32m8_t dest, vfloat32m8_t op1, float32_t op2)
{
  return vfsgnjx_vf_f32m8_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f32m8_tu_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfsgnjx_vf_f64m1_tu_vl32(vfloat64m1_t dest, vfloat64m1_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m1_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m1_tu_vl32 )?} 1 } } */

vfloat64m2_t 
test_vfsgnjx_vf_f64m2_tu_vl32(vfloat64m2_t dest, vfloat64m2_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m2_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m2_tu_vl32 )?} 1 } } */

vfloat64m4_t 
test_vfsgnjx_vf_f64m4_tu_vl32(vfloat64m4_t dest, vfloat64m4_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m4_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m4_tu_vl32 )?} 1 } } */

vfloat64m8_t 
test_vfsgnjx_vf_f64m8_tu_vl32(vfloat64m8_t dest, vfloat64m8_t op1, float64_t op2)
{
  return vfsgnjx_vf_f64m8_tu(dest, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfsgnjx\.vf).)*\s+vfsgnjx\.vf\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfsgnjx_vf_f64m8_tu_vl32 )?} 1 } } */
