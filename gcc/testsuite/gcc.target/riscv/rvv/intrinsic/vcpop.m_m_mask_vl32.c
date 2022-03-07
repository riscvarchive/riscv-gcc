
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


unsigned long
test_vcpop_m_b64_m_vl32(vbool64_t mask, vbool64_t op1)
{
  return vcpop_m_b64_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b64_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b32_m_vl32(vbool32_t mask, vbool32_t op1)
{
  return vcpop_m_b32_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b32_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b16_m_vl32(vbool16_t mask, vbool16_t op1)
{
  return vcpop_m_b16_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b16_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b8_m_vl32(vbool8_t mask, vbool8_t op1)
{
  return vcpop_m_b8_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b8_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b4_m_vl32(vbool4_t mask, vbool4_t op1)
{
  return vcpop_m_b4_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b4_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b2_m_vl32(vbool2_t mask, vbool2_t op1)
{
  return vcpop_m_b2_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b2_m_vl32 )?} 1 } } */

unsigned long
test_vcpop_m_b1_m_vl32(vbool1_t mask, vbool1_t op1)
{
  return vcpop_m_b1_m(mask, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vcpop\.m).)*\s+vcpop\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vcpop_m_b1_m_vl32 )?} 1 } } */
