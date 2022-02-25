
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint16mf4_t 
test_vwsubu_wx_u16mf4_tama_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf4_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf4_tama_vl32 )?} 1 } } */

vuint16mf2_t 
test_vwsubu_wx_u16mf2_tama_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf2_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf2_tama_vl32 )?} 1 } } */

vuint16m1_t 
test_vwsubu_wx_u16m1_tama_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m1_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m1_tama_vl32 )?} 1 } } */

vuint16m2_t 
test_vwsubu_wx_u16m2_tama_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m2_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m2_tama_vl32 )?} 1 } } */

vuint16m4_t 
test_vwsubu_wx_u16m4_tama_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m4_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m4_tama_vl32 )?} 1 } } */

vuint16m8_t 
test_vwsubu_wx_u16m8_tama_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m8_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m8_tama_vl32 )?} 1 } } */

vuint32mf2_t 
test_vwsubu_wx_u32mf2_tama_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32mf2_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32mf2_tama_vl32 )?} 1 } } */

vuint32m1_t 
test_vwsubu_wx_u32m1_tama_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m1_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m1_tama_vl32 )?} 1 } } */

vuint32m2_t 
test_vwsubu_wx_u32m2_tama_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m2_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m2_tama_vl32 )?} 1 } } */

vuint32m4_t 
test_vwsubu_wx_u32m4_tama_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m4_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m4_tama_vl32 )?} 1 } } */

vuint32m8_t 
test_vwsubu_wx_u32m8_tama_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m8_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m8_tama_vl32 )?} 1 } } */

vuint64m1_t 
test_vwsubu_wx_u64m1_tama_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m1_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m1_tama_vl32 )?} 1 } } */

vuint64m2_t 
test_vwsubu_wx_u64m2_tama_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m2_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m2_tama_vl32 )?} 1 } } */

vuint64m4_t 
test_vwsubu_wx_u64m4_tama_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m4_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m4_tama_vl32 )?} 1 } } */

vuint64m8_t 
test_vwsubu_wx_u64m8_tama_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m8_tama(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m8_tama_vl32 )?} 1 } } */

vuint16mf4_t 
test_vwsubu_wx_u16mf4_tamu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf4_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf4_tamu_vl32 )?} 1 } } */

vuint16mf2_t 
test_vwsubu_wx_u16mf2_tamu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf2_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf2_tamu_vl32 )?} 1 } } */

vuint16m1_t 
test_vwsubu_wx_u16m1_tamu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m1_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m1_tamu_vl32 )?} 1 } } */

vuint16m2_t 
test_vwsubu_wx_u16m2_tamu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m2_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m2_tamu_vl32 )?} 1 } } */

vuint16m4_t 
test_vwsubu_wx_u16m4_tamu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m4_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m4_tamu_vl32 )?} 1 } } */

vuint16m8_t 
test_vwsubu_wx_u16m8_tamu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m8_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m8_tamu_vl32 )?} 1 } } */

vuint32mf2_t 
test_vwsubu_wx_u32mf2_tamu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32mf2_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32mf2_tamu_vl32 )?} 1 } } */

vuint32m1_t 
test_vwsubu_wx_u32m1_tamu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m1_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m1_tamu_vl32 )?} 1 } } */

vuint32m2_t 
test_vwsubu_wx_u32m2_tamu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m2_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m2_tamu_vl32 )?} 1 } } */

vuint32m4_t 
test_vwsubu_wx_u32m4_tamu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m4_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m4_tamu_vl32 )?} 1 } } */

vuint32m8_t 
test_vwsubu_wx_u32m8_tamu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m8_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m8_tamu_vl32 )?} 1 } } */

vuint64m1_t 
test_vwsubu_wx_u64m1_tamu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m1_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m1_tamu_vl32 )?} 1 } } */

vuint64m2_t 
test_vwsubu_wx_u64m2_tamu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m2_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m2_tamu_vl32 )?} 1 } } */

vuint64m4_t 
test_vwsubu_wx_u64m4_tamu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m4_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m4_tamu_vl32 )?} 1 } } */

vuint64m8_t 
test_vwsubu_wx_u64m8_tamu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m8_tamu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m8_tamu_vl32 )?} 1 } } */

vuint16mf4_t 
test_vwsubu_wx_u16mf4_tuma_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf4_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf4_tuma_vl32 )?} 1 } } */

