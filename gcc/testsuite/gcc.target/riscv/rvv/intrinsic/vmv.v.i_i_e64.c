
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmv_v_x_i64m1_m16(size_t vl)
{
  return vmv_v_x_i64m1(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i64m1_m16 )?} 1 } } */

vint64m1_t 
test_vmv_v_x_i64m1_15(size_t vl)
{
  return vmv_v_x_i64m1(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i64m1_15 )?} 1 } } */

vint64m1_t 
test_vmv_v_x_i64m1_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m1(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i64m1_vl31_m16 )?} 1 } } */

vint64m1_t 
test_vmv_v_x_i64m1_vl31_15(size_t vl)
{
  return vmv_v_x_i64m1(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i64m1_vl31_15 )?} 1 } } */

vint64m2_t 
test_vmv_v_x_i64m2_m16(size_t vl)
{
  return vmv_v_x_i64m2(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i64m2_m16 )?} 1 } } */

vint64m2_t 
test_vmv_v_x_i64m2_15(size_t vl)
{
  return vmv_v_x_i64m2(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i64m2_15 )?} 1 } } */

vint64m2_t 
test_vmv_v_x_i64m2_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m2(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i64m2_vl31_m16 )?} 1 } } */

vint64m2_t 
test_vmv_v_x_i64m2_vl31_15(size_t vl)
{
  return vmv_v_x_i64m2(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i64m2_vl31_15 )?} 1 } } */

vint64m4_t 
test_vmv_v_x_i64m4_m16(size_t vl)
{
  return vmv_v_x_i64m4(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i64m4_m16 )?} 1 } } */

vint64m4_t 
test_vmv_v_x_i64m4_15(size_t vl)
{
  return vmv_v_x_i64m4(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i64m4_15 )?} 1 } } */

vint64m4_t 
test_vmv_v_x_i64m4_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m4(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i64m4_vl31_m16 )?} 1 } } */

vint64m4_t 
test_vmv_v_x_i64m4_vl31_15(size_t vl)
{
  return vmv_v_x_i64m4(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i64m4_vl31_15 )?} 1 } } */

vint64m8_t 
test_vmv_v_x_i64m8_m16(size_t vl)
{
  return vmv_v_x_i64m8(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i64m8_m16 )?} 1 } } */

vint64m8_t 
test_vmv_v_x_i64m8_15(size_t vl)
{
  return vmv_v_x_i64m8(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i64m8_15 )?} 1 } } */

vint64m8_t 
test_vmv_v_x_i64m8_vl31_m16(size_t vl)
{
  return vmv_v_x_i64m8(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i64m8_vl31_m16 )?} 1 } } */

vint64m8_t 
test_vmv_v_x_i64m8_vl31_15(size_t vl)
{
  return vmv_v_x_i64m8(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i64m8_vl31_15 )?} 1 } } */
