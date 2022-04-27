/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmxnor_mm_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmxnor_mm_b64(vbool64_t op1, vbool64_t op2, size_t vl)
{
  return vmxnor_mm_b64(op1, op2, vl);
}

/*
** test_vmxnor_mm_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmxnor_mm_b64_vl31(vbool64_t op1, vbool64_t op2)
{
  return vmxnor_mm_b64(op1, op2, 31);
}

/*
** test_vmxnor_mm_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmxnor_mm_b32(vbool32_t op1, vbool32_t op2, size_t vl)
{
  return vmxnor_mm_b32(op1, op2, vl);
}

/*
** test_vmxnor_mm_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmxnor_mm_b32_vl31(vbool32_t op1, vbool32_t op2)
{
  return vmxnor_mm_b32(op1, op2, 31);
}

/*
** test_vmxnor_mm_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmxnor_mm_b16(vbool16_t op1, vbool16_t op2, size_t vl)
{
  return vmxnor_mm_b16(op1, op2, vl);
}

/*
** test_vmxnor_mm_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmxnor_mm_b16_vl31(vbool16_t op1, vbool16_t op2)
{
  return vmxnor_mm_b16(op1, op2, 31);
}

/*
** test_vmxnor_mm_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmxnor_mm_b8(vbool8_t op1, vbool8_t op2, size_t vl)
{
  return vmxnor_mm_b8(op1, op2, vl);
}

/*
** test_vmxnor_mm_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmxnor_mm_b8_vl31(vbool8_t op1, vbool8_t op2)
{
  return vmxnor_mm_b8(op1, op2, 31);
}

/*
** test_vmxnor_mm_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t 
test_vmxnor_mm_b4(vbool4_t op1, vbool4_t op2, size_t vl)
{
  return vmxnor_mm_b4(op1, op2, vl);
}

/*
** test_vmxnor_mm_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t 
test_vmxnor_mm_b4_vl31(vbool4_t op1, vbool4_t op2)
{
  return vmxnor_mm_b4(op1, op2, 31);
}

/*
** test_vmxnor_mm_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t 
test_vmxnor_mm_b2(vbool2_t op1, vbool2_t op2, size_t vl)
{
  return vmxnor_mm_b2(op1, op2, vl);
}

/*
** test_vmxnor_mm_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t 
test_vmxnor_mm_b2_vl31(vbool2_t op1, vbool2_t op2)
{
  return vmxnor_mm_b2(op1, op2, 31);
}

/*
** test_vmxnor_mm_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t 
test_vmxnor_mm_b1(vbool1_t op1, vbool1_t op2, size_t vl)
{
  return vmxnor_mm_b1(op1, op2, vl);
}

/*
** test_vmxnor_mm_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t 
test_vmxnor_mm_b1_vl31(vbool1_t op1, vbool1_t op2)
{
  return vmxnor_mm_b1(op1, op2, 31);
}

/*
** test_vmxnor_mm_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmxnor_mm_b64_vl32(vbool64_t op1, vbool64_t op2)
{
  return vmxnor_mm_b64(op1, op2, 32);
}

/*
** test_vmxnor_mm_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmxnor_mm_b32_vl32(vbool32_t op1, vbool32_t op2)
{
  return vmxnor_mm_b32(op1, op2, 32);
}

/*
** test_vmxnor_mm_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmxnor_mm_b16_vl32(vbool16_t op1, vbool16_t op2)
{
  return vmxnor_mm_b16(op1, op2, 32);
}

/*
** test_vmxnor_mm_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmxnor_mm_b8_vl32(vbool8_t op1, vbool8_t op2)
{
  return vmxnor_mm_b8(op1, op2, 32);
}

/*
** test_vmxnor_mm_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t 
test_vmxnor_mm_b4_vl32(vbool4_t op1, vbool4_t op2)
{
  return vmxnor_mm_b4(op1, op2, 32);
}

/*
** test_vmxnor_mm_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t 
test_vmxnor_mm_b2_vl32(vbool2_t op1, vbool2_t op2)
{
  return vmxnor_mm_b2(op1, op2, 32);
}

/*
** test_vmxnor_mm_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmxnor\.mm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t 
test_vmxnor_mm_b1_vl32(vbool1_t op1, vbool1_t op2)
{
  return vmxnor_mm_b1(op1, op2, 32);
}

