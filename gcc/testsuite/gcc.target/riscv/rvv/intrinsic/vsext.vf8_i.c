
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsext_vf8_i64m1(vint8mf8_t op1, size_t vl)
{
  return vsext_vf8_i64m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1 )?} 1 } } */

vint64m1_t 
test_vsext_vf8_i64m1_vl31(vint8mf8_t op1)
{
  return vsext_vf8_i64m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1_vl31 )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2(vint8mf4_t op1, size_t vl)
{
  return vsext_vf8_i64m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2 )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2_vl31(vint8mf4_t op1)
{
  return vsext_vf8_i64m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2_vl31 )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4(vint8mf2_t op1, size_t vl)
{
  return vsext_vf8_i64m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4 )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4_vl31(vint8mf2_t op1)
{
  return vsext_vf8_i64m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4_vl31 )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8(vint8m1_t op1, size_t vl)
{
  return vsext_vf8_i64m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8 )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8_vl31(vint8m1_t op1)
{
  return vsext_vf8_i64m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8_vl31 )?} 1 } } */
