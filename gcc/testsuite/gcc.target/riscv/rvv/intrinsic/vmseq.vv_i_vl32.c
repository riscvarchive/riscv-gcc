
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmseq_vv_i8mf8_b64_vl32(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmseq_vv_i8mf8_b64(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i8mf8_b64_vl32 )?} 1 } } */

vbool32_t 
test_vmseq_vv_i8mf4_b32_vl32(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmseq_vv_i8mf4_b32(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i8mf4_b32_vl32 )?} 1 } } */

vbool16_t 
test_vmseq_vv_i8mf2_b16_vl32(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmseq_vv_i8mf2_b16(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i8mf2_b16_vl32 )?} 1 } } */

vbool8_t 
test_vmseq_vv_i8m1_b8_vl32(vint8m1_t op1, vint8m1_t op2)
{
  return vmseq_vv_i8m1_b8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i8m1_b8_vl32 )?} 1 } } */

vbool4_t 
test_vmseq_vv_i8m2_b4_vl32(vint8m2_t op1, vint8m2_t op2)
{
  return vmseq_vv_i8m2_b4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmseq_vv_i8m2_b4_vl32 )?} 1 } } */

vbool2_t 
test_vmseq_vv_i8m4_b2_vl32(vint8m4_t op1, vint8m4_t op2)
{
  return vmseq_vv_i8m4_b2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmseq_vv_i8m4_b2_vl32 )?} 1 } } */

vbool1_t 
test_vmseq_vv_i8m8_b1_vl32(vint8m8_t op1, vint8m8_t op2)
{
  return vmseq_vv_i8m8_b1(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmseq_vv_i8m8_b1_vl32 )?} 1 } } */

vbool64_t 
test_vmseq_vv_i16mf4_b64_vl32(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmseq_vv_i16mf4_b64(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i16mf4_b64_vl32 )?} 1 } } */

vbool32_t 
test_vmseq_vv_i16mf2_b32_vl32(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmseq_vv_i16mf2_b32(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i16mf2_b32_vl32 )?} 1 } } */

vbool16_t 
test_vmseq_vv_i16m1_b16_vl32(vint16m1_t op1, vint16m1_t op2)
{
  return vmseq_vv_i16m1_b16(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i16m1_b16_vl32 )?} 1 } } */

vbool8_t 
test_vmseq_vv_i16m2_b8_vl32(vint16m2_t op1, vint16m2_t op2)
{
  return vmseq_vv_i16m2_b8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmseq_vv_i16m2_b8_vl32 )?} 1 } } */

vbool4_t 
test_vmseq_vv_i16m4_b4_vl32(vint16m4_t op1, vint16m4_t op2)
{
  return vmseq_vv_i16m4_b4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmseq_vv_i16m4_b4_vl32 )?} 1 } } */

vbool2_t 
test_vmseq_vv_i16m8_b2_vl32(vint16m8_t op1, vint16m8_t op2)
{
  return vmseq_vv_i16m8_b2(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmseq_vv_i16m8_b2_vl32 )?} 1 } } */

vbool64_t 
test_vmseq_vv_i32mf2_b64_vl32(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmseq_vv_i32mf2_b64(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i32mf2_b64_vl32 )?} 1 } } */

vbool32_t 
test_vmseq_vv_i32m1_b32_vl32(vint32m1_t op1, vint32m1_t op2)
{
  return vmseq_vv_i32m1_b32(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i32m1_b32_vl32 )?} 1 } } */

vbool16_t 
test_vmseq_vv_i32m2_b16_vl32(vint32m2_t op1, vint32m2_t op2)
{
  return vmseq_vv_i32m2_b16(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmseq_vv_i32m2_b16_vl32 )?} 1 } } */

vbool8_t 
test_vmseq_vv_i32m4_b8_vl32(vint32m4_t op1, vint32m4_t op2)
{
  return vmseq_vv_i32m4_b8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmseq_vv_i32m4_b8_vl32 )?} 1 } } */

vbool4_t 
test_vmseq_vv_i32m8_b4_vl32(vint32m8_t op1, vint32m8_t op2)
{
  return vmseq_vv_i32m8_b4(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmseq_vv_i32m8_b4_vl32 )?} 1 } } */

vbool64_t 
test_vmseq_vv_i64m1_b64_vl32(vint64m1_t op1, vint64m1_t op2)
{
  return vmseq_vv_i64m1_b64(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmseq_vv_i64m1_b64_vl32 )?} 1 } } */

vbool32_t 
test_vmseq_vv_i64m2_b32_vl32(vint64m2_t op1, vint64m2_t op2)
{
  return vmseq_vv_i64m2_b32(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmseq_vv_i64m2_b32_vl32 )?} 1 } } */

vbool16_t 
test_vmseq_vv_i64m4_b16_vl32(vint64m4_t op1, vint64m4_t op2)
{
  return vmseq_vv_i64m4_b16(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmseq_vv_i64m4_b16_vl32 )?} 1 } } */

vbool8_t 
test_vmseq_vv_i64m8_b8_vl32(vint64m8_t op1, vint64m8_t op2)
{
  return vmseq_vv_i64m8_b8(op1, op2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmseq\.vv).)*\s+vmseq\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmseq_vv_i64m8_b8_vl32 )?} 1 } } */
