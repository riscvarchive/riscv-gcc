
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vslide1down_vx_i64m1_vl32(vint64m1_t op1, int64_t op2)
{
  return vslide1down_vx_i64m1(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslide1down\.vx).)*\s+vslide1down\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vslide1down_vx_i64m1_vl32 )?} 1 {target riscv64-*-*}} } */

vint64m2_t 
test_vslide1down_vx_i64m2_vl32(vint64m2_t op1, int64_t op2)
{
  return vslide1down_vx_i64m2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslide1down\.vx).)*\s+vslide1down\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vslide1down_vx_i64m2_vl32 )?} 1 {target riscv64-*-*}} } */

vint64m4_t 
test_vslide1down_vx_i64m4_vl32(vint64m4_t op1, int64_t op2)
{
  return vslide1down_vx_i64m4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslide1down\.vx).)*\s+vslide1down\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vslide1down_vx_i64m4_vl32 )?} 1 {target riscv64-*-*}} } */

vint64m8_t 
test_vslide1down_vx_i64m8_vl32(vint64m8_t op1, int64_t op2)
{
  return vslide1down_vx_i64m8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vslide1down\.vx).)*\s+vslide1down\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vslide1down_vx_i64m8_vl32 )?} 1 {target riscv64-*-*}} } */
