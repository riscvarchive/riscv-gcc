
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vmv_v_x_u64m1_ta_m16(size_t vl)
{
  return vmv_v_x_u64m1_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_u64m1_ta_m16 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_15(size_t vl)
{
  return vmv_v_x_u64m1_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_u64m1_ta_15 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m1_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_u64m1_ta_vl31_m16 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m1_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_u64m1_ta_vl31_15 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_m16(size_t vl)
{
  return vmv_v_x_u64m2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_u64m2_ta_m16 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_15(size_t vl)
{
  return vmv_v_x_u64m2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_u64m2_ta_15 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_u64m2_ta_vl31_m16 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_u64m2_ta_vl31_15 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_m16(size_t vl)
{
  return vmv_v_x_u64m4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_u64m4_ta_m16 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_15(size_t vl)
{
  return vmv_v_x_u64m4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_u64m4_ta_15 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_u64m4_ta_vl31_m16 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_u64m4_ta_vl31_15 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_m16(size_t vl)
{
  return vmv_v_x_u64m8_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_u64m8_ta_m16 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_15(size_t vl)
{
  return vmv_v_x_u64m8_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_u64m8_ta_15 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_u64m8_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_u64m8_ta_vl31_m16 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_u64m8_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_u64m8_ta_vl31_15 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_m16(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_u64m1_tu_m16 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_15(vuint64m1_t dest, size_t vl)
{
  return vmv_v_x_u64m1_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_u64m1_tu_15 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31_m16(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_u64m1_tu_vl31_m16 )?} 1 } } */

vuint64m1_t 
test_vmv_v_x_u64m1_tu_vl31_15(vuint64m1_t dest)
{
  return vmv_v_x_u64m1_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_u64m1_tu_vl31_15 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_m16(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_u64m2_tu_m16 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_15(vuint64m2_t dest, size_t vl)
{
  return vmv_v_x_u64m2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_u64m2_tu_15 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31_m16(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_u64m2_tu_vl31_m16 )?} 1 } } */

vuint64m2_t 
test_vmv_v_x_u64m2_tu_vl31_15(vuint64m2_t dest)
{
  return vmv_v_x_u64m2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_u64m2_tu_vl31_15 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_m16(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_u64m4_tu_m16 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_15(vuint64m4_t dest, size_t vl)
{
  return vmv_v_x_u64m4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_u64m4_tu_15 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31_m16(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_u64m4_tu_vl31_m16 )?} 1 } } */

vuint64m4_t 
test_vmv_v_x_u64m4_tu_vl31_15(vuint64m4_t dest)
{
  return vmv_v_x_u64m4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_u64m4_tu_vl31_15 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_m16(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_u64m8_tu_m16 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_15(vuint64m8_t dest, size_t vl)
{
  return vmv_v_x_u64m8_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_u64m8_tu_15 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31_m16(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_u64m8_tu_vl31_m16 )?} 1 } } */

vuint64m8_t 
test_vmv_v_x_u64m8_tu_vl31_15(vuint64m8_t dest)
{
  return vmv_v_x_u64m8_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_u64m8_tu_vl31_15 )?} 1 } } */
