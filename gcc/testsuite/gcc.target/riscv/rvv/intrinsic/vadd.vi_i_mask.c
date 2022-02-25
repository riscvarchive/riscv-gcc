
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8mf8_t 
test_vadd_vx_i8mf8_m_m16(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vadd_vx_i8mf8_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf8_m_m16 )?} 1 } } */

vint8mf8_t 
test_vadd_vx_i8mf8_m_15(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vadd_vx_i8mf8_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf8_m_15 )?} 1 } } */

vint8mf8_t 
test_vadd_vx_i8mf8_m_vl31_m16(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vadd_vx_i8mf8_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf8_m_vl31_m16 )?} 1 } } */

vint8mf8_t 
test_vadd_vx_i8mf8_m_vl31_15(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vadd_vx_i8mf8_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf8_m_vl31_15 )?} 1 } } */

vint8mf4_t 
test_vadd_vx_i8mf4_m_m16(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vadd_vx_i8mf4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf4_m_m16 )?} 1 } } */

vint8mf4_t 
test_vadd_vx_i8mf4_m_15(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vadd_vx_i8mf4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf4_m_15 )?} 1 } } */

vint8mf4_t 
test_vadd_vx_i8mf4_m_vl31_m16(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vadd_vx_i8mf4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf4_m_vl31_m16 )?} 1 } } */

vint8mf4_t 
test_vadd_vx_i8mf4_m_vl31_15(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vadd_vx_i8mf4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf4_m_vl31_15 )?} 1 } } */

vint8mf2_t 
test_vadd_vx_i8mf2_m_m16(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vadd_vx_i8mf2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf2_m_m16 )?} 1 } } */

vint8mf2_t 
test_vadd_vx_i8mf2_m_15(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vadd_vx_i8mf2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf2_m_15 )?} 1 } } */

vint8mf2_t 
test_vadd_vx_i8mf2_m_vl31_m16(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vadd_vx_i8mf2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8mf2_m_vl31_m16 )?} 1 } } */

vint8mf2_t 
test_vadd_vx_i8mf2_m_vl31_15(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vadd_vx_i8mf2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8mf2_m_vl31_15 )?} 1 } } */

vint8m1_t 
test_vadd_vx_i8m1_m_m16(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vadd_vx_i8m1_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m1_m_m16 )?} 1 } } */

vint8m1_t 
test_vadd_vx_i8m1_m_15(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vadd_vx_i8m1_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m1_m_15 )?} 1 } } */

vint8m1_t 
test_vadd_vx_i8m1_m_vl31_m16(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vadd_vx_i8m1_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m1_m_vl31_m16 )?} 1 } } */

vint8m1_t 
test_vadd_vx_i8m1_m_vl31_15(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vadd_vx_i8m1_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m1_m_vl31_15 )?} 1 } } */

vint8m2_t 
test_vadd_vx_i8m2_m_m16(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vadd_vx_i8m2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m2_m_m16 )?} 1 } } */

vint8m2_t 
test_vadd_vx_i8m2_m_15(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vadd_vx_i8m2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m2_m_15 )?} 1 } } */

vint8m2_t 
test_vadd_vx_i8m2_m_vl31_m16(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vadd_vx_i8m2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m2_m_vl31_m16 )?} 1 } } */

vint8m2_t 
test_vadd_vx_i8m2_m_vl31_15(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vadd_vx_i8m2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m2_m_vl31_15 )?} 1 } } */

vint8m4_t 
test_vadd_vx_i8m4_m_m16(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vadd_vx_i8m4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m4_m_m16 )?} 1 } } */

vint8m4_t 
test_vadd_vx_i8m4_m_15(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vadd_vx_i8m4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m4_m_15 )?} 1 } } */

vint8m4_t 
test_vadd_vx_i8m4_m_vl31_m16(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vadd_vx_i8m4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m4_m_vl31_m16 )?} 1 } } */

vint8m4_t 
test_vadd_vx_i8m4_m_vl31_15(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vadd_vx_i8m4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m4_m_vl31_15 )?} 1 } } */

vint8m8_t 
test_vadd_vx_i8m8_m_m16(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vadd_vx_i8m8_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m8_m_m16 )?} 1 } } */

vint8m8_t 
test_vadd_vx_i8m8_m_15(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vadd_vx_i8m8_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m8_m_15 )?} 1 } } */

vint8m8_t 
test_vadd_vx_i8m8_m_vl31_m16(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vadd_vx_i8m8_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i8m8_m_vl31_m16 )?} 1 } } */

vint8m8_t 
test_vadd_vx_i8m8_m_vl31_15(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vadd_vx_i8m8_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i8m8_m_vl31_15 )?} 1 } } */

vint16mf4_t 
test_vadd_vx_i16mf4_m_m16(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vadd_vx_i16mf4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16mf4_m_m16 )?} 1 } } */

