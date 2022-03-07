
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8mf8_t 
test_vssra_vx_i8mf8_tama_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tama_vl32_0 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tama_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tama_vl32_31 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tama_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tama_vl32_0 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tama_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tama_vl32_31 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tama_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tama_vl32_0 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tama_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tama_vl32_31 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tama_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m1_tama_vl32_0 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tama_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m1_tama_vl32_31 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tama_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m2_tama_vl32_0 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tama_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m2_tama_vl32_31 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tama_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m4_tama_vl32_0 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tama_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m4_tama_vl32_31 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tama_vl32_0(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m8_tama_vl32_0 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tama_vl32_31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m8_tama_vl32_31 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tama_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tama_vl32_0 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tama_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tama_vl32_31 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tama_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tama_vl32_0 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tama_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tama_vl32_31 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tama_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m1_tama_vl32_0 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tama_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m1_tama_vl32_31 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tama_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m2_tama_vl32_0 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tama_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m2_tama_vl32_31 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tama_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m4_tama_vl32_0 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tama_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m4_tama_vl32_31 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tama_vl32_0(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m8_tama_vl32_0 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tama_vl32_31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m8_tama_vl32_31 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tama_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tama_vl32_0 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tama_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tama_vl32_31 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tama_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m1_tama_vl32_0 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tama_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m1_tama_vl32_31 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tama_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m2_tama_vl32_0 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tama_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m2_tama_vl32_31 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tama_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m4_tama_vl32_0 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tama_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m4_tama_vl32_31 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tama_vl32_0(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m8_tama_vl32_0 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tama_vl32_31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m8_tama_vl32_31 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tama_vl32_0(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m1_tama_vl32_0 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tama_vl32_31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m1_tama_vl32_31 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tama_vl32_0(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m2_tama_vl32_0 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tama_vl32_31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m2_tama_vl32_31 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tama_vl32_0(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m4_tama_vl32_0 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tama_vl32_31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m4_tama_vl32_31 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tama_vl32_0(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tama(mask, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m8_tama_vl32_0 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tama_vl32_31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tama(mask, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m8_tama_vl32_31 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tamu_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tamu_vl32_0 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tamu_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tamu_vl32_31 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tamu_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tamu_vl32_0 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tamu_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tamu_vl32_31 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tamu_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tamu_vl32_0 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tamu_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tamu_vl32_31 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tamu_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m1_tamu_vl32_0 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tamu_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m1_tamu_vl32_31 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tamu_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m2_tamu_vl32_0 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tamu_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m2_tamu_vl32_31 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tamu_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m4_tamu_vl32_0 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tamu_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m4_tamu_vl32_31 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tamu_vl32_0(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m8_tamu_vl32_0 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tamu_vl32_31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m8_tamu_vl32_31 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tamu_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tamu_vl32_0 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tamu_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tamu_vl32_31 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tamu_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tamu_vl32_0 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tamu_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tamu_vl32_31 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tamu_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m1_tamu_vl32_0 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tamu_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m1_tamu_vl32_31 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tamu_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m2_tamu_vl32_0 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tamu_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m2_tamu_vl32_31 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tamu_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m4_tamu_vl32_0 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tamu_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m4_tamu_vl32_31 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tamu_vl32_0(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m8_tamu_vl32_0 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tamu_vl32_31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m8_tamu_vl32_31 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tamu_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tamu_vl32_0 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tamu_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tamu_vl32_31 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tamu_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m1_tamu_vl32_0 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tamu_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m1_tamu_vl32_31 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tamu_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m2_tamu_vl32_0 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tamu_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m2_tamu_vl32_31 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tamu_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m4_tamu_vl32_0 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tamu_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m4_tamu_vl32_31 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tamu_vl32_0(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m8_tamu_vl32_0 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tamu_vl32_31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m8_tamu_vl32_31 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tamu_vl32_0(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m1_tamu_vl32_0 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tamu_vl32_31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m1_tamu_vl32_31 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tamu_vl32_0(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m2_tamu_vl32_0 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tamu_vl32_31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m2_tamu_vl32_31 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tamu_vl32_0(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m4_tamu_vl32_0 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tamu_vl32_31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m4_tamu_vl32_31 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tamu_vl32_0(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tamu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m8_tamu_vl32_0 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tamu_vl32_31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tamu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m8_tamu_vl32_31 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tuma_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tuma_vl32_0 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tuma_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tuma_vl32_31 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tuma_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tuma_vl32_0 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tuma_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tuma_vl32_31 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tuma_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tuma_vl32_0 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tuma_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tuma_vl32_31 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tuma_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m1_tuma_vl32_0 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tuma_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m1_tuma_vl32_31 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tuma_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m2_tuma_vl32_0 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tuma_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m2_tuma_vl32_31 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tuma_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m4_tuma_vl32_0 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tuma_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m4_tuma_vl32_31 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tuma_vl32_0(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m8_tuma_vl32_0 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tuma_vl32_31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m8_tuma_vl32_31 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tuma_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tuma_vl32_0 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tuma_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tuma_vl32_31 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tuma_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tuma_vl32_0 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tuma_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tuma_vl32_31 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tuma_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m1_tuma_vl32_0 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tuma_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m1_tuma_vl32_31 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tuma_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m2_tuma_vl32_0 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tuma_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m2_tuma_vl32_31 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tuma_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m4_tuma_vl32_0 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tuma_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m4_tuma_vl32_31 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tuma_vl32_0(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m8_tuma_vl32_0 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tuma_vl32_31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m8_tuma_vl32_31 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tuma_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tuma_vl32_0 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tuma_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tuma_vl32_31 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tuma_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m1_tuma_vl32_0 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tuma_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m1_tuma_vl32_31 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tuma_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m2_tuma_vl32_0 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tuma_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m2_tuma_vl32_31 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tuma_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m4_tuma_vl32_0 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tuma_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m4_tuma_vl32_31 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tuma_vl32_0(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m8_tuma_vl32_0 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tuma_vl32_31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m8_tuma_vl32_31 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tuma_vl32_0(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m1_tuma_vl32_0 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tuma_vl32_31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m1_tuma_vl32_31 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tuma_vl32_0(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m2_tuma_vl32_0 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tuma_vl32_31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m2_tuma_vl32_31 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tuma_vl32_0(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m4_tuma_vl32_0 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tuma_vl32_31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m4_tuma_vl32_31 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tuma_vl32_0(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tuma(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m8_tuma_vl32_0 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tuma_vl32_31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tuma(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m8_tuma_vl32_31 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tumu_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tumu_vl32_0 )?} 1 } } */

vint8mf8_t 
test_vssra_vx_i8mf8_tumu_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1)
{
  return vssra_vx_i8mf8_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf8_tumu_vl32_31 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tumu_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tumu_vl32_0 )?} 1 } } */

vint8mf4_t 
test_vssra_vx_i8mf4_tumu_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1)
{
  return vssra_vx_i8mf4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf4_tumu_vl32_31 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tumu_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tumu_vl32_0 )?} 1 } } */

vint8mf2_t 
test_vssra_vx_i8mf2_tumu_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1)
{
  return vssra_vx_i8mf2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8mf2_tumu_vl32_31 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tumu_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m1_tumu_vl32_0 )?} 1 } } */

vint8m1_t 
test_vssra_vx_i8m1_tumu_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1)
{
  return vssra_vx_i8m1_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m1_tumu_vl32_31 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tumu_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m2_tumu_vl32_0 )?} 1 } } */

vint8m2_t 
test_vssra_vx_i8m2_tumu_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1)
{
  return vssra_vx_i8m2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m2_tumu_vl32_31 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tumu_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m4_tumu_vl32_0 )?} 1 } } */

vint8m4_t 
test_vssra_vx_i8m4_tumu_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1)
{
  return vssra_vx_i8m4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m4_tumu_vl32_31 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tumu_vl32_0(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i8m8_tumu_vl32_0 )?} 1 } } */

