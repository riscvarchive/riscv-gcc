
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


int8_t
test_vmv_x_s_i8mf8_i8(vint8mf8_t src)
{
  return vmv_x_s_i8mf8_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i8mf8_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8mf4_i8(vint8mf4_t src)
{
  return vmv_x_s_i8mf4_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i8mf4_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8mf2_i8(vint8mf2_t src)
{
  return vmv_x_s_i8mf2_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i8mf2_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8m1_i8(vint8m1_t src)
{
  return vmv_x_s_i8m1_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i8m1_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8m2_i8(vint8m2_t src)
{
  return vmv_x_s_i8m2_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv_x_s_i8m2_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8m4_i8(vint8m4_t src)
{
  return vmv_x_s_i8m4_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv_x_s_i8m4_i8 )?} 1 } } */

int8_t
test_vmv_x_s_i8m8_i8(vint8m8_t src)
{
  return vmv_x_s_i8m8_i8(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)\n(?: test_vmv_x_s_i8m8_i8 )?} 1 } } */

int16_t
test_vmv_x_s_i16mf4_i16(vint16mf4_t src)
{
  return vmv_x_s_i16mf4_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i16mf4_i16 )?} 1 } } */

int16_t
test_vmv_x_s_i16mf2_i16(vint16mf2_t src)
{
  return vmv_x_s_i16mf2_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i16mf2_i16 )?} 1 } } */

int16_t
test_vmv_x_s_i16m1_i16(vint16m1_t src)
{
  return vmv_x_s_i16m1_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i16m1_i16 )?} 1 } } */

int16_t
test_vmv_x_s_i16m2_i16(vint16m2_t src)
{
  return vmv_x_s_i16m2_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv_x_s_i16m2_i16 )?} 1 } } */

int16_t
test_vmv_x_s_i16m4_i16(vint16m4_t src)
{
  return vmv_x_s_i16m4_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv_x_s_i16m4_i16 )?} 1 } } */

int16_t
test_vmv_x_s_i16m8_i16(vint16m8_t src)
{
  return vmv_x_s_i16m8_i16(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)\n(?: test_vmv_x_s_i16m8_i16 )?} 1 } } */

int32_t
test_vmv_x_s_i32mf2_i32(vint32mf2_t src)
{
  return vmv_x_s_i32mf2_i32(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i32mf2_i32 )?} 1 } } */

int32_t
test_vmv_x_s_i32m1_i32(vint32m1_t src)
{
  return vmv_x_s_i32m1_i32(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i32m1_i32 )?} 1 } } */

int32_t
test_vmv_x_s_i32m2_i32(vint32m2_t src)
{
  return vmv_x_s_i32m2_i32(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv_x_s_i32m2_i32 )?} 1 } } */

int32_t
test_vmv_x_s_i32m4_i32(vint32m4_t src)
{
  return vmv_x_s_i32m4_i32(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv_x_s_i32m4_i32 )?} 1 } } */

int32_t
test_vmv_x_s_i32m8_i32(vint32m8_t src)
{
  return vmv_x_s_i32m8_i32(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)\n(?: test_vmv_x_s_i32m8_i32 )?} 1 } } */

int64_t
test_vmv_x_s_i64m1_i64(vint64m1_t src)
{
  return vmv_x_s_i64m1_i64(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv_x_s_i64m1_i64 )?} 1 {target riscv64-*-*}} } */

int64_t
test_vmv_x_s_i64m2_i64(vint64m2_t src)
{
  return vmv_x_s_i64m2_i64(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv_x_s_i64m2_i64 )?} 1 {target riscv64-*-*}} } */

int64_t
test_vmv_x_s_i64m4_i64(vint64m4_t src)
{
  return vmv_x_s_i64m4_i64(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv_x_s_i64m4_i64 )?} 1 {target riscv64-*-*}} } */

int64_t
test_vmv_x_s_i64m8_i64(vint64m8_t src)
{
  return vmv_x_s_i64m8_i64(src);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.x\.s).)*\s+vmv\.x\.s\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[08]|v16|v24)\n(?: test_vmv_x_s_i64m8_i64 )?} 1 {target riscv64-*-*}} } */
