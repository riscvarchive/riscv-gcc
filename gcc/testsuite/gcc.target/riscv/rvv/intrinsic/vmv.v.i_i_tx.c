
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8mf8_t 
test_vmv_v_x_i8mf8_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf8_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf8_ta_m16 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_ta_15(size_t vl)
{
  return vmv_v_x_i8mf8_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf8_ta_15 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf8_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf8_ta_vl31_m16 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf8_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf8_ta_vl31_15 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf4_ta_m16 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_ta_15(size_t vl)
{
  return vmv_v_x_i8mf4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf4_ta_15 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf4_ta_vl31_m16 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf4_ta_vl31_15 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i8mf2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf2_ta_m16 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_ta_15(size_t vl)
{
  return vmv_v_x_i8mf2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf2_ta_15 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8mf2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf2_ta_vl31_m16 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8mf2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf2_ta_vl31_15 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_ta_m16(size_t vl)
{
  return vmv_v_x_i8m1_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8m1_ta_m16 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_ta_15(size_t vl)
{
  return vmv_v_x_i8m1_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8m1_ta_15 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m1_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8m1_ta_vl31_m16 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m1_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8m1_ta_vl31_15 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_ta_m16(size_t vl)
{
  return vmv_v_x_i8m2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i8m2_ta_m16 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_ta_15(size_t vl)
{
  return vmv_v_x_i8m2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i8m2_ta_15 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i8m2_ta_vl31_m16 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i8m2_ta_vl31_15 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_ta_m16(size_t vl)
{
  return vmv_v_x_i8m4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i8m4_ta_m16 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_ta_15(size_t vl)
{
  return vmv_v_x_i8m4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i8m4_ta_15 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i8m4_ta_vl31_m16 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i8m4_ta_vl31_15 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_ta_m16(size_t vl)
{
  return vmv_v_x_i8m8_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i8m8_ta_m16 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_ta_15(size_t vl)
{
  return vmv_v_x_i8m8_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i8m8_ta_15 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i8m8_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i8m8_ta_vl31_m16 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i8m8_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i8m8_ta_vl31_15 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_ta_m16(size_t vl)
{
  return vmv_v_x_i16mf4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf4_ta_m16 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_ta_15(size_t vl)
{
  return vmv_v_x_i16mf4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf4_ta_15 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf4_ta_vl31_m16 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf4_ta_vl31_15 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i16mf2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf2_ta_m16 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_ta_15(size_t vl)
{
  return vmv_v_x_i16mf2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf2_ta_15 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16mf2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf2_ta_vl31_m16 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16mf2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf2_ta_vl31_15 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_ta_m16(size_t vl)
{
  return vmv_v_x_i16m1_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16m1_ta_m16 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_ta_15(size_t vl)
{
  return vmv_v_x_i16m1_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16m1_ta_15 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m1_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16m1_ta_vl31_m16 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m1_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16m1_ta_vl31_15 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_ta_m16(size_t vl)
{
  return vmv_v_x_i16m2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i16m2_ta_m16 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_ta_15(size_t vl)
{
  return vmv_v_x_i16m2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i16m2_ta_15 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i16m2_ta_vl31_m16 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i16m2_ta_vl31_15 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_ta_m16(size_t vl)
{
  return vmv_v_x_i16m4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i16m4_ta_m16 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_ta_15(size_t vl)
{
  return vmv_v_x_i16m4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i16m4_ta_15 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i16m4_ta_vl31_m16 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i16m4_ta_vl31_15 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_ta_m16(size_t vl)
{
  return vmv_v_x_i16m8_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i16m8_ta_m16 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_ta_15(size_t vl)
{
  return vmv_v_x_i16m8_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i16m8_ta_15 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i16m8_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i16m8_ta_vl31_m16 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i16m8_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i16m8_ta_vl31_15 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_ta_m16(size_t vl)
{
  return vmv_v_x_i32mf2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32mf2_ta_m16 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_ta_15(size_t vl)
{
  return vmv_v_x_i32mf2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32mf2_ta_15 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32mf2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32mf2_ta_vl31_m16 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32mf2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32mf2_ta_vl31_15 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_ta_m16(size_t vl)
{
  return vmv_v_x_i32m1_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32m1_ta_m16 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_ta_15(size_t vl)
{
  return vmv_v_x_i32m1_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32m1_ta_15 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m1_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32m1_ta_vl31_m16 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m1_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32m1_ta_vl31_15 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_ta_m16(size_t vl)
{
  return vmv_v_x_i32m2_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i32m2_ta_m16 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_ta_15(size_t vl)
{
  return vmv_v_x_i32m2_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i32m2_ta_15 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m2_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i32m2_ta_vl31_m16 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m2_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i32m2_ta_vl31_15 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_ta_m16(size_t vl)
{
  return vmv_v_x_i32m4_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i32m4_ta_m16 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_ta_15(size_t vl)
{
  return vmv_v_x_i32m4_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i32m4_ta_15 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m4_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i32m4_ta_vl31_m16 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m4_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i32m4_ta_vl31_15 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_ta_m16(size_t vl)
{
  return vmv_v_x_i32m8_ta(-16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i32m8_ta_m16 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_ta_15(size_t vl)
{
  return vmv_v_x_i32m8_ta(15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i32m8_ta_15 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_ta_vl31_m16(size_t vl)
{
  return vmv_v_x_i32m8_ta(-16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i32m8_ta_vl31_m16 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_ta_vl31_15(size_t vl)
{
  return vmv_v_x_i32m8_ta(15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i32m8_ta_vl31_15 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_tu_m16(vint8mf8_t dest, size_t vl)
{
  return vmv_v_x_i8mf8_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf8_tu_m16 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_tu_15(vint8mf8_t dest, size_t vl)
{
  return vmv_v_x_i8mf8_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf8_tu_15 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl31_m16(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf8_tu_vl31_m16 )?} 1 } } */

vint8mf8_t 
test_vmv_v_x_i8mf8_tu_vl31_15(vint8mf8_t dest)
{
  return vmv_v_x_i8mf8_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf8_tu_vl31_15 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_tu_m16(vint8mf4_t dest, size_t vl)
{
  return vmv_v_x_i8mf4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf4_tu_m16 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_tu_15(vint8mf4_t dest, size_t vl)
{
  return vmv_v_x_i8mf4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf4_tu_15 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl31_m16(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf4_tu_vl31_m16 )?} 1 } } */

vint8mf4_t 
test_vmv_v_x_i8mf4_tu_vl31_15(vint8mf4_t dest)
{
  return vmv_v_x_i8mf4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf4_tu_vl31_15 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_tu_m16(vint8mf2_t dest, size_t vl)
{
  return vmv_v_x_i8mf2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf2_tu_m16 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_tu_15(vint8mf2_t dest, size_t vl)
{
  return vmv_v_x_i8mf2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf2_tu_15 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl31_m16(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8mf2_tu_vl31_m16 )?} 1 } } */

vint8mf2_t 
test_vmv_v_x_i8mf2_tu_vl31_15(vint8mf2_t dest)
{
  return vmv_v_x_i8mf2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8mf2_tu_vl31_15 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_tu_m16(vint8m1_t dest, size_t vl)
{
  return vmv_v_x_i8m1_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8m1_tu_m16 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_tu_15(vint8m1_t dest, size_t vl)
{
  return vmv_v_x_i8m1_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8m1_tu_15 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_tu_vl31_m16(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i8m1_tu_vl31_m16 )?} 1 } } */

vint8m1_t 
test_vmv_v_x_i8m1_tu_vl31_15(vint8m1_t dest)
{
  return vmv_v_x_i8m1_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i8m1_tu_vl31_15 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_tu_m16(vint8m2_t dest, size_t vl)
{
  return vmv_v_x_i8m2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i8m2_tu_m16 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_tu_15(vint8m2_t dest, size_t vl)
{
  return vmv_v_x_i8m2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i8m2_tu_15 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_tu_vl31_m16(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i8m2_tu_vl31_m16 )?} 1 } } */

vint8m2_t 
test_vmv_v_x_i8m2_tu_vl31_15(vint8m2_t dest)
{
  return vmv_v_x_i8m2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i8m2_tu_vl31_15 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_tu_m16(vint8m4_t dest, size_t vl)
{
  return vmv_v_x_i8m4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i8m4_tu_m16 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_tu_15(vint8m4_t dest, size_t vl)
{
  return vmv_v_x_i8m4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i8m4_tu_15 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_tu_vl31_m16(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i8m4_tu_vl31_m16 )?} 1 } } */

vint8m4_t 
test_vmv_v_x_i8m4_tu_vl31_15(vint8m4_t dest)
{
  return vmv_v_x_i8m4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i8m4_tu_vl31_15 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_tu_m16(vint8m8_t dest, size_t vl)
{
  return vmv_v_x_i8m8_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i8m8_tu_m16 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_tu_15(vint8m8_t dest, size_t vl)
{
  return vmv_v_x_i8m8_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i8m8_tu_15 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_tu_vl31_m16(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i8m8_tu_vl31_m16 )?} 1 } } */

vint8m8_t 
test_vmv_v_x_i8m8_tu_vl31_15(vint8m8_t dest)
{
  return vmv_v_x_i8m8_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i8m8_tu_vl31_15 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_tu_m16(vint16mf4_t dest, size_t vl)
{
  return vmv_v_x_i16mf4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf4_tu_m16 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_tu_15(vint16mf4_t dest, size_t vl)
{
  return vmv_v_x_i16mf4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf4_tu_15 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl31_m16(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf4_tu_vl31_m16 )?} 1 } } */

vint16mf4_t 
test_vmv_v_x_i16mf4_tu_vl31_15(vint16mf4_t dest)
{
  return vmv_v_x_i16mf4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf4_tu_vl31_15 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_tu_m16(vint16mf2_t dest, size_t vl)
{
  return vmv_v_x_i16mf2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf2_tu_m16 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_tu_15(vint16mf2_t dest, size_t vl)
{
  return vmv_v_x_i16mf2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf2_tu_15 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl31_m16(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16mf2_tu_vl31_m16 )?} 1 } } */

vint16mf2_t 
test_vmv_v_x_i16mf2_tu_vl31_15(vint16mf2_t dest)
{
  return vmv_v_x_i16mf2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16mf2_tu_vl31_15 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_tu_m16(vint16m1_t dest, size_t vl)
{
  return vmv_v_x_i16m1_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16m1_tu_m16 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_tu_15(vint16m1_t dest, size_t vl)
{
  return vmv_v_x_i16m1_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16m1_tu_15 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_tu_vl31_m16(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i16m1_tu_vl31_m16 )?} 1 } } */

vint16m1_t 
test_vmv_v_x_i16m1_tu_vl31_15(vint16m1_t dest)
{
  return vmv_v_x_i16m1_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i16m1_tu_vl31_15 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_tu_m16(vint16m2_t dest, size_t vl)
{
  return vmv_v_x_i16m2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i16m2_tu_m16 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_tu_15(vint16m2_t dest, size_t vl)
{
  return vmv_v_x_i16m2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i16m2_tu_15 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_tu_vl31_m16(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i16m2_tu_vl31_m16 )?} 1 } } */

vint16m2_t 
test_vmv_v_x_i16m2_tu_vl31_15(vint16m2_t dest)
{
  return vmv_v_x_i16m2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i16m2_tu_vl31_15 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_tu_m16(vint16m4_t dest, size_t vl)
{
  return vmv_v_x_i16m4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i16m4_tu_m16 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_tu_15(vint16m4_t dest, size_t vl)
{
  return vmv_v_x_i16m4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i16m4_tu_15 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_tu_vl31_m16(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i16m4_tu_vl31_m16 )?} 1 } } */

vint16m4_t 
test_vmv_v_x_i16m4_tu_vl31_15(vint16m4_t dest)
{
  return vmv_v_x_i16m4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i16m4_tu_vl31_15 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_tu_m16(vint16m8_t dest, size_t vl)
{
  return vmv_v_x_i16m8_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i16m8_tu_m16 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_tu_15(vint16m8_t dest, size_t vl)
{
  return vmv_v_x_i16m8_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i16m8_tu_15 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_tu_vl31_m16(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i16m8_tu_vl31_m16 )?} 1 } } */

vint16m8_t 
test_vmv_v_x_i16m8_tu_vl31_15(vint16m8_t dest)
{
  return vmv_v_x_i16m8_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i16m8_tu_vl31_15 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_tu_m16(vint32mf2_t dest, size_t vl)
{
  return vmv_v_x_i32mf2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32mf2_tu_m16 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_tu_15(vint32mf2_t dest, size_t vl)
{
  return vmv_v_x_i32mf2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32mf2_tu_15 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl31_m16(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32mf2_tu_vl31_m16 )?} 1 } } */

vint32mf2_t 
test_vmv_v_x_i32mf2_tu_vl31_15(vint32mf2_t dest)
{
  return vmv_v_x_i32mf2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32mf2_tu_vl31_15 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_tu_m16(vint32m1_t dest, size_t vl)
{
  return vmv_v_x_i32m1_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32m1_tu_m16 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_tu_15(vint32m1_t dest, size_t vl)
{
  return vmv_v_x_i32m1_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32m1_tu_15 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_tu_vl31_m16(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16\n(?: test_vmv_v_x_i32m1_tu_vl31_m16 )?} 1 } } */

vint32m1_t 
test_vmv_v_x_i32m1_tu_vl31_15(vint32m1_t dest)
{
  return vmv_v_x_i32m1_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15\n(?: test_vmv_v_x_i32m1_tu_vl31_15 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_tu_m16(vint32m2_t dest, size_t vl)
{
  return vmv_v_x_i32m2_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i32m2_tu_m16 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_tu_15(vint32m2_t dest, size_t vl)
{
  return vmv_v_x_i32m2_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i32m2_tu_15 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_tu_vl31_m16(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*-16\n(?: test_vmv_v_x_i32m2_tu_vl31_m16 )?} 1 } } */

vint32m2_t 
test_vmv_v_x_i32m2_tu_vl31_15(vint32m2_t dest)
{
  return vmv_v_x_i32m2_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[02468]|v[1-2][02468]|v30),\s*15\n(?: test_vmv_v_x_i32m2_tu_vl31_15 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_tu_m16(vint32m4_t dest, size_t vl)
{
  return vmv_v_x_i32m4_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i32m4_tu_m16 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_tu_15(vint32m4_t dest, size_t vl)
{
  return vmv_v_x_i32m4_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i32m4_tu_15 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_tu_vl31_m16(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*-16\n(?: test_vmv_v_x_i32m4_tu_vl31_m16 )?} 1 } } */

vint32m4_t 
test_vmv_v_x_i32m4_tu_vl31_15(vint32m4_t dest)
{
  return vmv_v_x_i32m4_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[048]|v1[26]|v2[048]),\s*15\n(?: test_vmv_v_x_i32m4_tu_vl31_15 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_tu_m16(vint32m8_t dest, size_t vl)
{
  return vmv_v_x_i32m8_tu(dest, -16, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i32m8_tu_m16 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_tu_15(vint32m8_t dest, size_t vl)
{
  return vmv_v_x_i32m8_tu(dest, 15, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i32m8_tu_15 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_tu_vl31_m16(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, -16, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*-16\n(?: test_vmv_v_x_i32m8_tu_vl31_m16 )?} 1 } } */

vint32m8_t 
test_vmv_v_x_i32m8_tu_vl31_15(vint32m8_t dest)
{
  return vmv_v_x_i32m8_tu(dest, 15, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vmv\.v\.i).)*\s+vmv\.v\.i\s+(?:v[08]|v16|v24),\s*15\n(?: test_vmv_v_x_i32m8_tu_vl31_15 )?} 1 } } */