vuint16mf2_t 
test_vwsubu_wx_u16mf2_tuma_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf2_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf2_tuma_vl32 )?} 1 } } */

vuint16m1_t 
test_vwsubu_wx_u16m1_tuma_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m1_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m1_tuma_vl32 )?} 1 } } */

vuint16m2_t 
test_vwsubu_wx_u16m2_tuma_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m2_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m2_tuma_vl32 )?} 1 } } */

vuint16m4_t 
test_vwsubu_wx_u16m4_tuma_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m4_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m4_tuma_vl32 )?} 1 } } */

vuint16m8_t 
test_vwsubu_wx_u16m8_tuma_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m8_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m8_tuma_vl32 )?} 1 } } */

vuint32mf2_t 
test_vwsubu_wx_u32mf2_tuma_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32mf2_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32mf2_tuma_vl32 )?} 1 } } */

vuint32m1_t 
test_vwsubu_wx_u32m1_tuma_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m1_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m1_tuma_vl32 )?} 1 } } */

vuint32m2_t 
test_vwsubu_wx_u32m2_tuma_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m2_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m2_tuma_vl32 )?} 1 } } */

vuint32m4_t 
test_vwsubu_wx_u32m4_tuma_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m4_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m4_tuma_vl32 )?} 1 } } */

vuint32m8_t 
test_vwsubu_wx_u32m8_tuma_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m8_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m8_tuma_vl32 )?} 1 } } */

vuint64m1_t 
test_vwsubu_wx_u64m1_tuma_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m1_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m1_tuma_vl32 )?} 1 } } */

vuint64m2_t 
test_vwsubu_wx_u64m2_tuma_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m2_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m2_tuma_vl32 )?} 1 } } */

vuint64m4_t 
test_vwsubu_wx_u64m4_tuma_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m4_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m4_tuma_vl32 )?} 1 } } */

vuint64m8_t 
test_vwsubu_wx_u64m8_tuma_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m8_tuma(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m8_tuma_vl32 )?} 1 } } */

vuint16mf4_t 
test_vwsubu_wx_u16mf4_tumu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf4_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf4_tumu_vl32 )?} 1 } } */

vuint16mf2_t 
test_vwsubu_wx_u16mf2_tumu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16mf2_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16mf2_tumu_vl32 )?} 1 } } */

vuint16m1_t 
test_vwsubu_wx_u16m1_tumu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m1_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m1_tumu_vl32 )?} 1 } } */

vuint16m2_t 
test_vwsubu_wx_u16m2_tumu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m2_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m2_tumu_vl32 )?} 1 } } */

vuint16m4_t 
test_vwsubu_wx_u16m4_tumu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m4_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m4_tumu_vl32 )?} 1 } } */

vuint16m8_t 
test_vwsubu_wx_u16m8_tumu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2)
{
  return vwsubu_wx_u16m8_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u16m8_tumu_vl32 )?} 1 } } */

vuint32mf2_t 
test_vwsubu_wx_u32mf2_tumu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32mf2_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32mf2_tumu_vl32 )?} 1 } } */

vuint32m1_t 
test_vwsubu_wx_u32m1_tumu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m1_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m1_tumu_vl32 )?} 1 } } */

vuint32m2_t 
test_vwsubu_wx_u32m2_tumu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m2_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m2_tumu_vl32 )?} 1 } } */

vuint32m4_t 
test_vwsubu_wx_u32m4_tumu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m4_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m4_tumu_vl32 )?} 1 } } */

vuint32m8_t 
test_vwsubu_wx_u32m8_tumu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2)
{
  return vwsubu_wx_u32m8_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u32m8_tumu_vl32 )?} 1 } } */

vuint64m1_t 
test_vwsubu_wx_u64m1_tumu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m1_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m1_tumu_vl32 )?} 1 } } */

vuint64m2_t 
test_vwsubu_wx_u64m2_tumu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m2_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m2_tumu_vl32 )?} 1 } } */

vuint64m4_t 
test_vwsubu_wx_u64m4_tumu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m4_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m4_tumu_vl32 )?} 1 } } */

vuint64m8_t 
test_vwsubu_wx_u64m8_tumu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2)
{
  return vwsubu_wx_u64m8_tumu(mask, maskedoff, op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vwsubu\.wx).)*\s+vwsubu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vwsubu_wx_u64m8_tumu_vl32 )?} 1 } } */
