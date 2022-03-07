
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmv_v_x_u64m1_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1_ta )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m1_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1_ta_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2_ta )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m2_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2_ta_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4_ta )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m4_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4_ta_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8_ta(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8_ta )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31(uint64_t op1)
{
  return vmv_v_x_u64m8_ta(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8_ta_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu(vuint64m1_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1_tu )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31(vuint64m1_t dest, uint64_t op1)
{
  return vmv_v_x_u64m1_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1_tu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu(vuint64m2_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2_tu )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31(vuint64m2_t dest, uint64_t op1)
{
  return vmv_v_x_u64m2_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2_tu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu(vuint64m4_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4_tu )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31(vuint64m4_t dest, uint64_t op1)
{
  return vmv_v_x_u64m4_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4_tu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu(vuint64m8_t dest, uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8_tu )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31(vuint64m8_t dest, uint64_t op1)
{
  return vmv_v_x_u64m8_tu(dest, op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8_tu_vl31 )?} 1 {target riscv64-*-*}} } */
