
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmfne_vv_f16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vmfne_vv_f16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f16mf4_b64_m_vl32 )?} 1 } } */

vbool32_t 
test_vmfne_vv_f16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vmfne_vv_f16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f16mf2_b32_m_vl32 )?} 1 } } */

vbool16_t 
test_vmfne_vv_f16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vmfne_vv_f16m1_b16_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f16m1_b16_m_vl32 )?} 1 } } */

vbool8_t 
test_vmfne_vv_f16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vmfne_vv_f16m2_b8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vmfne_vv_f16m2_b8_m_vl32 )?} 1 } } */

vbool4_t 
test_vmfne_vv_f16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vmfne_vv_f16m4_b4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vmfne_vv_f16m4_b4_m_vl32 )?} 1 } } */

vbool2_t 
test_vmfne_vv_f16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2)
{
  return vmfne_vv_f16m8_b2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vmfne_vv_f16m8_b2_m_vl32 )?} 1 } } */

vbool64_t 
test_vmfne_vv_f32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vmfne_vv_f32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f32mf2_b64_m_vl32 )?} 1 } } */

vbool32_t 
test_vmfne_vv_f32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vmfne_vv_f32m1_b32_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f32m1_b32_m_vl32 )?} 1 } } */

vbool16_t 
test_vmfne_vv_f32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vmfne_vv_f32m2_b16_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vmfne_vv_f32m2_b16_m_vl32 )?} 1 } } */

vbool8_t 
test_vmfne_vv_f32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vmfne_vv_f32m4_b8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vmfne_vv_f32m4_b8_m_vl32 )?} 1 } } */

vbool4_t 
test_vmfne_vv_f32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2)
{
  return vmfne_vv_f32m8_b4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vmfne_vv_f32m8_b4_m_vl32 )?} 1 } } */

vbool64_t 
test_vmfne_vv_f64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2)
{
  return vmfne_vv_f64m1_b64_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmfne_vv_f64m1_b64_m_vl32 )?} 1 } } */

vbool32_t 
test_vmfne_vv_f64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2)
{
  return vmfne_vv_f64m2_b32_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vmfne_vv_f64m2_b32_m_vl32 )?} 1 } } */

vbool16_t 
test_vmfne_vv_f64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2)
{
  return vmfne_vv_f64m4_b16_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vmfne_vv_f64m4_b16_m_vl32 )?} 1 } } */

vbool8_t 
test_vmfne_vv_f64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2)
{
  return vmfne_vv_f64m8_b8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmfne\.vv).)*\s+vmfne\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vmfne_vv_f64m8_b8_m_vl32 )?} 1 } } */
