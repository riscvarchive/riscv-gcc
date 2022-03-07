
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vfloat16m1_t 
test_vfredmax_vs_f16mf4_f16m1_m_tu_vl32(vbool64_t mask, vfloat16m1_t maskedoff, vfloat16mf4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf4_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16mf4_f16m1_m_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfredmax_vs_f16mf2_f16m1_m_tu_vl32(vbool32_t mask, vfloat16m1_t maskedoff, vfloat16mf2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16mf2_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16mf2_f16m1_m_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfredmax_vs_f16m1_f16m1_m_tu_vl32(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m1_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16m1_f16m1_m_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfredmax_vs_f16m2_f16m1_m_tu_vl32(vbool8_t mask, vfloat16m1_t maskedoff, vfloat16m2_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m2_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16m2_f16m1_m_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfredmax_vs_f16m4_f16m1_m_tu_vl32(vbool4_t mask, vfloat16m1_t maskedoff, vfloat16m4_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m4_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16m4_f16m1_m_tu_vl32 )?} 1 } } */

vfloat16m1_t 
test_vfredmax_vs_f16m8_f16m1_m_tu_vl32(vbool2_t mask, vfloat16m1_t maskedoff, vfloat16m8_t op1, vfloat16m1_t op2)
{
  return vfredmax_vs_f16m8_f16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f16m8_f16m1_m_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfredmax_vs_f32mf2_f32m1_m_tu_vl32(vbool64_t mask, vfloat32m1_t maskedoff, vfloat32mf2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32mf2_f32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f32mf2_f32m1_m_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfredmax_vs_f32m1_f32m1_m_tu_vl32(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m1_f32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f32m1_f32m1_m_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfredmax_vs_f32m2_f32m1_m_tu_vl32(vbool16_t mask, vfloat32m1_t maskedoff, vfloat32m2_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m2_f32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f32m2_f32m1_m_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfredmax_vs_f32m4_f32m1_m_tu_vl32(vbool8_t mask, vfloat32m1_t maskedoff, vfloat32m4_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m4_f32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f32m4_f32m1_m_tu_vl32 )?} 1 } } */

vfloat32m1_t 
test_vfredmax_vs_f32m8_f32m1_m_tu_vl32(vbool4_t mask, vfloat32m1_t maskedoff, vfloat32m8_t op1, vfloat32m1_t op2)
{
  return vfredmax_vs_f32m8_f32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f32m8_f32m1_m_tu_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfredmax_vs_f64m1_f64m1_m_tu_vl32(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m1_f64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f64m1_f64m1_m_tu_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfredmax_vs_f64m2_f64m1_m_tu_vl32(vbool32_t mask, vfloat64m1_t maskedoff, vfloat64m2_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m2_f64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f64m2_f64m1_m_tu_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfredmax_vs_f64m4_f64m1_m_tu_vl32(vbool16_t mask, vfloat64m1_t maskedoff, vfloat64m4_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m4_f64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f64m4_f64m1_m_tu_vl32 )?} 1 } } */

vfloat64m1_t 
test_vfredmax_vs_f64m8_f64m1_m_tu_vl32(vbool8_t mask, vfloat64m1_t maskedoff, vfloat64m8_t op1, vfloat64m1_t op2)
{
  return vfredmax_vs_f64m8_f64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vfredmax\.vs).)*\s+vfredmax\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfredmax_vs_f64m8_f64m1_m_tu_vl32 )?} 1 } } */
