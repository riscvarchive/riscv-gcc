
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


long 
test_vfirst_m_b64_vl32(vbool64_t op1)
{
  return vfirst_m_b64(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b64_vl32 )?} 1 } } */

long 
test_vfirst_m_b32_vl32(vbool32_t op1)
{
  return vfirst_m_b32(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b32_vl32 )?} 1 } } */

long 
test_vfirst_m_b16_vl32(vbool16_t op1)
{
  return vfirst_m_b16(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b16_vl32 )?} 1 } } */

long 
test_vfirst_m_b8_vl32(vbool8_t op1)
{
  return vfirst_m_b8(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b8_vl32 )?} 1 } } */

long 
test_vfirst_m_b4_vl32(vbool4_t op1)
{
  return vfirst_m_b4(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b4_vl32 )?} 1 } } */

long 
test_vfirst_m_b2_vl32(vbool2_t op1)
{
  return vfirst_m_b2(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b2_vl32 )?} 1 } } */

long 
test_vfirst_m_b1_vl32(vbool1_t op1)
{
  return vfirst_m_b1(op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vfirst\.m).)*\s+vfirst\.m\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vfirst_m_b1_vl32 )?} 1 } } */