vint8m8_t 
test_vssra_vx_i8m8_tumu_vl32_31(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1)
{
  return vssra_vx_i8m8_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i8m8_tumu_vl32_31 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tumu_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tumu_vl32_0 )?} 1 } } */

vint16mf4_t 
test_vssra_vx_i16mf4_tumu_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1)
{
  return vssra_vx_i16mf4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf4_tumu_vl32_31 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tumu_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tumu_vl32_0 )?} 1 } } */

vint16mf2_t 
test_vssra_vx_i16mf2_tumu_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1)
{
  return vssra_vx_i16mf2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16mf2_tumu_vl32_31 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tumu_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m1_tumu_vl32_0 )?} 1 } } */

vint16m1_t 
test_vssra_vx_i16m1_tumu_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1)
{
  return vssra_vx_i16m1_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m1_tumu_vl32_31 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tumu_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m2_tumu_vl32_0 )?} 1 } } */

vint16m2_t 
test_vssra_vx_i16m2_tumu_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1)
{
  return vssra_vx_i16m2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m2_tumu_vl32_31 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tumu_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m4_tumu_vl32_0 )?} 1 } } */

vint16m4_t 
test_vssra_vx_i16m4_tumu_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1)
{
  return vssra_vx_i16m4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m4_tumu_vl32_31 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tumu_vl32_0(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i16m8_tumu_vl32_0 )?} 1 } } */

