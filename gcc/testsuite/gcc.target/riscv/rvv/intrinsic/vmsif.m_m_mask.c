
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsif_m_b64_m(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl)
{
  return vmsif_m_b64_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b64_m )?} 1 } } */

vbool64_t 
test_vmsif_m_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b64_m_vl31 )?} 1 } } */

vbool32_t 
test_vmsif_m_b32_m(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl)
{
  return vmsif_m_b32_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b32_m )?} 1 } } */

vbool32_t 
test_vmsif_m_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b32_m_vl31 )?} 1 } } */

vbool16_t 
test_vmsif_m_b16_m(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl)
{
  return vmsif_m_b16_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b16_m )?} 1 } } */

vbool16_t 
test_vmsif_m_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b16_m_vl31 )?} 1 } } */

vbool8_t 
test_vmsif_m_b8_m(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl)
{
  return vmsif_m_b8_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b8_m )?} 1 } } */

vbool8_t 
test_vmsif_m_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b8_m_vl31 )?} 1 } } */

vbool4_t 
test_vmsif_m_b4_m(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl)
{
  return vmsif_m_b4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b4_m )?} 1 } } */

vbool4_t 
test_vmsif_m_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b4_m_vl31 )?} 1 } } */

vbool2_t 
test_vmsif_m_b2_m(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl)
{
  return vmsif_m_b2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b2_m )?} 1 } } */

vbool2_t 
test_vmsif_m_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b2_m_vl31 )?} 1 } } */

vbool1_t 
test_vmsif_m_b1_m(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl)
{
  return vmsif_m_b1_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b1_m )?} 1 } } */

vbool1_t 
test_vmsif_m_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vmsif\.m).)*\s+vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vmsif_m_b1_m_vl31 )?} 1 } } */