vint16mf4_t 
test_vadd_vx_i16mf4_m_15(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vadd_vx_i16mf4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16mf4_m_15 )?} 1 } } */

vint16mf4_t 
test_vadd_vx_i16mf4_m_vl31_m16(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vadd_vx_i16mf4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16mf4_m_vl31_m16 )?} 1 } } */

vint16mf4_t 
test_vadd_vx_i16mf4_m_vl31_15(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vadd_vx_i16mf4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16mf4_m_vl31_15 )?} 1 } } */

vint16mf2_t 
test_vadd_vx_i16mf2_m_m16(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vadd_vx_i16mf2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16mf2_m_m16 )?} 1 } } */

vint16mf2_t 
test_vadd_vx_i16mf2_m_15(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vadd_vx_i16mf2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16mf2_m_15 )?} 1 } } */

vint16mf2_t 
test_vadd_vx_i16mf2_m_vl31_m16(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vadd_vx_i16mf2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16mf2_m_vl31_m16 )?} 1 } } */

vint16mf2_t 
test_vadd_vx_i16mf2_m_vl31_15(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vadd_vx_i16mf2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16mf2_m_vl31_15 )?} 1 } } */

vint16m1_t 
test_vadd_vx_i16m1_m_m16(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vadd_vx_i16m1_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m1_m_m16 )?} 1 } } */

vint16m1_t 
test_vadd_vx_i16m1_m_15(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vadd_vx_i16m1_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m1_m_15 )?} 1 } } */

vint16m1_t 
test_vadd_vx_i16m1_m_vl31_m16(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vadd_vx_i16m1_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m1_m_vl31_m16 )?} 1 } } */

vint16m1_t 
test_vadd_vx_i16m1_m_vl31_15(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vadd_vx_i16m1_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m1_m_vl31_15 )?} 1 } } */

vint16m2_t 
test_vadd_vx_i16m2_m_m16(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vadd_vx_i16m2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m2_m_m16 )?} 1 } } */

vint16m2_t 
test_vadd_vx_i16m2_m_15(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vadd_vx_i16m2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m2_m_15 )?} 1 } } */

vint16m2_t 
test_vadd_vx_i16m2_m_vl31_m16(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vadd_vx_i16m2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m2_m_vl31_m16 )?} 1 } } */

vint16m2_t 
test_vadd_vx_i16m2_m_vl31_15(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vadd_vx_i16m2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m2_m_vl31_15 )?} 1 } } */

vint16m4_t 
test_vadd_vx_i16m4_m_m16(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vadd_vx_i16m4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m4_m_m16 )?} 1 } } */

vint16m4_t 
test_vadd_vx_i16m4_m_15(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vadd_vx_i16m4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m4_m_15 )?} 1 } } */

vint16m4_t 
test_vadd_vx_i16m4_m_vl31_m16(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vadd_vx_i16m4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m4_m_vl31_m16 )?} 1 } } */

vint16m4_t 
test_vadd_vx_i16m4_m_vl31_15(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vadd_vx_i16m4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m4_m_vl31_15 )?} 1 } } */

vint16m8_t 
test_vadd_vx_i16m8_m_m16(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vadd_vx_i16m8_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m8_m_m16 )?} 1 } } */

vint16m8_t 
test_vadd_vx_i16m8_m_15(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vadd_vx_i16m8_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m8_m_15 )?} 1 } } */

vint16m8_t 
test_vadd_vx_i16m8_m_vl31_m16(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vadd_vx_i16m8_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i16m8_m_vl31_m16 )?} 1 } } */

vint16m8_t 
test_vadd_vx_i16m8_m_vl31_15(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vadd_vx_i16m8_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i16m8_m_vl31_15 )?} 1 } } */

vint32mf2_t 
test_vadd_vx_i32mf2_m_m16(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vadd_vx_i32mf2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32mf2_m_m16 )?} 1 } } */

vint32mf2_t 
test_vadd_vx_i32mf2_m_15(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vadd_vx_i32mf2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32mf2_m_15 )?} 1 } } */

vint32mf2_t 
test_vadd_vx_i32mf2_m_vl31_m16(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vadd_vx_i32mf2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32mf2_m_vl31_m16 )?} 1 } } */

vint32mf2_t 
test_vadd_vx_i32mf2_m_vl31_15(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vadd_vx_i32mf2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32mf2_m_vl31_15 )?} 1 } } */

vint32m1_t 
test_vadd_vx_i32m1_m_m16(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vadd_vx_i32m1_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m1_m_m16 )?} 1 } } */

vint32m1_t 
test_vadd_vx_i32m1_m_15(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vadd_vx_i32m1_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m1_m_15 )?} 1 } } */

vint32m1_t 
test_vadd_vx_i32m1_m_vl31_m16(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vadd_vx_i32m1_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m1_m_vl31_m16 )?} 1 } } */

