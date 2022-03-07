
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsbf_m_b64(vbool64_t op1, size_t vl)
{
  return vmsbf_m_b64(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b64 )?} 1 } } */

vbool64_t 
test_vmsbf_m_b64_vl31(vbool64_t op1)
{
  return vmsbf_m_b64(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b64_vl31 )?} 1 } } */

vbool32_t 
test_vmsbf_m_b32(vbool32_t op1, size_t vl)
{
  return vmsbf_m_b32(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b32 )?} 1 } } */

vbool32_t 
test_vmsbf_m_b32_vl31(vbool32_t op1)
{
  return vmsbf_m_b32(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b32_vl31 )?} 1 } } */

vbool16_t 
test_vmsbf_m_b16(vbool16_t op1, size_t vl)
{
  return vmsbf_m_b16(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b16 )?} 1 } } */

vbool16_t 
test_vmsbf_m_b16_vl31(vbool16_t op1)
{
  return vmsbf_m_b16(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b16_vl31 )?} 1 } } */

vbool8_t 
test_vmsbf_m_b8(vbool8_t op1, size_t vl)
{
  return vmsbf_m_b8(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b8 )?} 1 } } */

vbool8_t 
test_vmsbf_m_b8_vl31(vbool8_t op1)
{
  return vmsbf_m_b8(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b8_vl31 )?} 1 } } */

vbool4_t 
test_vmsbf_m_b4(vbool4_t op1, size_t vl)
{
  return vmsbf_m_b4(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b4 )?} 1 } } */

vbool4_t 
test_vmsbf_m_b4_vl31(vbool4_t op1)
{
  return vmsbf_m_b4(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b4_vl31 )?} 1 } } */

vbool2_t 
test_vmsbf_m_b2(vbool2_t op1, size_t vl)
{
  return vmsbf_m_b2(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b2 )?} 1 } } */

vbool2_t 
test_vmsbf_m_b2_vl31(vbool2_t op1)
{
  return vmsbf_m_b2(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b2_vl31 )?} 1 } } */

vbool1_t 
test_vmsbf_m_b1(vbool1_t op1, size_t vl)
{
  return vmsbf_m_b1(op1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b1 )?} 1 } } */

vbool1_t 
test_vmsbf_m_b1_vl31(vbool1_t op1)
{
  return vmsbf_m_b1(op1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vmsbf\.m).)*\s+vmsbf\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmsbf_m_b1_vl31 )?} 1 } } */
