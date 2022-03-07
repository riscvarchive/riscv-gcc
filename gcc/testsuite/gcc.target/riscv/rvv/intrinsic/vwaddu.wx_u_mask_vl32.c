
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint16mf4_t 
test_vwaddu_wx_u16mf4_m_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2)
{
  return vwaddu_wx_u16mf4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16mf4_m_vl32 )?} 1 } } */

vuint16mf2_t 
test_vwaddu_wx_u16mf2_m_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2)
{
  return vwaddu_wx_u16mf2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16mf2_m_vl32 )?} 1 } } */

vuint16m1_t 
test_vwaddu_wx_u16m1_m_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2)
{
  return vwaddu_wx_u16m1_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16m1_m_vl32 )?} 1 } } */

vuint16m2_t 
test_vwaddu_wx_u16m2_m_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2)
{
  return vwaddu_wx_u16m2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16m2_m_vl32 )?} 1 } } */

vuint16m4_t 
test_vwaddu_wx_u16m4_m_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2)
{
  return vwaddu_wx_u16m4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16m4_m_vl32 )?} 1 } } */

vuint16m8_t 
test_vwaddu_wx_u16m8_m_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2)
{
  return vwaddu_wx_u16m8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u16m8_m_vl32 )?} 1 } } */

vuint32mf2_t 
test_vwaddu_wx_u32mf2_m_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2)
{
  return vwaddu_wx_u32mf2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u32mf2_m_vl32 )?} 1 } } */

vuint32m1_t 
test_vwaddu_wx_u32m1_m_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2)
{
  return vwaddu_wx_u32m1_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u32m1_m_vl32 )?} 1 } } */

vuint32m2_t 
test_vwaddu_wx_u32m2_m_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2)
{
  return vwaddu_wx_u32m2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u32m2_m_vl32 )?} 1 } } */

vuint32m4_t 
test_vwaddu_wx_u32m4_m_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2)
{
  return vwaddu_wx_u32m4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u32m4_m_vl32 )?} 1 } } */

vuint32m8_t 
test_vwaddu_wx_u32m8_m_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2)
{
  return vwaddu_wx_u32m8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u32m8_m_vl32 )?} 1 } } */

vuint64m1_t 
test_vwaddu_wx_u64m1_m_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2)
{
  return vwaddu_wx_u64m1_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u64m1_m_vl32 )?} 1 } } */

vuint64m2_t 
test_vwaddu_wx_u64m2_m_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2)
{
  return vwaddu_wx_u64m2_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u64m2_m_vl32 )?} 1 } } */

vuint64m4_t 
test_vwaddu_wx_u64m4_m_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2)
{
  return vwaddu_wx_u64m4_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u64m4_m_vl32 )?} 1 } } */

vuint64m8_t 
test_vwaddu_wx_u64m8_m_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2)
{
  return vwaddu_wx_u64m8_m(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vwaddu\.wx).)*\s+vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwaddu_wx_u64m8_m_vl32 )?} 1 } } */