vint32m1_t 
test_vadd_vx_i32m1_m_vl31_15(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vadd_vx_i32m1_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m1_m_vl31_15 )?} 1 } } */

vint32m2_t 
test_vadd_vx_i32m2_m_m16(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vadd_vx_i32m2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m2_m_m16 )?} 1 } } */

vint32m2_t 
test_vadd_vx_i32m2_m_15(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vadd_vx_i32m2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m2_m_15 )?} 1 } } */

vint32m2_t 
test_vadd_vx_i32m2_m_vl31_m16(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vadd_vx_i32m2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m2_m_vl31_m16 )?} 1 } } */

vint32m2_t 
test_vadd_vx_i32m2_m_vl31_15(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vadd_vx_i32m2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m2_m_vl31_15 )?} 1 } } */

vint32m4_t 
test_vadd_vx_i32m4_m_m16(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vadd_vx_i32m4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m4_m_m16 )?} 1 } } */

vint32m4_t 
test_vadd_vx_i32m4_m_15(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vadd_vx_i32m4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m4_m_15 )?} 1 } } */

vint32m4_t 
test_vadd_vx_i32m4_m_vl31_m16(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vadd_vx_i32m4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m4_m_vl31_m16 )?} 1 } } */

vint32m4_t 
test_vadd_vx_i32m4_m_vl31_15(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vadd_vx_i32m4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m4_m_vl31_15 )?} 1 } } */

vint32m8_t 
test_vadd_vx_i32m8_m_m16(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vadd_vx_i32m8_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m8_m_m16 )?} 1 } } */

vint32m8_t 
test_vadd_vx_i32m8_m_15(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vadd_vx_i32m8_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m8_m_15 )?} 1 } } */

vint32m8_t 
test_vadd_vx_i32m8_m_vl31_m16(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vadd_vx_i32m8_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i32m8_m_vl31_m16 )?} 1 } } */

vint32m8_t 
test_vadd_vx_i32m8_m_vl31_15(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vadd_vx_i32m8_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i32m8_m_vl31_15 )?} 1 } } */

vint64m1_t 
test_vadd_vx_i64m1_m_m16(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vadd_vx_i64m1_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m1_m_m16 )?} 1 } } */

vint64m1_t 
test_vadd_vx_i64m1_m_15(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vadd_vx_i64m1_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m1_m_15 )?} 1 } } */

vint64m1_t 
test_vadd_vx_i64m1_m_vl31_m16(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vadd_vx_i64m1_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m1_m_vl31_m16 )?} 1 } } */

vint64m1_t 
test_vadd_vx_i64m1_m_vl31_15(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vadd_vx_i64m1_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m1_m_vl31_15 )?} 1 } } */

vint64m2_t 
test_vadd_vx_i64m2_m_m16(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vadd_vx_i64m2_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m2_m_m16 )?} 1 } } */

vint64m2_t 
test_vadd_vx_i64m2_m_15(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vadd_vx_i64m2_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m2_m_15 )?} 1 } } */

vint64m2_t 
test_vadd_vx_i64m2_m_vl31_m16(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vadd_vx_i64m2_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m2_m_vl31_m16 )?} 1 } } */

vint64m2_t 
test_vadd_vx_i64m2_m_vl31_15(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vadd_vx_i64m2_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m2_m_vl31_15 )?} 1 } } */

vint64m4_t 
test_vadd_vx_i64m4_m_m16(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vadd_vx_i64m4_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m4_m_m16 )?} 1 } } */

vint64m4_t 
test_vadd_vx_i64m4_m_15(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vadd_vx_i64m4_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m4_m_15 )?} 1 } } */

vint64m4_t 
test_vadd_vx_i64m4_m_vl31_m16(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vadd_vx_i64m4_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m4_m_vl31_m16 )?} 1 } } */

vint64m4_t 
test_vadd_vx_i64m4_m_vl31_15(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vadd_vx_i64m4_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m4_m_vl31_15 )?} 1 } } */

vint64m8_t 
test_vadd_vx_i64m8_m_m16(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vadd_vx_i64m8_m(mask, maskedoff, op1, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m8_m_m16 )?} 1 } } */

vint64m8_t 
test_vadd_vx_i64m8_m_15(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vadd_vx_i64m8_m(mask, maskedoff, op1, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m8_m_15 )?} 1 } } */

vint64m8_t 
test_vadd_vx_i64m8_m_vl31_m16(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vadd_vx_i64m8_m(mask, maskedoff, op1, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t\n(?: test_vadd_vx_i64m8_m_vl31_m16 )?} 1 } } */

vint64m8_t 
test_vadd_vx_i64m8_m_vl31_15(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vadd_vx_i64m8_m(mask, maskedoff, op1, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vadd\.vi).)*\s+vadd\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t\n(?: test_vadd_vx_i64m8_m_vl31_15 )?} 1 } } */
