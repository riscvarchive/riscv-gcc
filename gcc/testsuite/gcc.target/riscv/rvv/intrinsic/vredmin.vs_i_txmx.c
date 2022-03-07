
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tama(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf8_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tama_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf8_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tama(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf4_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tama_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf4_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tama(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf2_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tama_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf2_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tama(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m1_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tama_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m1_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tama(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m2_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tama_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m2_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tama(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m4_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tama_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m4_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tama(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m8_i8m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tama )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tama_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m8_i8m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tama(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf4_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tama_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf4_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tama(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf2_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tama_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf2_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tama(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m1_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tama_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m1_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tama(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m2_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tama_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m2_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tama(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m4_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tama_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m4_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tama_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tama(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m8_i16m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tama )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tama_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m8_i16m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tama_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tama(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32mf2_i32m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tama )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tama_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32mf2_i32m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tama_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tama(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m1_i32m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tama )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tama_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m1_i32m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tama_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tama(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m2_i32m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tama )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tama_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m2_i32m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tama_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tama(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m4_i32m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tama )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tama_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m4_i32m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tama_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tama(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m8_i32m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tama )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tama_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m8_i32m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tama_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tama(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m1_i64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tama )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tama_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m1_i64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tama_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tama(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m2_i64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tama )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tama_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m2_i64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tama_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tama(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m4_i64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tama )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tama_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m4_i64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tama_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tama(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m8_i64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tama )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tama_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m8_i64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tama_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tamu(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf8_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tamu_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf8_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tamu(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf4_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tamu_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf4_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tamu(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf2_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tamu_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf2_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m1_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tamu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m1_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tamu(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m2_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tamu_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m2_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tamu(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m4_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tamu_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m4_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tamu(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m8_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tamu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tamu_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m8_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tamu(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf4_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tamu_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf4_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tamu(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf2_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tamu_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf2_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m1_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tamu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m1_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tamu(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m2_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tamu_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m2_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tamu(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m4_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tamu_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m4_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tamu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tamu(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m8_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tamu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tamu_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m8_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tamu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tamu(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32mf2_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tamu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tamu_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32mf2_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tamu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m1_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tamu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tamu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m1_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tamu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tamu(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m2_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tamu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tamu_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m2_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tamu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tamu(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m4_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tamu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tamu_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m4_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tamu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tamu(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m8_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tamu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tamu_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m8_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tamu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m1_i64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tamu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tamu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m1_i64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tamu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tamu(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m2_i64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tamu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tamu_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m2_i64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tamu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tamu(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m4_i64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tamu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tamu_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m4_i64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tamu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tamu(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m8_i64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tamu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tamu_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m8_i64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tamu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tuma(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf8_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tuma_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf8_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tuma(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf4_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tuma_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf4_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tuma(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf2_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tuma_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf2_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m1_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tuma_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m1_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tuma(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m2_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tuma_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m2_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tuma(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m4_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tuma_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m4_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tuma(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m8_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tuma )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tuma_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m8_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tuma(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf4_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tuma_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf4_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tuma(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf2_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tuma_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf2_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m1_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tuma_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m1_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tuma(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m2_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tuma_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m2_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tuma(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m4_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tuma_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m4_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tuma_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tuma(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m8_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tuma )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tuma_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m8_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tuma_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tuma(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32mf2_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tuma )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tuma_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32mf2_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tuma_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m1_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tuma )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tuma_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m1_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tuma_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tuma(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m2_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tuma )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tuma_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m2_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tuma_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tuma(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m4_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tuma )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tuma_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m4_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tuma_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tuma(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m8_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tuma )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tuma_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m8_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tuma_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m1_i64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tuma )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tuma_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m1_i64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tuma_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tuma(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m2_i64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tuma )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tuma_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m2_i64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tuma_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tuma(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m4_i64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tuma )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tuma_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m4_i64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tuma_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tuma(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m8_i64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tuma )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tuma_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m8_i64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tuma_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tumu(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf8_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf8_i8m1_tumu_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf8_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf8_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tumu(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf4_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf4_i8m1_tumu_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf4_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf4_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tumu(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8mf2_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8mf2_i8m1_tumu_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8mf2_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8mf2_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m1_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m1_i8m1_tumu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m1_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m1_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tumu(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m2_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m2_i8m1_tumu_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m2_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m2_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tumu(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m4_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m4_i8m1_tumu_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m4_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m4_i8m1_tumu_vl31 )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tumu(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredmin_vs_i8m8_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tumu )?} 1 } } */

vint8m1_t 
test_vredmin_vs_i8m8_i8m1_tumu_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredmin_vs_i8m8_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i8m8_i8m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tumu(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf4_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf4_i16m1_tumu_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf4_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf4_i16m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tumu(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16mf2_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16mf2_i16m1_tumu_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16mf2_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16mf2_i16m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m1_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m1_i16m1_tumu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m1_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m1_i16m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tumu(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m2_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m2_i16m1_tumu_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m2_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m2_i16m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tumu(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m4_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m4_i16m1_tumu_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m4_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m4_i16m1_tumu_vl31 )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tumu(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredmin_vs_i16m8_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tumu )?} 1 } } */

vint16m1_t 
test_vredmin_vs_i16m8_i16m1_tumu_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredmin_vs_i16m8_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i16m8_i16m1_tumu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tumu(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32mf2_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tumu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32mf2_i32m1_tumu_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32mf2_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32mf2_i32m1_tumu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m1_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tumu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m1_i32m1_tumu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m1_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m1_i32m1_tumu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tumu(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m2_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tumu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m2_i32m1_tumu_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m2_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m2_i32m1_tumu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tumu(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m4_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tumu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m4_i32m1_tumu_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m4_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m4_i32m1_tumu_vl31 )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tumu(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredmin_vs_i32m8_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tumu )?} 1 } } */

vint32m1_t 
test_vredmin_vs_i32m8_i32m1_tumu_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredmin_vs_i32m8_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i32m8_i32m1_tumu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m1_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tumu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m1_i64m1_tumu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m1_i64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m1_i64m1_tumu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tumu(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m2_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tumu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m2_i64m1_tumu_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m2_i64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m2_i64m1_tumu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tumu(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m4_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tumu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m4_i64m1_tumu_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m4_i64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m4_i64m1_tumu_vl31 )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tumu(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredmin_vs_i64m8_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tumu )?} 1 } } */

vint64m1_t 
test_vredmin_vs_i64m8_i64m1_tumu_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredmin_vs_i64m8_i64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vredmin\.vs).)*\s+vredmin\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vredmin_vs_i64m8_i64m1_tumu_vl31 )?} 1 } } */
