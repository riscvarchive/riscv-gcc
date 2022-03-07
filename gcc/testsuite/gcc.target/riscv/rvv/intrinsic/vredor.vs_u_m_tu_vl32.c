
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_m_tu_vl32(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8mf8_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8mf8_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_m_tu_vl32(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8mf4_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8mf4_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_m_tu_vl32(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8mf2_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8mf2_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8m1_u8m1_m_tu_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8m1_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8m1_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8m2_u8m1_m_tu_vl32(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8m2_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8m2_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8m4_u8m1_m_tu_vl32(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8m4_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8m4_u8m1_m_tu_vl32 )?} 1 } } */

vuint8m1_t 
test_vredor_vs_u8m8_u8m1_m_tu_vl32(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredor_vs_u8m8_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u8m8_u8m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_m_tu_vl32(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16mf4_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16mf4_u16m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_m_tu_vl32(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16mf2_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16mf2_u16m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16m1_u16m1_m_tu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16m1_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16m1_u16m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16m2_u16m1_m_tu_vl32(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16m2_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16m2_u16m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16m4_u16m1_m_tu_vl32(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16m4_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16m4_u16m1_m_tu_vl32 )?} 1 } } */

vuint16m1_t 
test_vredor_vs_u16m8_u16m1_m_tu_vl32(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredor_vs_u16m8_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u16m8_u16m1_m_tu_vl32 )?} 1 } } */

vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_m_tu_vl32(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredor_vs_u32mf2_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u32mf2_u32m1_m_tu_vl32 )?} 1 } } */

vuint32m1_t 
test_vredor_vs_u32m1_u32m1_m_tu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredor_vs_u32m1_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u32m1_u32m1_m_tu_vl32 )?} 1 } } */

vuint32m1_t 
test_vredor_vs_u32m2_u32m1_m_tu_vl32(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredor_vs_u32m2_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u32m2_u32m1_m_tu_vl32 )?} 1 } } */

vuint32m1_t 
test_vredor_vs_u32m4_u32m1_m_tu_vl32(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredor_vs_u32m4_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u32m4_u32m1_m_tu_vl32 )?} 1 } } */

vuint32m1_t 
test_vredor_vs_u32m8_u32m1_m_tu_vl32(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredor_vs_u32m8_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u32m8_u32m1_m_tu_vl32 )?} 1 } } */

vuint64m1_t 
test_vredor_vs_u64m1_u64m1_m_tu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredor_vs_u64m1_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u64m1_u64m1_m_tu_vl32 )?} 1 } } */

vuint64m1_t 
test_vredor_vs_u64m2_u64m1_m_tu_vl32(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredor_vs_u64m2_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u64m2_u64m1_m_tu_vl32 )?} 1 } } */

vuint64m1_t 
test_vredor_vs_u64m4_u64m1_m_tu_vl32(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredor_vs_u64m4_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u64m4_u64m1_m_tu_vl32 )?} 1 } } */

vuint64m1_t 
test_vredor_vs_u64m8_u64m1_m_tu_vl32(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredor_vs_u64m8_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vredor\.vs).)*\s+vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredor_vs_u64m8_u64m1_m_tu_vl32 )?} 1 } } */
