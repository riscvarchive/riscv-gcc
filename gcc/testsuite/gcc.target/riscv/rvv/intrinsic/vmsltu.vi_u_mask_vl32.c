
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsltu_vx_u8mf8_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1)
{
  return vmsltu_vx_u8mf8_b64_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8mf8_b64_m_vl32_m15 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u8mf8_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1)
{
  return vmsltu_vx_u8mf8_b64_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8mf8_b64_m_vl32_16 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u8mf4_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1)
{
  return vmsltu_vx_u8mf4_b32_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8mf4_b32_m_vl32_m15 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u8mf4_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1)
{
  return vmsltu_vx_u8mf4_b32_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8mf4_b32_m_vl32_16 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u8mf2_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1)
{
  return vmsltu_vx_u8mf2_b16_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8mf2_b16_m_vl32_m15 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u8mf2_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1)
{
  return vmsltu_vx_u8mf2_b16_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8mf2_b16_m_vl32_16 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u8m1_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1)
{
  return vmsltu_vx_u8m1_b8_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8m1_b8_m_vl32_m15 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u8m1_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1)
{
  return vmsltu_vx_u8m1_b8_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8m1_b8_m_vl32_16 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u8m2_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1)
{
  return vmsltu_vx_u8m2_b4_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8m2_b4_m_vl32_m15 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u8m2_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1)
{
  return vmsltu_vx_u8m2_b4_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8m2_b4_m_vl32_16 )?} 1 } } */

vbool2_t 
test_vmsltu_vx_u8m4_b2_m_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1)
{
  return vmsltu_vx_u8m4_b2_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8m4_b2_m_vl32_m15 )?} 1 } } */

vbool2_t 
test_vmsltu_vx_u8m4_b2_m_vl32_16(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1)
{
  return vmsltu_vx_u8m4_b2_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8m4_b2_m_vl32_16 )?} 1 } } */

vbool1_t 
test_vmsltu_vx_u8m8_b1_m_vl32_m15(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1)
{
  return vmsltu_vx_u8m8_b1_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u8m8_b1_m_vl32_m15 )?} 1 } } */

vbool1_t 
test_vmsltu_vx_u8m8_b1_m_vl32_16(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1)
{
  return vmsltu_vx_u8m8_b1_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u8m8_b1_m_vl32_16 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u16mf4_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1)
{
  return vmsltu_vx_u16mf4_b64_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16mf4_b64_m_vl32_m15 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u16mf4_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1)
{
  return vmsltu_vx_u16mf4_b64_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16mf4_b64_m_vl32_16 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u16mf2_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1)
{
  return vmsltu_vx_u16mf2_b32_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16mf2_b32_m_vl32_m15 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u16mf2_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1)
{
  return vmsltu_vx_u16mf2_b32_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16mf2_b32_m_vl32_16 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u16m1_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1)
{
  return vmsltu_vx_u16m1_b16_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16m1_b16_m_vl32_m15 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u16m1_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1)
{
  return vmsltu_vx_u16m1_b16_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16m1_b16_m_vl32_16 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u16m2_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1)
{
  return vmsltu_vx_u16m2_b8_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16m2_b8_m_vl32_m15 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u16m2_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1)
{
  return vmsltu_vx_u16m2_b8_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16m2_b8_m_vl32_16 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u16m4_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1)
{
  return vmsltu_vx_u16m4_b4_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16m4_b4_m_vl32_m15 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u16m4_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1)
{
  return vmsltu_vx_u16m4_b4_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16m4_b4_m_vl32_16 )?} 1 } } */

vbool2_t 
test_vmsltu_vx_u16m8_b2_m_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1)
{
  return vmsltu_vx_u16m8_b2_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u16m8_b2_m_vl32_m15 )?} 1 } } */

vbool2_t 
test_vmsltu_vx_u16m8_b2_m_vl32_16(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1)
{
  return vmsltu_vx_u16m8_b2_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u16m8_b2_m_vl32_16 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u32mf2_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1)
{
  return vmsltu_vx_u32mf2_b64_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u32mf2_b64_m_vl32_m15 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u32mf2_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1)
{
  return vmsltu_vx_u32mf2_b64_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u32mf2_b64_m_vl32_16 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u32m1_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1)
{
  return vmsltu_vx_u32m1_b32_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u32m1_b32_m_vl32_m15 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u32m1_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1)
{
  return vmsltu_vx_u32m1_b32_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u32m1_b32_m_vl32_16 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u32m2_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1)
{
  return vmsltu_vx_u32m2_b16_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u32m2_b16_m_vl32_m15 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u32m2_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1)
{
  return vmsltu_vx_u32m2_b16_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u32m2_b16_m_vl32_16 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u32m4_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1)
{
  return vmsltu_vx_u32m4_b8_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u32m4_b8_m_vl32_m15 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u32m4_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1)
{
  return vmsltu_vx_u32m4_b8_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u32m4_b8_m_vl32_16 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u32m8_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1)
{
  return vmsltu_vx_u32m8_b4_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u32m8_b4_m_vl32_m15 )?} 1 } } */

vbool4_t 
test_vmsltu_vx_u32m8_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1)
{
  return vmsltu_vx_u32m8_b4_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u32m8_b4_m_vl32_16 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u64m1_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1)
{
  return vmsltu_vx_u64m1_b64_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u64m1_b64_m_vl32_m15 )?} 1 } } */

vbool64_t 
test_vmsltu_vx_u64m1_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1)
{
  return vmsltu_vx_u64m1_b64_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u64m1_b64_m_vl32_16 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u64m2_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1)
{
  return vmsltu_vx_u64m2_b32_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u64m2_b32_m_vl32_m15 )?} 1 } } */

vbool32_t 
test_vmsltu_vx_u64m2_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1)
{
  return vmsltu_vx_u64m2_b32_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u64m2_b32_m_vl32_16 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u64m4_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1)
{
  return vmsltu_vx_u64m4_b16_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u64m4_b16_m_vl32_m15 )?} 1 } } */

vbool16_t 
test_vmsltu_vx_u64m4_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1)
{
  return vmsltu_vx_u64m4_b16_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u64m4_b16_m_vl32_16 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u64m8_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1)
{
  return vmsltu_vx_u64m8_b8_m(mask, maskedoff, op1, -15, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t\n(?: test_vmsltu_vx_u64m8_b8_m_vl32_m15 )?} 1 } } */

vbool8_t 
test_vmsltu_vx_u64m8_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1)
{
  return vmsltu_vx_u64m8_b8_m(mask, maskedoff, op1, 16, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsltu\.vi).)*\s+vmsltu\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t\n(?: test_vmsltu_vx_u64m8_b8_m_vl32_16 )?} 1 } } */
