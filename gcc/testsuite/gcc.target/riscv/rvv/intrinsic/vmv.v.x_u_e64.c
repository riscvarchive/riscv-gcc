
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmv_v_x_u64m1(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1 )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vmv_v_x_u64m1_vl31(uint64_t op1)
{
  return vmv_v_x_u64m1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m1_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vmv_v_x_u64m2_vl31(uint64_t op1)
{
  return vmv_v_x_u64m2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m2_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vmv_v_x_u64m4_vl31(uint64_t op1)
{
  return vmv_v_x_u64m4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m4_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8(uint64_t op1, size_t vl)
{
  return vmv_v_x_u64m8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vmv_v_x_u64m8_vl31(uint64_t op1)
{
  return vmv_v_x_u64m8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.x).)*\s+vmv\.v\.x\s+(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n(?: test_vmv_v_x_u64m8_vl31 )?} 1 {target riscv64-*-*}} } */
