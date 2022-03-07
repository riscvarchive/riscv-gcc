
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint16m1_t 
test_vwredsum_vs_i8mf8_i16m1_m_ta_vl32(vbool64_t mask, vint16m1_t maskedoff, vint8mf8_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8mf8_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8mf8_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8mf4_i16m1_m_ta_vl32(vbool32_t mask, vint16m1_t maskedoff, vint8mf4_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8mf4_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8mf4_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8mf2_i16m1_m_ta_vl32(vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8mf2_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8mf2_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8m1_i16m1_m_ta_vl32(vbool8_t mask, vint16m1_t maskedoff, vint8m1_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8m1_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8m1_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8m2_i16m1_m_ta_vl32(vbool4_t mask, vint16m1_t maskedoff, vint8m2_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8m2_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8m2_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8m4_i16m1_m_ta_vl32(vbool2_t mask, vint16m1_t maskedoff, vint8m4_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8m4_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8m4_i16m1_m_ta_vl32 )?} 1 } } */

vint16m1_t 
test_vwredsum_vs_i8m8_i16m1_m_ta_vl32(vbool1_t mask, vint16m1_t maskedoff, vint8m8_t op1, vint16m1_t op2)
{
  return vwredsum_vs_i8m8_i16m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i8m8_i16m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16mf4_i32m1_m_ta_vl32(vbool64_t mask, vint32m1_t maskedoff, vint16mf4_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16mf4_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16mf4_i32m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16mf2_i32m1_m_ta_vl32(vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16mf2_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16mf2_i32m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16m1_i32m1_m_ta_vl32(vbool16_t mask, vint32m1_t maskedoff, vint16m1_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16m1_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16m1_i32m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16m2_i32m1_m_ta_vl32(vbool8_t mask, vint32m1_t maskedoff, vint16m2_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16m2_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16m2_i32m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16m4_i32m1_m_ta_vl32(vbool4_t mask, vint32m1_t maskedoff, vint16m4_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16m4_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16m4_i32m1_m_ta_vl32 )?} 1 } } */

vint32m1_t 
test_vwredsum_vs_i16m8_i32m1_m_ta_vl32(vbool2_t mask, vint32m1_t maskedoff, vint16m8_t op1, vint32m1_t op2)
{
  return vwredsum_vs_i16m8_i32m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i16m8_i32m1_m_ta_vl32 )?} 1 } } */

vint64m1_t 
test_vwredsum_vs_i32mf2_i64m1_m_ta_vl32(vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vint64m1_t op2)
{
  return vwredsum_vs_i32mf2_i64m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i32mf2_i64m1_m_ta_vl32 )?} 1 } } */

vint64m1_t 
test_vwredsum_vs_i32m1_i64m1_m_ta_vl32(vbool32_t mask, vint64m1_t maskedoff, vint32m1_t op1, vint64m1_t op2)
{
  return vwredsum_vs_i32m1_i64m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i32m1_i64m1_m_ta_vl32 )?} 1 } } */

vint64m1_t 
test_vwredsum_vs_i32m2_i64m1_m_ta_vl32(vbool16_t mask, vint64m1_t maskedoff, vint32m2_t op1, vint64m1_t op2)
{
  return vwredsum_vs_i32m2_i64m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i32m2_i64m1_m_ta_vl32 )?} 1 } } */

vint64m1_t 
test_vwredsum_vs_i32m4_i64m1_m_ta_vl32(vbool8_t mask, vint64m1_t maskedoff, vint32m4_t op1, vint64m1_t op2)
{
  return vwredsum_vs_i32m4_i64m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i32m4_i64m1_m_ta_vl32 )?} 1 } } */

vint64m1_t 
test_vwredsum_vs_i32m8_i64m1_m_ta_vl32(vbool4_t mask, vint64m1_t maskedoff, vint32m8_t op1, vint64m1_t op2)
{
  return vwredsum_vs_i32m8_i64m1_m_ta(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vwredsum\.vs).)*\s+vwredsum\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vwredsum_vs_i32m8_i64m1_m_ta_vl32 )?} 1 } } */
