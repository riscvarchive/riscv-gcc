
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t 
test_vfncvt_rtz_xu_f_w_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8mf8_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf8_m )?} 1 } } */

vuint8mf8_t 
test_vfncvt_rtz_xu_f_w_u8mf8_m_vl31(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t op1)
{
  return vfncvt_rtz_xu_f_w_u8mf8_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf8_m_vl31 )?} 1 } } */

vuint8mf4_t 
test_vfncvt_rtz_xu_f_w_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8mf4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf4_m )?} 1 } } */

vuint8mf4_t 
test_vfncvt_rtz_xu_f_w_u8mf4_m_vl31(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t op1)
{
  return vfncvt_rtz_xu_f_w_u8mf4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf4_m_vl31 )?} 1 } } */

vuint8mf2_t 
test_vfncvt_rtz_xu_f_w_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8mf2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf2_m )?} 1 } } */

vuint8mf2_t 
test_vfncvt_rtz_xu_f_w_u8mf2_m_vl31(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t op1)
{
  return vfncvt_rtz_xu_f_w_u8mf2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8mf2_m_vl31 )?} 1 } } */

vuint8m1_t 
test_vfncvt_rtz_xu_f_w_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8m1_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m1_m )?} 1 } } */

vuint8m1_t 
test_vfncvt_rtz_xu_f_w_u8m1_m_vl31(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t op1)
{
  return vfncvt_rtz_xu_f_w_u8m1_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m1_m_vl31 )?} 1 } } */

vuint8m2_t 
test_vfncvt_rtz_xu_f_w_u8m2_m(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8m2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m2_m )?} 1 } } */

vuint8m2_t 
test_vfncvt_rtz_xu_f_w_u8m2_m_vl31(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t op1)
{
  return vfncvt_rtz_xu_f_w_u8m2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m2_m_vl31 )?} 1 } } */

vuint8m4_t 
test_vfncvt_rtz_xu_f_w_u8m4_m(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u8m4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m4_m )?} 1 } } */

vuint8m4_t 
test_vfncvt_rtz_xu_f_w_u8m4_m_vl31(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t op1)
{
  return vfncvt_rtz_xu_f_w_u8m4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u8m4_m_vl31 )?} 1 } } */

vuint16mf4_t 
test_vfncvt_rtz_xu_f_w_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u16mf4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16mf4_m )?} 1 } } */

vuint16mf4_t 
test_vfncvt_rtz_xu_f_w_u16mf4_m_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t op1)
{
  return vfncvt_rtz_xu_f_w_u16mf4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16mf4_m_vl31 )?} 1 } } */

vuint16mf2_t 
test_vfncvt_rtz_xu_f_w_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u16mf2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16mf2_m )?} 1 } } */

vuint16mf2_t 
test_vfncvt_rtz_xu_f_w_u16mf2_m_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t op1)
{
  return vfncvt_rtz_xu_f_w_u16mf2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16mf2_m_vl31 )?} 1 } } */

vuint16m1_t 
test_vfncvt_rtz_xu_f_w_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u16m1_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m1_m )?} 1 } } */

vuint16m1_t 
test_vfncvt_rtz_xu_f_w_u16m1_m_vl31(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t op1)
{
  return vfncvt_rtz_xu_f_w_u16m1_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m1_m_vl31 )?} 1 } } */

vuint16m2_t 
test_vfncvt_rtz_xu_f_w_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u16m2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m2_m )?} 1 } } */

vuint16m2_t 
test_vfncvt_rtz_xu_f_w_u16m2_m_vl31(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t op1)
{
  return vfncvt_rtz_xu_f_w_u16m2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m2_m_vl31 )?} 1 } } */

vuint16m4_t 
test_vfncvt_rtz_xu_f_w_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u16m4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m4_m )?} 1 } } */

vuint16m4_t 
test_vfncvt_rtz_xu_f_w_u16m4_m_vl31(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t op1)
{
  return vfncvt_rtz_xu_f_w_u16m4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u16m4_m_vl31 )?} 1 } } */

vuint32mf2_t 
test_vfncvt_rtz_xu_f_w_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u32mf2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32mf2_m )?} 1 } } */

vuint32mf2_t 
test_vfncvt_rtz_xu_f_w_u32mf2_m_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t op1)
{
  return vfncvt_rtz_xu_f_w_u32mf2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32mf2_m_vl31 )?} 1 } } */

vuint32m1_t 
test_vfncvt_rtz_xu_f_w_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u32m1_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m1_m )?} 1 } } */

vuint32m1_t 
test_vfncvt_rtz_xu_f_w_u32m1_m_vl31(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t op1)
{
  return vfncvt_rtz_xu_f_w_u32m1_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m1_m_vl31 )?} 1 } } */

vuint32m2_t 
test_vfncvt_rtz_xu_f_w_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u32m2_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m2_m )?} 1 } } */

vuint32m2_t 
test_vfncvt_rtz_xu_f_w_u32m2_m_vl31(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t op1)
{
  return vfncvt_rtz_xu_f_w_u32m2_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m2_m_vl31 )?} 1 } } */

vuint32m4_t 
test_vfncvt_rtz_xu_f_w_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t op1, size_t vl)
{
  return vfncvt_rtz_xu_f_w_u32m4_m(mask, maskedoff, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetvli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m4_m )?} 1 } } */

vuint32m4_t 
test_vfncvt_rtz_xu_f_w_u32m4_m_vl31(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t op1)
{
  return vfncvt_rtz_xu_f_w_u32m4_m(mask, maskedoff, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu\s+(?:(?!vsetivli|vfncvt\.rtz\.xu\.f\.w).)*\s+vfncvt\.rtz\.xu\.f\.w\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vfncvt_rtz_xu_f_w_u32m4_m_vl31 )?} 1 } } */
