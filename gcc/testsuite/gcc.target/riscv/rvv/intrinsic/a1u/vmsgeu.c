/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmsgeu_vv_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf8_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64_vl31(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsgeu_vv_u8mf8_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf4_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32_vl31(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsgeu_vv_u8mf4_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf2_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16_vl31(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsgeu_vv_u8mf2_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmsgeu_vv_u8m1_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8_vl31(vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsgeu_vv_u8m1_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmsgeu_vv_u8m2_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4_vl31(vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsgeu_vv_u8m2_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmsgeu_vv_u8m4_b2(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2_vl31(vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsgeu_vv_u8m4_b2(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1(vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmsgeu_vv_u8m8_b1(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1_vl31(vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsgeu_vv_u8m8_b1(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmsgeu_vv_u16mf4_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64_vl31(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsgeu_vv_u16mf4_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u16mf2_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32_vl31(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsgeu_vv_u16mf2_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmsgeu_vv_u16m1_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16_vl31(vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsgeu_vv_u16m1_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmsgeu_vv_u16m2_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8_vl31(vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsgeu_vv_u16m2_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmsgeu_vv_u16m4_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4_vl31(vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsgeu_vv_u16m4_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2(vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmsgeu_vv_u16m8_b2(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2_vl31(vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsgeu_vv_u16m8_b2(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u32mf2_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64_vl31(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsgeu_vv_u32mf2_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmsgeu_vv_u32m1_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32_vl31(vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsgeu_vv_u32m1_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmsgeu_vv_u32m2_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16_vl31(vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsgeu_vv_u32m2_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmsgeu_vv_u32m4_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8_vl31(vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsgeu_vv_u32m4_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4(vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmsgeu_vv_u32m8_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4_vl31(vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsgeu_vv_u32m8_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64(vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmsgeu_vv_u64m1_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64_vl31(vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsgeu_vv_u64m1_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32(vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmsgeu_vv_u64m2_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32_vl31(vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsgeu_vv_u64m2_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16(vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmsgeu_vv_u64m4_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16_vl31(vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsgeu_vv_u64m4_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8(vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmsgeu_vv_u64m8_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8_vl31(vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsgeu_vv_u64m8_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf8_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf8_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsgeu_vv_u8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf4_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf4_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsgeu_vv_u8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8mf2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsgeu_vv_u8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m1_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmsgeu_vv_u8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m1_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsgeu_vv_u8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m2_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmsgeu_vv_u8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m2_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsgeu_vv_u8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m4_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmsgeu_vv_u8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m4_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsgeu_vv_u8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8m8_b1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmsgeu_vv_u8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u8m8_b1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsgeu_vv_u8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmsgeu_vv_u16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsgeu_vv_u16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsgeu_vv_u16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmsgeu_vv_u16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsgeu_vv_u16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmsgeu_vv_u16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsgeu_vv_u16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmsgeu_vv_u16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsgeu_vv_u16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmsgeu_vv_u16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsgeu_vv_u16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmsgeu_vv_u32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsgeu_vv_u32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmsgeu_vv_u32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsgeu_vv_u32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmsgeu_vv_u32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsgeu_vv_u32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmsgeu_vv_u32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsgeu_vv_u32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmsgeu_vv_u32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsgeu_vv_u32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m1_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmsgeu_vv_u64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m1_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsgeu_vv_u64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmsgeu_vv_u64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsgeu_vv_u64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m4_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmsgeu_vv_u64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m4_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsgeu_vv_u64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u64m8_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmsgeu_vv_u64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vv_u64m8_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsgeu_vv_u64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vv_u8mf8_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsgeu_vv_u8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8mf4_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsgeu_vv_u8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8mf2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsgeu_vv_u8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m1_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsgeu_vv_u8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m2_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsgeu_vv_u8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m4_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsgeu_vv_u8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m8_b1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsgeu_vv_u8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsgeu_vv_u16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsgeu_vv_u16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsgeu_vv_u16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsgeu_vv_u16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsgeu_vv_u16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsgeu_vv_u16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsgeu_vv_u32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsgeu_vv_u32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsgeu_vv_u32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsgeu_vv_u32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsgeu_vv_u32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m1_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsgeu_vv_u64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsgeu_vv_u64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m4_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsgeu_vv_u64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m8_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsgeu_vv_u64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u8mf8_b64_vl32(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsgeu_vv_u8mf8_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u8mf4_b32_vl32(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsgeu_vv_u8mf4_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u8mf2_b16_vl32(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsgeu_vv_u8mf2_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u8m1_b8_vl32(vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsgeu_vv_u8m1_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u8m2_b4_vl32(vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsgeu_vv_u8m2_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u8m4_b2_vl32(vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsgeu_vv_u8m4_b2(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vv_u8m8_b1_vl32(vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsgeu_vv_u8m8_b1(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u16mf4_b64_vl32(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsgeu_vv_u16mf4_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u16mf2_b32_vl32(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsgeu_vv_u16mf2_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u16m1_b16_vl32(vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsgeu_vv_u16m1_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u16m2_b8_vl32(vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsgeu_vv_u16m2_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u16m4_b4_vl32(vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsgeu_vv_u16m4_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vv_u16m8_b2_vl32(vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsgeu_vv_u16m8_b2(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u32mf2_b64_vl32(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsgeu_vv_u32mf2_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u32m1_b32_vl32(vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsgeu_vv_u32m1_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u32m2_b16_vl32(vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsgeu_vv_u32m2_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u32m4_b8_vl32(vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsgeu_vv_u32m4_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vv_u32m8_b4_vl32(vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsgeu_vv_u32m8_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vv_u64m1_b64_vl32(vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsgeu_vv_u64m1_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vv_u64m2_b32_vl32(vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsgeu_vv_u64m2_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vv_u64m4_b16_vl32(vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsgeu_vv_u64m4_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vv_u64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vv_u64m8_b8_vl32(vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsgeu_vv_u64m8_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf8_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64_vl31(vuint8mf8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf8_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf4_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32_vl31(vuint8mf4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf4_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf2_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16_vl31(vuint8mf2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf2_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m1_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8_vl31(vuint8m1_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m1_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m2_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4_vl31(vuint8m2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m2_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m4_b2(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2_vl31(vuint8m4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m4_b2(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1(vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m8_b1(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1_vl31(vuint8m8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m8_b1(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16mf4_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64_vl31(vuint16mf4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf4_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16mf2_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32_vl31(vuint16mf2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf2_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m1_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16_vl31(vuint16m1_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m1_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m2_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8_vl31(vuint16m2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m2_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m4_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4_vl31(vuint16m4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m4_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2(vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m8_b2(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2_vl31(vuint16m8_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m8_b2(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32mf2_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64_vl31(vuint32mf2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32mf2_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m1_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32_vl31(vuint32m1_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m1_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m2_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16_vl31(vuint32m2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m2_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m4_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8_vl31(vuint32m4_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m4_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4(vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m8_b4(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4_vl31(vuint32m8_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m8_b4(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m1_b64:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64(vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m1_b64(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m1_b64_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64_vl31(vuint64m1_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m1_b64(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m2_b32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32(vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m2_b32(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m2_b32_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32_vl31(vuint64m2_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m2_b32(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m4_b16:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16(vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m4_b16(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m4_b16_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16_vl31(vuint64m4_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m4_b16(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m8_b8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8(vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m8_b8(op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m8_b8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8_vl31(vuint64m8_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m8_b8(op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf8_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf8_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf4_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf4_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8mf2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m1_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m1_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m2_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m2_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m4_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m4_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8m8_b1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmsgeu_vx_u8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u8m8_b1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmsgeu_vx_u16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmsgeu_vx_u32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m1_b64_m:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m1_b64_m_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m2_b32_m:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m2_b32_m_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m4_b16_m:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m4_b16_m_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u64m8_b8_m:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsgeu_vx_u64m8_b8_m_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsgeu_vx_u8mf8_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf4_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m1_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m2_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m4_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m8_b1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m1_b64_m_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m2_b32_m_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m4_b16_m_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m8_b8_m_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u8mf8_b64_vl32(vuint8mf8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf8_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u8mf4_b32_vl32(vuint8mf4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf4_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u8mf2_b16_vl32(vuint8mf2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8mf2_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u8m1_b8_vl32(vuint8m1_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m1_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u8m2_b4_vl32(vuint8m2_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m2_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u8m4_b2_vl32(vuint8m4_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m4_b2(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsgeu_vx_u8m8_b1_vl32(vuint8m8_t op1, uint8_t op2)
{
  return vmsgeu_vx_u8m8_b1(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u16mf4_b64_vl32(vuint16mf4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf4_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u16mf2_b32_vl32(vuint16mf2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16mf2_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u16m1_b16_vl32(vuint16m1_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m1_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u16m2_b8_vl32(vuint16m2_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m2_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u16m4_b4_vl32(vuint16m4_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m4_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsgeu_vx_u16m8_b2_vl32(vuint16m8_t op1, uint16_t op2)
{
  return vmsgeu_vx_u16m8_b2(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u32mf2_b64_vl32(vuint32mf2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32mf2_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u32m1_b32_vl32(vuint32m1_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m1_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u32m2_b16_vl32(vuint32m2_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m2_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u32m4_b8_vl32(vuint32m4_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m4_b8(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsgeu_vx_u32m8_b4_vl32(vuint32m8_t op1, uint32_t op2)
{
  return vmsgeu_vx_u32m8_b4(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m1_b64_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsgeu_vx_u64m1_b64_vl32(vuint64m1_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m1_b64(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m2_b32_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsgeu_vx_u64m2_b32_vl32(vuint64m2_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m2_b32(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m4_b16_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsgeu_vx_u64m4_b16_vl32(vuint64m4_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m4_b16(op1, op2, 32);
}

/*
** test_vmsgeu_vx_u64m8_b8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsgeu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsgeu_vx_u64m8_b8_vl32(vuint64m8_t op1, uint64_t op2)
{
  return vmsgeu_vx_u64m8_b8(op1, op2, 32);
}

