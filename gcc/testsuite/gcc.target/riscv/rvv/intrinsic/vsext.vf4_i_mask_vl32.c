
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint32mf2_t 
test_vsext_vf4_i32mf2_m_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint8mf8_t op1)
{
  return vsext_vf4_i32mf2_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i32mf2_m_vl32 )?} 1 } } */

vint32m1_t 
test_vsext_vf4_i32m1_m_vl32(vbool32_t mask, vint32m1_t maskedoff, vint8mf4_t op1)
{
  return vsext_vf4_i32m1_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i32m1_m_vl32 )?} 1 } } */

vint32m2_t 
test_vsext_vf4_i32m2_m_vl32(vbool16_t mask, vint32m2_t maskedoff, vint8mf2_t op1)
{
  return vsext_vf4_i32m2_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i32m2_m_vl32 )?} 1 } } */

vint32m4_t 
test_vsext_vf4_i32m4_m_vl32(vbool8_t mask, vint32m4_t maskedoff, vint8m1_t op1)
{
  return vsext_vf4_i32m4_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i32m4_m_vl32 )?} 1 } } */

vint32m8_t 
test_vsext_vf4_i32m8_m_vl32(vbool4_t mask, vint32m8_t maskedoff, vint8m2_t op1)
{
  return vsext_vf4_i32m8_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[08]|v16|v24),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsext_vf4_i32m8_m_vl32 )?} 1 } } */

vint64m1_t 
test_vsext_vf4_i64m1_m_vl32(vbool64_t mask, vint64m1_t maskedoff, vint16mf4_t op1)
{
  return vsext_vf4_i64m1_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i64m1_m_vl32 )?} 1 } } */

vint64m2_t 
test_vsext_vf4_i64m2_m_vl32(vbool32_t mask, vint64m2_t maskedoff, vint16mf2_t op1)
{
  return vsext_vf4_i64m2_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i64m2_m_vl32 )?} 1 } } */

vint64m4_t 
test_vsext_vf4_i64m4_m_vl32(vbool16_t mask, vint64m4_t maskedoff, vint16m1_t op1)
{
  return vsext_vf4_i64m4_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsext_vf4_i64m4_m_vl32 )?} 1 } } */

vint64m8_t 
test_vsext_vf4_i64m8_m_vl32(vbool8_t mask, vint64m8_t maskedoff, vint16m2_t op1)
{
  return vsext_vf4_i64m8_m(mask, maskedoff, op1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vsext\.vf4).)*\s+vsext\.vf4\s+(?:v[08]|v16|v24),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsext_vf4_i64m8_m_vl32 )?} 1 } } */
