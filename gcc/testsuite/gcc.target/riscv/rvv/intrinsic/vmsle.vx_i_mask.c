
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsle_vx_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf8_b64_m )?} 1 } } */

vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf8_b64_m_vl31 )?} 1 } } */

vbool32_t 
test_vmsle_vx_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf4_b32_m )?} 1 } } */

vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf4_b32_m_vl31 )?} 1 } } */

vbool16_t 
test_vmsle_vx_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf2_b16_m )?} 1 } } */

vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8mf2_b16_m_vl31 )?} 1 } } */

vbool8_t 
test_vmsle_vx_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m1_b8_m )?} 1 } } */

vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m1_b8_m_vl31 )?} 1 } } */

vbool4_t 
test_vmsle_vx_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m2_b4_m )?} 1 } } */

vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m2_b4_m_vl31 )?} 1 } } */

vbool2_t 
test_vmsle_vx_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m4_b2_m )?} 1 } } */

vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m4_b2_m_vl31 )?} 1 } } */

vbool1_t 
test_vmsle_vx_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m8_b1_m )?} 1 } } */

vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i8m8_b1_m_vl31 )?} 1 } } */

vbool64_t 
test_vmsle_vx_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16mf4_b64_m )?} 1 } } */

vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16mf4_b64_m_vl31 )?} 1 } } */

vbool32_t 
test_vmsle_vx_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16mf2_b32_m )?} 1 } } */

vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16mf2_b32_m_vl31 )?} 1 } } */

vbool16_t 
test_vmsle_vx_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m1_b16_m )?} 1 } } */

vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m1_b16_m_vl31 )?} 1 } } */

vbool8_t 
test_vmsle_vx_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m2_b8_m )?} 1 } } */

vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m2_b8_m_vl31 )?} 1 } } */

vbool4_t 
test_vmsle_vx_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m4_b4_m )?} 1 } } */

vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m4_b4_m_vl31 )?} 1 } } */

vbool2_t 
test_vmsle_vx_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m8_b2_m )?} 1 } } */

vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i16m8_b2_m_vl31 )?} 1 } } */

vbool64_t 
test_vmsle_vx_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32mf2_b64_m )?} 1 } } */

vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32mf2_b64_m_vl31 )?} 1 } } */

vbool32_t 
test_vmsle_vx_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m1_b32_m )?} 1 } } */

vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m1_b32_m_vl31 )?} 1 } } */

vbool16_t 
test_vmsle_vx_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m2_b16_m )?} 1 } } */

vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m2_b16_m_vl31 )?} 1 } } */

vbool8_t 
test_vmsle_vx_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m4_b8_m )?} 1 } } */

vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m4_b8_m_vl31 )?} 1 } } */

vbool4_t 
test_vmsle_vx_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m8_b4_m )?} 1 } } */

vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i32m8_b4_m_vl31 )?} 1 } } */

vbool64_t 
test_vmsle_vx_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m1_b64_m )?} 1 {target riscv64-*-*}} } */

vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m1_b64_m_vl31 )?} 1 {target riscv64-*-*}} } */

vbool32_t 
test_vmsle_vx_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m2_b32_m )?} 1 {target riscv64-*-*}} } */

vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m2_b32_m_vl31 )?} 1 {target riscv64-*-*}} } */

vbool16_t 
test_vmsle_vx_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m4_b16_m )?} 1 {target riscv64-*-*}} } */

vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m4_b16_m_vl31 )?} 1 {target riscv64-*-*}} } */

vbool8_t 
test_vmsle_vx_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m8_b8_m )?} 1 {target riscv64-*-*}} } */

vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsle\.vx).)*\s+vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vmsle_vx_i64m8_b8_m_vl31 )?} 1 {target riscv64-*-*}} } */