vint16m8_t 
test_vssra_vx_i16m8_tumu_vl32_31(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1)
{
  return vssra_vx_i16m8_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i16m8_tumu_vl32_31 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tumu_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tumu_vl32_0 )?} 1 } } */

vint32mf2_t 
test_vssra_vx_i32mf2_tumu_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1)
{
  return vssra_vx_i32mf2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32mf2_tumu_vl32_31 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tumu_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m1_tumu_vl32_0 )?} 1 } } */

vint32m1_t 
test_vssra_vx_i32m1_tumu_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1)
{
  return vssra_vx_i32m1_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m1_tumu_vl32_31 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tumu_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m2_tumu_vl32_0 )?} 1 } } */

vint32m2_t 
test_vssra_vx_i32m2_tumu_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1)
{
  return vssra_vx_i32m2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m2_tumu_vl32_31 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tumu_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m4_tumu_vl32_0 )?} 1 } } */

vint32m4_t 
test_vssra_vx_i32m4_tumu_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1)
{
  return vssra_vx_i32m4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m4_tumu_vl32_31 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tumu_vl32_0(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i32m8_tumu_vl32_0 )?} 1 } } */

vint32m8_t 
test_vssra_vx_i32m8_tumu_vl32_31(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1)
{
  return vssra_vx_i32m8_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i32m8_tumu_vl32_31 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tumu_vl32_0(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m1_tumu_vl32_0 )?} 1 } } */

vint64m1_t 
test_vssra_vx_i64m1_tumu_vl32_31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1)
{
  return vssra_vx_i64m1_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m1_tumu_vl32_31 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tumu_vl32_0(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m2_tumu_vl32_0 )?} 1 } } */

vint64m2_t 
test_vssra_vx_i64m2_tumu_vl32_31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1)
{
  return vssra_vx_i64m2_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m2_tumu_vl32_31 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tumu_vl32_0(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m4_tumu_vl32_0 )?} 1 } } */

vint64m4_t 
test_vssra_vx_i64m4_tumu_vl32_31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1)
{
  return vssra_vx_i64m4_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m4_tumu_vl32_31 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tumu_vl32_0(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tumu(mask, maskedoff, op1, 0, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t\n(?: test_vssra_vx_i64m8_tumu_vl32_0 )?} 1 } } */

vint64m8_t 
test_vssra_vx_i64m8_tumu_vl32_31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1)
{
  return vssra_vx_i64m8_tumu(mask, maskedoff, op1, 31, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vssra\.vi).)*\s+vssra\.vi\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t\n(?: test_vssra_vx_i64m8_tumu_vl32_31 )?} 1 } } */
