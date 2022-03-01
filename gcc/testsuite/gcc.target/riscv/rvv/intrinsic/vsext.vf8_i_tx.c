
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsext_vf8_i64m1_ta(vint8mf8_t op1, size_t vl)
{
  return vsext_vf8_i64m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1_ta )?} 1 } } */

vint64m1_t 
test_vsext_vf8_i64m1_ta_vl31(vint8mf8_t op1)
{
  return vsext_vf8_i64m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1_ta_vl31 )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2_ta(vint8mf4_t op1, size_t vl)
{
  return vsext_vf8_i64m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2_ta )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2_ta_vl31(vint8mf4_t op1)
{
  return vsext_vf8_i64m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2_ta_vl31 )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4_ta(vint8mf2_t op1, size_t vl)
{
  return vsext_vf8_i64m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4_ta )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4_ta_vl31(vint8mf2_t op1)
{
  return vsext_vf8_i64m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4_ta_vl31 )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8_ta(vint8m1_t op1, size_t vl)
{
  return vsext_vf8_i64m8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8_ta )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8_ta_vl31(vint8m1_t op1)
{
  return vsext_vf8_i64m8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8_ta_vl31 )?} 1 } } */

vint64m1_t 
test_vsext_vf8_i64m1_tu(vint64m1_t dest, vint8mf8_t op1, size_t vl)
{
  return vsext_vf8_i64m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1_tu )?} 1 } } */

vint64m1_t 
test_vsext_vf8_i64m1_tu_vl31(vint64m1_t dest, vint8mf8_t op1)
{
  return vsext_vf8_i64m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m1_tu_vl31 )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2_tu(vint64m2_t dest, vint8mf4_t op1, size_t vl)
{
  return vsext_vf8_i64m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2_tu )?} 1 } } */

vint64m2_t 
test_vsext_vf8_i64m2_tu_vl31(vint64m2_t dest, vint8mf4_t op1)
{
  return vsext_vf8_i64m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m2_tu_vl31 )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4_tu(vint64m4_t dest, vint8mf2_t op1, size_t vl)
{
  return vsext_vf8_i64m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4_tu )?} 1 } } */

vint64m4_t 
test_vsext_vf8_i64m4_tu_vl31(vint64m4_t dest, vint8mf2_t op1)
{
  return vsext_vf8_i64m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m4_tu_vl31 )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8_tu(vint64m8_t dest, vint8m1_t op1, size_t vl)
{
  return vsext_vf8_i64m8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8_tu )?} 1 } } */

vint64m8_t 
test_vsext_vf8_i64m8_tu_vl31(vint64m8_t dest, vint8m1_t op1)
{
  return vsext_vf8_i64m8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vsext\.vf8).)*\s+vsext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vsext_vf8_i64m8_tu_vl31 )?} 1 } } */
