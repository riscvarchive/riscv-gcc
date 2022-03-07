
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16mf4_t 
test_vfmv_s_f_f16mf4_vl32(vfloat16mf4_t dest, float16_t op1)
{
  return vfmv_s_f_f16mf4(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16mf4_vl32 )?} 1 } } */

vfloat16mf2_t 
test_vfmv_s_f_f16mf2_vl32(vfloat16mf2_t dest, float16_t op1)
{
  return vfmv_s_f_f16mf2(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16mf2_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfmv_s_f_f16m1_vl32(vfloat16m1_t dest, float16_t op1)
{
  return vfmv_s_f_f16m1(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16m1_vl32 )?} 1 } } */

vfloat16m2_t 
test_vfmv_s_f_f16m2_vl32(vfloat16m2_t dest, float16_t op1)
{
  return vfmv_s_f_f16m2(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16m2_vl32 )?} 1 } } */

vfloat16m4_t 
test_vfmv_s_f_f16m4_vl32(vfloat16m4_t dest, float16_t op1)
{
  return vfmv_s_f_f16m4(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16m4_vl32 )?} 1 } } */

vfloat16m8_t 
test_vfmv_s_f_f16m8_vl32(vfloat16m8_t dest, float16_t op1)
{
  return vfmv_s_f_f16m8(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f16m8_vl32 )?} 1 } } */

vfloat32mf2_t 
test_vfmv_s_f_f32mf2_vl32(vfloat32mf2_t dest, float32_t op1)
{
  return vfmv_s_f_f32mf2(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f32mf2_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfmv_s_f_f32m1_vl32(vfloat32m1_t dest, float32_t op1)
{
  return vfmv_s_f_f32m1(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f32m1_vl32 )?} 1 } } */

vfloat32m2_t 
test_vfmv_s_f_f32m2_vl32(vfloat32m2_t dest, float32_t op1)
{
  return vfmv_s_f_f32m2(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f32m2_vl32 )?} 1 } } */

vfloat32m4_t 
test_vfmv_s_f_f32m4_vl32(vfloat32m4_t dest, float32_t op1)
{
  return vfmv_s_f_f32m4(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f32m4_vl32 )?} 1 } } */

vfloat32m8_t 
test_vfmv_s_f_f32m8_vl32(vfloat32m8_t dest, float32_t op1)
{
  return vfmv_s_f_f32m8(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f32m8_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfmv_s_f_f64m1_vl32(vfloat64m1_t dest, float64_t op1)
{
  return vfmv_s_f_f64m1(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f64m1_vl32 )?} 1 } } */

vfloat64m2_t 
test_vfmv_s_f_f64m2_vl32(vfloat64m2_t dest, float64_t op1)
{
  return vfmv_s_f_f64m2(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f64m2_vl32 )?} 1 } } */

vfloat64m4_t 
test_vfmv_s_f_f64m4_vl32(vfloat64m4_t dest, float64_t op1)
{
  return vfmv_s_f_f64m4(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f64m4_vl32 )?} 1 } } */

vfloat64m8_t 
test_vfmv_s_f_f64m8_vl32(vfloat64m8_t dest, float64_t op1)
{
  return vfmv_s_f_f64m8(dest, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfmv\.s\.f).)*\s+vfmv\.s\.f\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n(?: test_vfmv_s_f_f64m8_vl32 )?} 1 } } */
