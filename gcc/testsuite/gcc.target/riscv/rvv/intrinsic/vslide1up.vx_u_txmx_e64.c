
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vslide1up_vx_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tama )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tama_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tama_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m2_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tama )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tama_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m2_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tama_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m4_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tama )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tama_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m4_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tama_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m8_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tama )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tama_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m8_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tama_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tamu )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tamu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tamu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m2_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tamu )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tamu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m2_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tamu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m4_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tamu )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tamu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m4_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tamu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m8_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tamu )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tamu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m8_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tamu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tuma )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tuma_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tuma_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m2_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tuma )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tuma_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m2_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tuma_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m4_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tuma )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tuma_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m4_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tuma_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m8_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tuma )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tuma_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m8_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tuma_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tumu )?} 1 {target riscv64-*-*}} } */

vuint64m1_t 
test_vslide1up_vx_u64m1_tumu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m1_tumu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m2_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tumu )?} 1 {target riscv64-*-*}} } */

vuint64m2_t 
test_vslide1up_vx_u64m2_tumu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m2_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m2_tumu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m4_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tumu )?} 1 {target riscv64-*-*}} } */

vuint64m4_t 
test_vslide1up_vx_u64m4_tumu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m4_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m4_tumu_vl31 )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vslide1up_vx_u64m8_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tumu )?} 1 {target riscv64-*-*}} } */

vuint64m8_t 
test_vslide1up_vx_u64m8_tumu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vslide1up_vx_u64m8_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetivli|vslide1up\.vx).)*\s+vslide1up\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t\n(?: test_vslide1up_vx_u64m8_tumu_vl31 )?} 1 {target riscv64-*-*}} } */
