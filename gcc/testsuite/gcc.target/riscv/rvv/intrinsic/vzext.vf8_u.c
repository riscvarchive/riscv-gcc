
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vzext_vf8_u64m1(vuint8mf8_t op1, size_t vl)
{
  return vzext_vf8_u64m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m1 )?} 1 } } */

vuint64m1_t 
test_vzext_vf8_u64m1_vl31(vuint8mf8_t op1)
{
  return vzext_vf8_u64m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m1_vl31 )?} 1 } } */

vuint64m2_t 
test_vzext_vf8_u64m2(vuint8mf4_t op1, size_t vl)
{
  return vzext_vf8_u64m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m2 )?} 1 } } */

vuint64m2_t 
test_vzext_vf8_u64m2_vl31(vuint8mf4_t op1)
{
  return vzext_vf8_u64m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m2_vl31 )?} 1 } } */

vuint64m4_t 
test_vzext_vf8_u64m4(vuint8mf2_t op1, size_t vl)
{
  return vzext_vf8_u64m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m4 )?} 1 } } */

vuint64m4_t 
test_vzext_vf8_u64m4_vl31(vuint8mf2_t op1)
{
  return vzext_vf8_u64m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m4_vl31 )?} 1 } } */

vuint64m8_t 
test_vzext_vf8_u64m8(vuint8m1_t op1, size_t vl)
{
  return vzext_vf8_u64m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m8 )?} 1 } } */

vuint64m8_t 
test_vzext_vf8_u64m8_vl31(vuint8m1_t op1)
{
  return vzext_vf8_u64m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vzext\.vf8).)*\s+vzext\.vf8\s+(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vzext_vf8_u64m8_vl31 )?} 1 } } */
