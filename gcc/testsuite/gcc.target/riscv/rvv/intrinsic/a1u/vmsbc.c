/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmsbc_vvm_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i8mf8_b64(vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_i8mf8_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i8mf8_b64_vl31(vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i8mf8_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i8mf4_b32(vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_i8mf4_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i8mf4_b32_vl31(vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i8mf4_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i8mf2_b16(vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_i8mf2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i8mf2_b16_vl31(vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i8mf2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i8m1_b8(vint8m1_t op1, vint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_i8m1_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i8m1_b8_vl31(vint8m1_t op1, vint8m1_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i8m1_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i8m2_b4(vint8m2_t op1, vint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_i8m2_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i8m2_b4_vl31(vint8m2_t op1, vint8m2_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i8m2_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i8m4_b2(vint8m4_t op1, vint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vvm_i8m4_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i8m4_b2_vl31(vint8m4_t op1, vint8m4_t op2, vbool2_t op3)
{
  return vmsbc_vvm_i8m4_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_i8m8_b1(vint8m8_t op1, vint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vmsbc_vvm_i8m8_b1(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_i8m8_b1_vl31(vint8m8_t op1, vint8m8_t op2, vbool1_t op3)
{
  return vmsbc_vvm_i8m8_b1(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i16mf4_b64(vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_i16mf4_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i16mf4_b64_vl31(vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i16mf4_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i16mf2_b32(vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_i16mf2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i16mf2_b32_vl31(vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i16mf2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i16m1_b16(vint16m1_t op1, vint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_i16m1_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i16m1_b16_vl31(vint16m1_t op1, vint16m1_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i16m1_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i16m2_b8(vint16m2_t op1, vint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_i16m2_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i16m2_b8_vl31(vint16m2_t op1, vint16m2_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i16m2_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i16m4_b4(vint16m4_t op1, vint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_i16m4_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i16m4_b4_vl31(vint16m4_t op1, vint16m4_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i16m4_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i16m8_b2(vint16m8_t op1, vint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vvm_i16m8_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i16m8_b2_vl31(vint16m8_t op1, vint16m8_t op2, vbool2_t op3)
{
  return vmsbc_vvm_i16m8_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i32mf2_b64(vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_i32mf2_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i32mf2_b64_vl31(vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i32mf2_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i32m1_b32(vint32m1_t op1, vint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_i32m1_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i32m1_b32_vl31(vint32m1_t op1, vint32m1_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i32m1_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i32m2_b16(vint32m2_t op1, vint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_i32m2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i32m2_b16_vl31(vint32m2_t op1, vint32m2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i32m2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i32m4_b8(vint32m4_t op1, vint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_i32m4_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i32m4_b8_vl31(vint32m4_t op1, vint32m4_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i32m4_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i32m8_b4(vint32m8_t op1, vint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_i32m8_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i32m8_b4_vl31(vint32m8_t op1, vint32m8_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i32m8_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i64m1_b64(vint64m1_t op1, vint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_i64m1_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i64m1_b64_vl31(vint64m1_t op1, vint64m1_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i64m1_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i64m2_b32(vint64m2_t op1, vint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_i64m2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i64m2_b32_vl31(vint64m2_t op1, vint64m2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i64m2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i64m4_b16(vint64m4_t op1, vint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_i64m4_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i64m4_b16_vl31(vint64m4_t op1, vint64m4_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i64m4_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i64m8_b8(vint64m8_t op1, vint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_i64m8_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_i64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i64m8_b8_vl31(vint64m8_t op1, vint64m8_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i64m8_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i8mf8_b64_vl32(vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i8mf8_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i8mf4_b32_vl32(vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i8mf4_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i8mf2_b16_vl32(vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i8mf2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i8m1_b8_vl32(vint8m1_t op1, vint8m1_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i8m1_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i8m2_b4_vl32(vint8m2_t op1, vint8m2_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i8m2_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i8m4_b2_vl32(vint8m4_t op1, vint8m4_t op2, vbool2_t op3)
{
  return vmsbc_vvm_i8m4_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_i8m8_b1_vl32(vint8m8_t op1, vint8m8_t op2, vbool1_t op3)
{
  return vmsbc_vvm_i8m8_b1(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i16mf4_b64_vl32(vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i16mf4_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i16mf2_b32_vl32(vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i16mf2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i16m1_b16_vl32(vint16m1_t op1, vint16m1_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i16m1_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i16m2_b8_vl32(vint16m2_t op1, vint16m2_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i16m2_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i16m4_b4_vl32(vint16m4_t op1, vint16m4_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i16m4_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_i16m8_b2_vl32(vint16m8_t op1, vint16m8_t op2, vbool2_t op3)
{
  return vmsbc_vvm_i16m8_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i32mf2_b64_vl32(vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i32mf2_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i32m1_b32_vl32(vint32m1_t op1, vint32m1_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i32m1_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i32m2_b16_vl32(vint32m2_t op1, vint32m2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i32m2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i32m4_b8_vl32(vint32m4_t op1, vint32m4_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i32m4_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_i32m8_b4_vl32(vint32m8_t op1, vint32m8_t op2, vbool4_t op3)
{
  return vmsbc_vvm_i32m8_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_i64m1_b64_vl32(vint64m1_t op1, vint64m1_t op2, vbool64_t op3)
{
  return vmsbc_vvm_i64m1_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_i64m2_b32_vl32(vint64m2_t op1, vint64m2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_i64m2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_i64m4_b16_vl32(vint64m4_t op1, vint64m4_t op2, vbool16_t op3)
{
  return vmsbc_vvm_i64m4_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_i64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_i64m8_b8_vl32(vint64m8_t op1, vint64m8_t op2, vbool8_t op3)
{
  return vmsbc_vvm_i64m8_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u8mf8_b64(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_u8mf8_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u8mf8_b64_vl31(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u8mf8_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u8mf4_b32(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_u8mf4_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u8mf4_b32_vl31(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u8mf4_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u8mf2_b16(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_u8mf2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u8mf2_b16_vl31(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u8mf2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u8m1_b8(vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_u8m1_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u8m1_b8_vl31(vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u8m1_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u8m2_b4(vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_u8m2_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u8m2_b4_vl31(vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u8m2_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u8m4_b2(vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vvm_u8m4_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u8m4_b2_vl31(vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3)
{
  return vmsbc_vvm_u8m4_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_u8m8_b1(vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vmsbc_vvm_u8m8_b1(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_u8m8_b1_vl31(vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3)
{
  return vmsbc_vvm_u8m8_b1(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u16mf4_b64(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_u16mf4_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u16mf4_b64_vl31(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u16mf4_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u16mf2_b32(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_u16mf2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u16mf2_b32_vl31(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u16mf2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u16m1_b16(vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_u16m1_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u16m1_b16_vl31(vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u16m1_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u16m2_b8(vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_u16m2_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u16m2_b8_vl31(vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u16m2_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u16m4_b4(vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_u16m4_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u16m4_b4_vl31(vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u16m4_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u16m8_b2(vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vvm_u16m8_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u16m8_b2_vl31(vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3)
{
  return vmsbc_vvm_u16m8_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u32mf2_b64(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_u32mf2_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u32mf2_b64_vl31(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u32mf2_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u32m1_b32(vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_u32m1_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u32m1_b32_vl31(vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u32m1_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u32m2_b16(vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_u32m2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u32m2_b16_vl31(vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u32m2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u32m4_b8(vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_u32m4_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u32m4_b8_vl31(vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u32m4_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u32m8_b4(vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vvm_u32m8_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u32m8_b4_vl31(vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u32m8_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u64m1_b64(vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vvm_u64m1_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u64m1_b64_vl31(vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u64m1_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u64m2_b32(vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vvm_u64m2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u64m2_b32_vl31(vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u64m2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u64m4_b16(vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vvm_u64m4_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u64m4_b16_vl31(vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u64m4_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u64m8_b8(vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vvm_u64m8_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vvm_u64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u64m8_b8_vl31(vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u64m8_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vvm_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u8mf8_b64_vl32(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u8mf8_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u8mf4_b32_vl32(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u8mf4_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u8mf2_b16_vl32(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u8mf2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u8m1_b8_vl32(vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u8m1_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u8m2_b4_vl32(vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u8m2_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u8m4_b2_vl32(vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3)
{
  return vmsbc_vvm_u8m4_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vvm_u8m8_b1_vl32(vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3)
{
  return vmsbc_vvm_u8m8_b1(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u16mf4_b64_vl32(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u16mf4_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u16mf2_b32_vl32(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u16mf2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u16m1_b16_vl32(vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u16m1_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u16m2_b8_vl32(vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u16m2_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u16m4_b4_vl32(vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u16m4_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vvm_u16m8_b2_vl32(vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3)
{
  return vmsbc_vvm_u16m8_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u32mf2_b64_vl32(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u32mf2_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u32m1_b32_vl32(vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u32m1_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u32m2_b16_vl32(vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u32m2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u32m4_b8_vl32(vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u32m4_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vvm_u32m8_b4_vl32(vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3)
{
  return vmsbc_vvm_u32m8_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vvm_u64m1_b64_vl32(vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3)
{
  return vmsbc_vvm_u64m1_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vvm_u64m2_b32_vl32(vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3)
{
  return vmsbc_vvm_u64m2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vvm_u64m4_b16_vl32(vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3)
{
  return vmsbc_vvm_u64m4_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vvm_u64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vvm_u64m8_b8_vl32(vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3)
{
  return vmsbc_vvm_u64m8_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vv_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i8mf8_b64(vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmsbc_vv_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i8mf8_b64_vl31(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsbc_vv_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i8mf4_b32(vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmsbc_vv_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i8mf4_b32_vl31(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsbc_vv_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i8mf2_b16(vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmsbc_vv_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i8mf2_b16_vl31(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsbc_vv_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i8m1_b8(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmsbc_vv_i8m1_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i8m1_b8_vl31(vint8m1_t op1, vint8m1_t op2)
{
  return vmsbc_vv_i8m1_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i8m2_b4(vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmsbc_vv_i8m2_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i8m2_b4_vl31(vint8m2_t op1, vint8m2_t op2)
{
  return vmsbc_vv_i8m2_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i8m4_b2(vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmsbc_vv_i8m4_b2(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i8m4_b2_vl31(vint8m4_t op1, vint8m4_t op2)
{
  return vmsbc_vv_i8m4_b2(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_i8m8_b1(vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmsbc_vv_i8m8_b1(op1, op2, vl);
}

/*
** test_vmsbc_vv_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_i8m8_b1_vl31(vint8m8_t op1, vint8m8_t op2)
{
  return vmsbc_vv_i8m8_b1(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i16mf4_b64(vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmsbc_vv_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i16mf4_b64_vl31(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsbc_vv_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i16mf2_b32(vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmsbc_vv_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i16mf2_b32_vl31(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsbc_vv_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i16m1_b16(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmsbc_vv_i16m1_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i16m1_b16_vl31(vint16m1_t op1, vint16m1_t op2)
{
  return vmsbc_vv_i16m1_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i16m2_b8(vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmsbc_vv_i16m2_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i16m2_b8_vl31(vint16m2_t op1, vint16m2_t op2)
{
  return vmsbc_vv_i16m2_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i16m4_b4(vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmsbc_vv_i16m4_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i16m4_b4_vl31(vint16m4_t op1, vint16m4_t op2)
{
  return vmsbc_vv_i16m4_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i16m8_b2(vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmsbc_vv_i16m8_b2(op1, op2, vl);
}

/*
** test_vmsbc_vv_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i16m8_b2_vl31(vint16m8_t op1, vint16m8_t op2)
{
  return vmsbc_vv_i16m8_b2(op1, op2, 31);
}

/*
** test_vmsbc_vv_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i32mf2_b64(vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmsbc_vv_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i32mf2_b64_vl31(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsbc_vv_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i32m1_b32(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmsbc_vv_i32m1_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i32m1_b32_vl31(vint32m1_t op1, vint32m1_t op2)
{
  return vmsbc_vv_i32m1_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i32m2_b16(vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmsbc_vv_i32m2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i32m2_b16_vl31(vint32m2_t op1, vint32m2_t op2)
{
  return vmsbc_vv_i32m2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i32m4_b8(vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmsbc_vv_i32m4_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i32m4_b8_vl31(vint32m4_t op1, vint32m4_t op2)
{
  return vmsbc_vv_i32m4_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i32m8_b4(vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmsbc_vv_i32m8_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i32m8_b4_vl31(vint32m8_t op1, vint32m8_t op2)
{
  return vmsbc_vv_i32m8_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_i64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i64m1_b64(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmsbc_vv_i64m1_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_i64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i64m1_b64_vl31(vint64m1_t op1, vint64m1_t op2)
{
  return vmsbc_vv_i64m1_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_i64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i64m2_b32(vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmsbc_vv_i64m2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_i64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i64m2_b32_vl31(vint64m2_t op1, vint64m2_t op2)
{
  return vmsbc_vv_i64m2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_i64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i64m4_b16(vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmsbc_vv_i64m4_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_i64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i64m4_b16_vl31(vint64m4_t op1, vint64m4_t op2)
{
  return vmsbc_vv_i64m4_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_i64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i64m8_b8(vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmsbc_vv_i64m8_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_i64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i64m8_b8_vl31(vint64m8_t op1, vint64m8_t op2)
{
  return vmsbc_vv_i64m8_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i8mf8_b64_vl32(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsbc_vv_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i8mf4_b32_vl32(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsbc_vv_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i8mf2_b16_vl32(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsbc_vv_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i8m1_b8_vl32(vint8m1_t op1, vint8m1_t op2)
{
  return vmsbc_vv_i8m1_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i8m2_b4_vl32(vint8m2_t op1, vint8m2_t op2)
{
  return vmsbc_vv_i8m2_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i8m4_b2_vl32(vint8m4_t op1, vint8m4_t op2)
{
  return vmsbc_vv_i8m4_b2(op1, op2, 32);
}

/*
** test_vmsbc_vv_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_i8m8_b1_vl32(vint8m8_t op1, vint8m8_t op2)
{
  return vmsbc_vv_i8m8_b1(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i16mf4_b64_vl32(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsbc_vv_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i16mf2_b32_vl32(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsbc_vv_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i16m1_b16_vl32(vint16m1_t op1, vint16m1_t op2)
{
  return vmsbc_vv_i16m1_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i16m2_b8_vl32(vint16m2_t op1, vint16m2_t op2)
{
  return vmsbc_vv_i16m2_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i16m4_b4_vl32(vint16m4_t op1, vint16m4_t op2)
{
  return vmsbc_vv_i16m4_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_i16m8_b2_vl32(vint16m8_t op1, vint16m8_t op2)
{
  return vmsbc_vv_i16m8_b2(op1, op2, 32);
}

/*
** test_vmsbc_vv_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i32mf2_b64_vl32(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsbc_vv_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i32m1_b32_vl32(vint32m1_t op1, vint32m1_t op2)
{
  return vmsbc_vv_i32m1_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i32m2_b16_vl32(vint32m2_t op1, vint32m2_t op2)
{
  return vmsbc_vv_i32m2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i32m4_b8_vl32(vint32m4_t op1, vint32m4_t op2)
{
  return vmsbc_vv_i32m4_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_i32m8_b4_vl32(vint32m8_t op1, vint32m8_t op2)
{
  return vmsbc_vv_i32m8_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_i64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_i64m1_b64_vl32(vint64m1_t op1, vint64m1_t op2)
{
  return vmsbc_vv_i64m1_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_i64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_i64m2_b32_vl32(vint64m2_t op1, vint64m2_t op2)
{
  return vmsbc_vv_i64m2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_i64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_i64m4_b16_vl32(vint64m4_t op1, vint64m4_t op2)
{
  return vmsbc_vv_i64m4_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_i64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_i64m8_b8_vl32(vint64m8_t op1, vint64m8_t op2)
{
  return vmsbc_vv_i64m8_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u8mf8_b64(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vmsbc_vv_u8mf8_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u8mf8_b64_vl31(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsbc_vv_u8mf8_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u8mf4_b32(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vmsbc_vv_u8mf4_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u8mf4_b32_vl31(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsbc_vv_u8mf4_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u8mf2_b16(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vmsbc_vv_u8mf2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u8mf2_b16_vl31(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsbc_vv_u8mf2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u8m1_b8(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vmsbc_vv_u8m1_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u8m1_b8_vl31(vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsbc_vv_u8m1_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u8m2_b4(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vmsbc_vv_u8m2_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u8m2_b4_vl31(vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsbc_vv_u8m2_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u8m4_b2(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vmsbc_vv_u8m4_b2(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u8m4_b2_vl31(vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsbc_vv_u8m4_b2(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_u8m8_b1(vuint8m8_t op1, vuint8m8_t op2, size_t vl)
{
  return vmsbc_vv_u8m8_b1(op1, op2, vl);
}

/*
** test_vmsbc_vv_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_u8m8_b1_vl31(vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsbc_vv_u8m8_b1(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u16mf4_b64(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vmsbc_vv_u16mf4_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u16mf4_b64_vl31(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsbc_vv_u16mf4_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u16mf2_b32(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vmsbc_vv_u16mf2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u16mf2_b32_vl31(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsbc_vv_u16mf2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u16m1_b16(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vmsbc_vv_u16m1_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u16m1_b16_vl31(vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsbc_vv_u16m1_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u16m2_b8(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vmsbc_vv_u16m2_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u16m2_b8_vl31(vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsbc_vv_u16m2_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u16m4_b4(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vmsbc_vv_u16m4_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u16m4_b4_vl31(vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsbc_vv_u16m4_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u16m8_b2(vuint16m8_t op1, vuint16m8_t op2, size_t vl)
{
  return vmsbc_vv_u16m8_b2(op1, op2, vl);
}

/*
** test_vmsbc_vv_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u16m8_b2_vl31(vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsbc_vv_u16m8_b2(op1, op2, 31);
}

/*
** test_vmsbc_vv_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u32mf2_b64(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vmsbc_vv_u32mf2_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u32mf2_b64_vl31(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsbc_vv_u32mf2_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u32m1_b32(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vmsbc_vv_u32m1_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u32m1_b32_vl31(vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsbc_vv_u32m1_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u32m2_b16(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vmsbc_vv_u32m2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u32m2_b16_vl31(vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsbc_vv_u32m2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u32m4_b8(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vmsbc_vv_u32m4_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u32m4_b8_vl31(vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsbc_vv_u32m4_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u32m8_b4(vuint32m8_t op1, vuint32m8_t op2, size_t vl)
{
  return vmsbc_vv_u32m8_b4(op1, op2, vl);
}

/*
** test_vmsbc_vv_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u32m8_b4_vl31(vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsbc_vv_u32m8_b4(op1, op2, 31);
}

/*
** test_vmsbc_vv_u64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u64m1_b64(vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vmsbc_vv_u64m1_b64(op1, op2, vl);
}

/*
** test_vmsbc_vv_u64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u64m1_b64_vl31(vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsbc_vv_u64m1_b64(op1, op2, 31);
}

/*
** test_vmsbc_vv_u64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u64m2_b32(vuint64m2_t op1, vuint64m2_t op2, size_t vl)
{
  return vmsbc_vv_u64m2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vv_u64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u64m2_b32_vl31(vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsbc_vv_u64m2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vv_u64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u64m4_b16(vuint64m4_t op1, vuint64m4_t op2, size_t vl)
{
  return vmsbc_vv_u64m4_b16(op1, op2, vl);
}

/*
** test_vmsbc_vv_u64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u64m4_b16_vl31(vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsbc_vv_u64m4_b16(op1, op2, 31);
}

/*
** test_vmsbc_vv_u64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u64m8_b8(vuint64m8_t op1, vuint64m8_t op2, size_t vl)
{
  return vmsbc_vv_u64m8_b8(op1, op2, vl);
}

/*
** test_vmsbc_vv_u64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u64m8_b8_vl31(vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsbc_vv_u64m8_b8(op1, op2, 31);
}

/*
** test_vmsbc_vv_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u8mf8_b64_vl32(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vmsbc_vv_u8mf8_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u8mf4_b32_vl32(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vmsbc_vv_u8mf4_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u8mf2_b16_vl32(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vmsbc_vv_u8mf2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u8m1_b8_vl32(vuint8m1_t op1, vuint8m1_t op2)
{
  return vmsbc_vv_u8m1_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u8m2_b4_vl32(vuint8m2_t op1, vuint8m2_t op2)
{
  return vmsbc_vv_u8m2_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u8m4_b2_vl32(vuint8m4_t op1, vuint8m4_t op2)
{
  return vmsbc_vv_u8m4_b2(op1, op2, 32);
}

/*
** test_vmsbc_vv_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vv_u8m8_b1_vl32(vuint8m8_t op1, vuint8m8_t op2)
{
  return vmsbc_vv_u8m8_b1(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u16mf4_b64_vl32(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vmsbc_vv_u16mf4_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u16mf2_b32_vl32(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vmsbc_vv_u16mf2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u16m1_b16_vl32(vuint16m1_t op1, vuint16m1_t op2)
{
  return vmsbc_vv_u16m1_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u16m2_b8_vl32(vuint16m2_t op1, vuint16m2_t op2)
{
  return vmsbc_vv_u16m2_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u16m4_b4_vl32(vuint16m4_t op1, vuint16m4_t op2)
{
  return vmsbc_vv_u16m4_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vv_u16m8_b2_vl32(vuint16m8_t op1, vuint16m8_t op2)
{
  return vmsbc_vv_u16m8_b2(op1, op2, 32);
}

/*
** test_vmsbc_vv_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u32mf2_b64_vl32(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vmsbc_vv_u32mf2_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u32m1_b32_vl32(vuint32m1_t op1, vuint32m1_t op2)
{
  return vmsbc_vv_u32m1_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u32m2_b16_vl32(vuint32m2_t op1, vuint32m2_t op2)
{
  return vmsbc_vv_u32m2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u32m4_b8_vl32(vuint32m4_t op1, vuint32m4_t op2)
{
  return vmsbc_vv_u32m4_b8(op1, op2, 32);
}

/*
** test_vmsbc_vv_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vv_u32m8_b4_vl32(vuint32m8_t op1, vuint32m8_t op2)
{
  return vmsbc_vv_u32m8_b4(op1, op2, 32);
}

/*
** test_vmsbc_vv_u64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vv_u64m1_b64_vl32(vuint64m1_t op1, vuint64m1_t op2)
{
  return vmsbc_vv_u64m1_b64(op1, op2, 32);
}

/*
** test_vmsbc_vv_u64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vv_u64m2_b32_vl32(vuint64m2_t op1, vuint64m2_t op2)
{
  return vmsbc_vv_u64m2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vv_u64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vv_u64m4_b16_vl32(vuint64m4_t op1, vuint64m4_t op2)
{
  return vmsbc_vv_u64m4_b16(op1, op2, 32);
}

/*
** test_vmsbc_vv_u64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vv_u64m8_b8_vl32(vuint64m8_t op1, vuint64m8_t op2)
{
  return vmsbc_vv_u64m8_b8(op1, op2, 32);
}

/*
** test_vmsbc_vxm_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i8mf8_b64(vint8mf8_t op1, int8_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_i8mf8_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i8mf8_b64_vl31(vint8mf8_t op1, int8_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i8mf8_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i8mf4_b32(vint8mf4_t op1, int8_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_i8mf4_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i8mf4_b32_vl31(vint8mf4_t op1, int8_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i8mf4_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i8mf2_b16(vint8mf2_t op1, int8_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_i8mf2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i8mf2_b16_vl31(vint8mf2_t op1, int8_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i8mf2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i8m1_b8(vint8m1_t op1, int8_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_i8m1_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i8m1_b8_vl31(vint8m1_t op1, int8_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i8m1_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i8m2_b4(vint8m2_t op1, int8_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_i8m2_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i8m2_b4_vl31(vint8m2_t op1, int8_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i8m2_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i8m4_b2(vint8m4_t op1, int8_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vxm_i8m4_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i8m4_b2_vl31(vint8m4_t op1, int8_t op2, vbool2_t op3)
{
  return vmsbc_vxm_i8m4_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_i8m8_b1(vint8m8_t op1, int8_t op2, vbool1_t op3, size_t vl)
{
  return vmsbc_vxm_i8m8_b1(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_i8m8_b1_vl31(vint8m8_t op1, int8_t op2, vbool1_t op3)
{
  return vmsbc_vxm_i8m8_b1(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i16mf4_b64(vint16mf4_t op1, int16_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_i16mf4_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i16mf4_b64_vl31(vint16mf4_t op1, int16_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i16mf4_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i16mf2_b32(vint16mf2_t op1, int16_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_i16mf2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i16mf2_b32_vl31(vint16mf2_t op1, int16_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i16mf2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i16m1_b16(vint16m1_t op1, int16_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_i16m1_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i16m1_b16_vl31(vint16m1_t op1, int16_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i16m1_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i16m2_b8(vint16m2_t op1, int16_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_i16m2_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i16m2_b8_vl31(vint16m2_t op1, int16_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i16m2_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i16m4_b4(vint16m4_t op1, int16_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_i16m4_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i16m4_b4_vl31(vint16m4_t op1, int16_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i16m4_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i16m8_b2(vint16m8_t op1, int16_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vxm_i16m8_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i16m8_b2_vl31(vint16m8_t op1, int16_t op2, vbool2_t op3)
{
  return vmsbc_vxm_i16m8_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i32mf2_b64(vint32mf2_t op1, int32_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_i32mf2_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i32mf2_b64_vl31(vint32mf2_t op1, int32_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i32mf2_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i32m1_b32(vint32m1_t op1, int32_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_i32m1_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i32m1_b32_vl31(vint32m1_t op1, int32_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i32m1_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i32m2_b16(vint32m2_t op1, int32_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_i32m2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i32m2_b16_vl31(vint32m2_t op1, int32_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i32m2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i32m4_b8(vint32m4_t op1, int32_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_i32m4_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i32m4_b8_vl31(vint32m4_t op1, int32_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i32m4_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i32m8_b4(vint32m8_t op1, int32_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_i32m8_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i32m8_b4_vl31(vint32m8_t op1, int32_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i32m8_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i64m1_b64:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i64m1_b64(vint64m1_t op1, int64_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_i64m1_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i64m1_b64_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i64m1_b64_vl31(vint64m1_t op1, int64_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i64m1_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i64m2_b32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i64m2_b32(vint64m2_t op1, int64_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_i64m2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i64m2_b32_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i64m2_b32_vl31(vint64m2_t op1, int64_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i64m2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i64m4_b16:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i64m4_b16(vint64m4_t op1, int64_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_i64m4_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i64m4_b16_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i64m4_b16_vl31(vint64m4_t op1, int64_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i64m4_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i64m8_b8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i64m8_b8(vint64m8_t op1, int64_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_i64m8_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_i64m8_b8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i64m8_b8_vl31(vint64m8_t op1, int64_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i64m8_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i8mf8_b64_vl32(vint8mf8_t op1, int8_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i8mf8_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i8mf4_b32_vl32(vint8mf4_t op1, int8_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i8mf4_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i8mf2_b16_vl32(vint8mf2_t op1, int8_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i8mf2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i8m1_b8_vl32(vint8m1_t op1, int8_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i8m1_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i8m2_b4_vl32(vint8m2_t op1, int8_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i8m2_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i8m4_b2_vl32(vint8m4_t op1, int8_t op2, vbool2_t op3)
{
  return vmsbc_vxm_i8m4_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_i8m8_b1_vl32(vint8m8_t op1, int8_t op2, vbool1_t op3)
{
  return vmsbc_vxm_i8m8_b1(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i16mf4_b64_vl32(vint16mf4_t op1, int16_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i16mf4_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i16mf2_b32_vl32(vint16mf2_t op1, int16_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i16mf2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i16m1_b16_vl32(vint16m1_t op1, int16_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i16m1_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i16m2_b8_vl32(vint16m2_t op1, int16_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i16m2_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i16m4_b4_vl32(vint16m4_t op1, int16_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i16m4_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_i16m8_b2_vl32(vint16m8_t op1, int16_t op2, vbool2_t op3)
{
  return vmsbc_vxm_i16m8_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i32mf2_b64_vl32(vint32mf2_t op1, int32_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i32mf2_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i32m1_b32_vl32(vint32m1_t op1, int32_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i32m1_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i32m2_b16_vl32(vint32m2_t op1, int32_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i32m2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i32m4_b8_vl32(vint32m4_t op1, int32_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i32m4_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_i32m8_b4_vl32(vint32m8_t op1, int32_t op2, vbool4_t op3)
{
  return vmsbc_vxm_i32m8_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i64m1_b64_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_i64m1_b64_vl32(vint64m1_t op1, int64_t op2, vbool64_t op3)
{
  return vmsbc_vxm_i64m1_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i64m2_b32_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_i64m2_b32_vl32(vint64m2_t op1, int64_t op2, vbool32_t op3)
{
  return vmsbc_vxm_i64m2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i64m4_b16_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_i64m4_b16_vl32(vint64m4_t op1, int64_t op2, vbool16_t op3)
{
  return vmsbc_vxm_i64m4_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_i64m8_b8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_i64m8_b8_vl32(vint64m8_t op1, int64_t op2, vbool8_t op3)
{
  return vmsbc_vxm_i64m8_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u8mf8_b64(vuint8mf8_t op1, uint8_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_u8mf8_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u8mf8_b64_vl31(vuint8mf8_t op1, uint8_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u8mf8_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u8mf4_b32(vuint8mf4_t op1, uint8_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_u8mf4_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u8mf4_b32_vl31(vuint8mf4_t op1, uint8_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u8mf4_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u8mf2_b16(vuint8mf2_t op1, uint8_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_u8mf2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u8mf2_b16_vl31(vuint8mf2_t op1, uint8_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u8mf2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u8m1_b8(vuint8m1_t op1, uint8_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_u8m1_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u8m1_b8_vl31(vuint8m1_t op1, uint8_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u8m1_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u8m2_b4(vuint8m2_t op1, uint8_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_u8m2_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u8m2_b4_vl31(vuint8m2_t op1, uint8_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u8m2_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u8m4_b2(vuint8m4_t op1, uint8_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vxm_u8m4_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u8m4_b2_vl31(vuint8m4_t op1, uint8_t op2, vbool2_t op3)
{
  return vmsbc_vxm_u8m4_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_u8m8_b1(vuint8m8_t op1, uint8_t op2, vbool1_t op3, size_t vl)
{
  return vmsbc_vxm_u8m8_b1(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_u8m8_b1_vl31(vuint8m8_t op1, uint8_t op2, vbool1_t op3)
{
  return vmsbc_vxm_u8m8_b1(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u16mf4_b64(vuint16mf4_t op1, uint16_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_u16mf4_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u16mf4_b64_vl31(vuint16mf4_t op1, uint16_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u16mf4_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u16mf2_b32(vuint16mf2_t op1, uint16_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_u16mf2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u16mf2_b32_vl31(vuint16mf2_t op1, uint16_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u16mf2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u16m1_b16(vuint16m1_t op1, uint16_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_u16m1_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u16m1_b16_vl31(vuint16m1_t op1, uint16_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u16m1_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u16m2_b8(vuint16m2_t op1, uint16_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_u16m2_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u16m2_b8_vl31(vuint16m2_t op1, uint16_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u16m2_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u16m4_b4(vuint16m4_t op1, uint16_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_u16m4_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u16m4_b4_vl31(vuint16m4_t op1, uint16_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u16m4_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u16m8_b2(vuint16m8_t op1, uint16_t op2, vbool2_t op3, size_t vl)
{
  return vmsbc_vxm_u16m8_b2(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u16m8_b2_vl31(vuint16m8_t op1, uint16_t op2, vbool2_t op3)
{
  return vmsbc_vxm_u16m8_b2(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u32mf2_b64(vuint32mf2_t op1, uint32_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_u32mf2_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u32mf2_b64_vl31(vuint32mf2_t op1, uint32_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u32mf2_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u32m1_b32(vuint32m1_t op1, uint32_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_u32m1_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u32m1_b32_vl31(vuint32m1_t op1, uint32_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u32m1_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u32m2_b16(vuint32m2_t op1, uint32_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_u32m2_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u32m2_b16_vl31(vuint32m2_t op1, uint32_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u32m2_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u32m4_b8(vuint32m4_t op1, uint32_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_u32m4_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u32m4_b8_vl31(vuint32m4_t op1, uint32_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u32m4_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u32m8_b4(vuint32m8_t op1, uint32_t op2, vbool4_t op3, size_t vl)
{
  return vmsbc_vxm_u32m8_b4(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u32m8_b4_vl31(vuint32m8_t op1, uint32_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u32m8_b4(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u64m1_b64:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u64m1_b64(vuint64m1_t op1, uint64_t op2, vbool64_t op3, size_t vl)
{
  return vmsbc_vxm_u64m1_b64(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u64m1_b64_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u64m1_b64_vl31(vuint64m1_t op1, uint64_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u64m1_b64(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u64m2_b32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u64m2_b32(vuint64m2_t op1, uint64_t op2, vbool32_t op3, size_t vl)
{
  return vmsbc_vxm_u64m2_b32(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u64m2_b32_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u64m2_b32_vl31(vuint64m2_t op1, uint64_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u64m2_b32(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u64m4_b16:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u64m4_b16(vuint64m4_t op1, uint64_t op2, vbool16_t op3, size_t vl)
{
  return vmsbc_vxm_u64m4_b16(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u64m4_b16_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u64m4_b16_vl31(vuint64m4_t op1, uint64_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u64m4_b16(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u64m8_b8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u64m8_b8(vuint64m8_t op1, uint64_t op2, vbool8_t op3, size_t vl)
{
  return vmsbc_vxm_u64m8_b8(op1, op2, op3, vl);
}

/*
** test_vmsbc_vxm_u64m8_b8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u64m8_b8_vl31(vuint64m8_t op1, uint64_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u64m8_b8(op1, op2, op3, 31);
}

/*
** test_vmsbc_vxm_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u8mf8_b64_vl32(vuint8mf8_t op1, uint8_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u8mf8_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u8mf4_b32_vl32(vuint8mf4_t op1, uint8_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u8mf4_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u8mf2_b16_vl32(vuint8mf2_t op1, uint8_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u8mf2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u8m1_b8_vl32(vuint8m1_t op1, uint8_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u8m1_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u8m2_b4_vl32(vuint8m2_t op1, uint8_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u8m2_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u8m4_b2_vl32(vuint8m4_t op1, uint8_t op2, vbool2_t op3)
{
  return vmsbc_vxm_u8m4_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vxm_u8m8_b1_vl32(vuint8m8_t op1, uint8_t op2, vbool1_t op3)
{
  return vmsbc_vxm_u8m8_b1(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u16mf4_b64_vl32(vuint16mf4_t op1, uint16_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u16mf4_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u16mf2_b32_vl32(vuint16mf2_t op1, uint16_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u16mf2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u16m1_b16_vl32(vuint16m1_t op1, uint16_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u16m1_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u16m2_b8_vl32(vuint16m2_t op1, uint16_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u16m2_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u16m4_b4_vl32(vuint16m4_t op1, uint16_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u16m4_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vxm_u16m8_b2_vl32(vuint16m8_t op1, uint16_t op2, vbool2_t op3)
{
  return vmsbc_vxm_u16m8_b2(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u32mf2_b64_vl32(vuint32mf2_t op1, uint32_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u32mf2_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u32m1_b32_vl32(vuint32m1_t op1, uint32_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u32m1_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u32m2_b16_vl32(vuint32m2_t op1, uint32_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u32m2_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u32m4_b8_vl32(vuint32m4_t op1, uint32_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u32m4_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vxm_u32m8_b4_vl32(vuint32m8_t op1, uint32_t op2, vbool4_t op3)
{
  return vmsbc_vxm_u32m8_b4(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u64m1_b64_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vxm_u64m1_b64_vl32(vuint64m1_t op1, uint64_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u64m1_b64(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u64m2_b32_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vxm_u64m2_b32_vl32(vuint64m2_t op1, uint64_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u64m2_b32(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u64m4_b16_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vxm_u64m4_b16_vl32(vuint64m4_t op1, uint64_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u64m4_b16(op1, op2, op3, 32);
}

/*
** test_vmsbc_vxm_u64m8_b8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vxm_u64m8_b8_vl32(vuint64m8_t op1, uint64_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u64m8_b8(op1, op2, op3, 32);
}

/*
** test_vmsbc_vx_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i8mf8_b64(vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i8mf8_b64_vl31(vint8mf8_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i8mf4_b32(vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i8mf4_b32_vl31(vint8mf4_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i8mf2_b16(vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i8mf2_b16_vl31(vint8mf2_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i8m1_b8(vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8m1_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i8m1_b8_vl31(vint8m1_t op1, int8_t op2)
{
  return vmsbc_vx_i8m1_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i8m2_b4(vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8m2_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i8m2_b4_vl31(vint8m2_t op1, int8_t op2)
{
  return vmsbc_vx_i8m2_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i8m4_b2(vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8m4_b2(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i8m4_b2_vl31(vint8m4_t op1, int8_t op2)
{
  return vmsbc_vx_i8m4_b2(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_i8m8_b1(vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmsbc_vx_i8m8_b1(op1, op2, vl);
}

/*
** test_vmsbc_vx_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_i8m8_b1_vl31(vint8m8_t op1, int8_t op2)
{
  return vmsbc_vx_i8m8_b1(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i16mf4_b64(vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i16mf4_b64_vl31(vint16mf4_t op1, int16_t op2)
{
  return vmsbc_vx_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i16mf2_b32(vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i16mf2_b32_vl31(vint16mf2_t op1, int16_t op2)
{
  return vmsbc_vx_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i16m1_b16(vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16m1_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i16m1_b16_vl31(vint16m1_t op1, int16_t op2)
{
  return vmsbc_vx_i16m1_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i16m2_b8(vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16m2_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i16m2_b8_vl31(vint16m2_t op1, int16_t op2)
{
  return vmsbc_vx_i16m2_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i16m4_b4(vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16m4_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i16m4_b4_vl31(vint16m4_t op1, int16_t op2)
{
  return vmsbc_vx_i16m4_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i16m8_b2(vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmsbc_vx_i16m8_b2(op1, op2, vl);
}

/*
** test_vmsbc_vx_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i16m8_b2_vl31(vint16m8_t op1, int16_t op2)
{
  return vmsbc_vx_i16m8_b2(op1, op2, 31);
}

/*
** test_vmsbc_vx_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i32mf2_b64(vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmsbc_vx_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i32mf2_b64_vl31(vint32mf2_t op1, int32_t op2)
{
  return vmsbc_vx_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i32m1_b32(vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmsbc_vx_i32m1_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i32m1_b32_vl31(vint32m1_t op1, int32_t op2)
{
  return vmsbc_vx_i32m1_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i32m2_b16(vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmsbc_vx_i32m2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i32m2_b16_vl31(vint32m2_t op1, int32_t op2)
{
  return vmsbc_vx_i32m2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i32m4_b8(vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmsbc_vx_i32m4_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i32m4_b8_vl31(vint32m4_t op1, int32_t op2)
{
  return vmsbc_vx_i32m4_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i32m8_b4(vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmsbc_vx_i32m8_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i32m8_b4_vl31(vint32m8_t op1, int32_t op2)
{
  return vmsbc_vx_i32m8_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_i64m1_b64:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i64m1_b64(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmsbc_vx_i64m1_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_i64m1_b64_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i64m1_b64_vl31(vint64m1_t op1, int64_t op2)
{
  return vmsbc_vx_i64m1_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_i64m2_b32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i64m2_b32(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmsbc_vx_i64m2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_i64m2_b32_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i64m2_b32_vl31(vint64m2_t op1, int64_t op2)
{
  return vmsbc_vx_i64m2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_i64m4_b16:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i64m4_b16(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmsbc_vx_i64m4_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_i64m4_b16_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i64m4_b16_vl31(vint64m4_t op1, int64_t op2)
{
  return vmsbc_vx_i64m4_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_i64m8_b8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i64m8_b8(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmsbc_vx_i64m8_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_i64m8_b8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i64m8_b8_vl31(vint64m8_t op1, int64_t op2)
{
  return vmsbc_vx_i64m8_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i8mf8_b64_vl32(vint8mf8_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i8mf4_b32_vl32(vint8mf4_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i8mf2_b16_vl32(vint8mf2_t op1, int8_t op2)
{
  return vmsbc_vx_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i8m1_b8_vl32(vint8m1_t op1, int8_t op2)
{
  return vmsbc_vx_i8m1_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i8m2_b4_vl32(vint8m2_t op1, int8_t op2)
{
  return vmsbc_vx_i8m2_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i8m4_b2_vl32(vint8m4_t op1, int8_t op2)
{
  return vmsbc_vx_i8m4_b2(op1, op2, 32);
}

/*
** test_vmsbc_vx_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_i8m8_b1_vl32(vint8m8_t op1, int8_t op2)
{
  return vmsbc_vx_i8m8_b1(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i16mf4_b64_vl32(vint16mf4_t op1, int16_t op2)
{
  return vmsbc_vx_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i16mf2_b32_vl32(vint16mf2_t op1, int16_t op2)
{
  return vmsbc_vx_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i16m1_b16_vl32(vint16m1_t op1, int16_t op2)
{
  return vmsbc_vx_i16m1_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i16m2_b8_vl32(vint16m2_t op1, int16_t op2)
{
  return vmsbc_vx_i16m2_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i16m4_b4_vl32(vint16m4_t op1, int16_t op2)
{
  return vmsbc_vx_i16m4_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_i16m8_b2_vl32(vint16m8_t op1, int16_t op2)
{
  return vmsbc_vx_i16m8_b2(op1, op2, 32);
}

/*
** test_vmsbc_vx_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i32mf2_b64_vl32(vint32mf2_t op1, int32_t op2)
{
  return vmsbc_vx_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i32m1_b32_vl32(vint32m1_t op1, int32_t op2)
{
  return vmsbc_vx_i32m1_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i32m2_b16_vl32(vint32m2_t op1, int32_t op2)
{
  return vmsbc_vx_i32m2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i32m4_b8_vl32(vint32m4_t op1, int32_t op2)
{
  return vmsbc_vx_i32m4_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_i32m8_b4_vl32(vint32m8_t op1, int32_t op2)
{
  return vmsbc_vx_i32m8_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_i64m1_b64_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_i64m1_b64_vl32(vint64m1_t op1, int64_t op2)
{
  return vmsbc_vx_i64m1_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_i64m2_b32_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_i64m2_b32_vl32(vint64m2_t op1, int64_t op2)
{
  return vmsbc_vx_i64m2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_i64m4_b16_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_i64m4_b16_vl32(vint64m4_t op1, int64_t op2)
{
  return vmsbc_vx_i64m4_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_i64m8_b8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_i64m8_b8_vl32(vint64m8_t op1, int64_t op2)
{
  return vmsbc_vx_i64m8_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u8mf8_b64(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8mf8_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u8mf8_b64_vl31(vuint8mf8_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf8_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u8mf4_b32(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8mf4_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u8mf4_b32_vl31(vuint8mf4_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf4_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u8mf2_b16(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8mf2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u8mf2_b16_vl31(vuint8mf2_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u8m1_b8(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8m1_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u8m1_b8_vl31(vuint8m1_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m1_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u8m2_b4(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8m2_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u8m2_b4_vl31(vuint8m2_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m2_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u8m4_b2(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8m4_b2(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u8m4_b2_vl31(vuint8m4_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m4_b2(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_u8m8_b1(vuint8m8_t op1, uint8_t op2, size_t vl)
{
  return vmsbc_vx_u8m8_b1(op1, op2, vl);
}

/*
** test_vmsbc_vx_u8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_u8m8_b1_vl31(vuint8m8_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m8_b1(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u16mf4_b64(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16mf4_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u16mf4_b64_vl31(vuint16mf4_t op1, uint16_t op2)
{
  return vmsbc_vx_u16mf4_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u16mf2_b32(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16mf2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u16mf2_b32_vl31(vuint16mf2_t op1, uint16_t op2)
{
  return vmsbc_vx_u16mf2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u16m1_b16(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16m1_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u16m1_b16_vl31(vuint16m1_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m1_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u16m2_b8(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16m2_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u16m2_b8_vl31(vuint16m2_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m2_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u16m4_b4(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16m4_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u16m4_b4_vl31(vuint16m4_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m4_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_u16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u16m8_b2(vuint16m8_t op1, uint16_t op2, size_t vl)
{
  return vmsbc_vx_u16m8_b2(op1, op2, vl);
}

/*
** test_vmsbc_vx_u16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u16m8_b2_vl31(vuint16m8_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m8_b2(op1, op2, 31);
}

/*
** test_vmsbc_vx_u32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u32mf2_b64(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vmsbc_vx_u32mf2_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_u32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u32mf2_b64_vl31(vuint32mf2_t op1, uint32_t op2)
{
  return vmsbc_vx_u32mf2_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_u32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u32m1_b32(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vmsbc_vx_u32m1_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_u32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u32m1_b32_vl31(vuint32m1_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m1_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_u32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u32m2_b16(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vmsbc_vx_u32m2_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_u32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u32m2_b16_vl31(vuint32m2_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m2_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_u32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u32m4_b8(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vmsbc_vx_u32m4_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_u32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u32m4_b8_vl31(vuint32m4_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m4_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_u32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u32m8_b4(vuint32m8_t op1, uint32_t op2, size_t vl)
{
  return vmsbc_vx_u32m8_b4(op1, op2, vl);
}

/*
** test_vmsbc_vx_u32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u32m8_b4_vl31(vuint32m8_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m8_b4(op1, op2, 31);
}

/*
** test_vmsbc_vx_u64m1_b64:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u64m1_b64(vuint64m1_t op1, uint64_t op2, size_t vl)
{
  return vmsbc_vx_u64m1_b64(op1, op2, vl);
}

/*
** test_vmsbc_vx_u64m1_b64_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u64m1_b64_vl31(vuint64m1_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m1_b64(op1, op2, 31);
}

/*
** test_vmsbc_vx_u64m2_b32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u64m2_b32(vuint64m2_t op1, uint64_t op2, size_t vl)
{
  return vmsbc_vx_u64m2_b32(op1, op2, vl);
}

/*
** test_vmsbc_vx_u64m2_b32_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u64m2_b32_vl31(vuint64m2_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m2_b32(op1, op2, 31);
}

/*
** test_vmsbc_vx_u64m4_b16:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u64m4_b16(vuint64m4_t op1, uint64_t op2, size_t vl)
{
  return vmsbc_vx_u64m4_b16(op1, op2, vl);
}

/*
** test_vmsbc_vx_u64m4_b16_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u64m4_b16_vl31(vuint64m4_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m4_b16(op1, op2, 31);
}

/*
** test_vmsbc_vx_u64m8_b8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u64m8_b8(vuint64m8_t op1, uint64_t op2, size_t vl)
{
  return vmsbc_vx_u64m8_b8(op1, op2, vl);
}

/*
** test_vmsbc_vx_u64m8_b8_vl31:  { target riscv64-*-* }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u64m8_b8_vl31(vuint64m8_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m8_b8(op1, op2, 31);
}

/*
** test_vmsbc_vx_u8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u8mf8_b64_vl32(vuint8mf8_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf8_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u8mf4_b32_vl32(vuint8mf4_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf4_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u8mf2_b16_vl32(vuint8mf2_t op1, uint8_t op2)
{
  return vmsbc_vx_u8mf2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u8m1_b8_vl32(vuint8m1_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m1_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u8m2_b4_vl32(vuint8m2_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m2_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u8m4_b2_vl32(vuint8m4_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m4_b2(op1, op2, 32);
}

/*
** test_vmsbc_vx_u8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsbc_vx_u8m8_b1_vl32(vuint8m8_t op1, uint8_t op2)
{
  return vmsbc_vx_u8m8_b1(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u16mf4_b64_vl32(vuint16mf4_t op1, uint16_t op2)
{
  return vmsbc_vx_u16mf4_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u16mf2_b32_vl32(vuint16mf2_t op1, uint16_t op2)
{
  return vmsbc_vx_u16mf2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u16m1_b16_vl32(vuint16m1_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m1_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u16m2_b8_vl32(vuint16m2_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m2_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u16m4_b4_vl32(vuint16m4_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m4_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_u16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsbc_vx_u16m8_b2_vl32(vuint16m8_t op1, uint16_t op2)
{
  return vmsbc_vx_u16m8_b2(op1, op2, 32);
}

/*
** test_vmsbc_vx_u32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u32mf2_b64_vl32(vuint32mf2_t op1, uint32_t op2)
{
  return vmsbc_vx_u32mf2_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_u32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u32m1_b32_vl32(vuint32m1_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m1_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_u32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u32m2_b16_vl32(vuint32m2_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m2_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_u32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u32m4_b8_vl32(vuint32m4_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m4_b8(op1, op2, 32);
}

/*
** test_vmsbc_vx_u32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsbc_vx_u32m8_b4_vl32(vuint32m8_t op1, uint32_t op2)
{
  return vmsbc_vx_u32m8_b4(op1, op2, 32);
}

/*
** test_vmsbc_vx_u64m1_b64_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsbc_vx_u64m1_b64_vl32(vuint64m1_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m1_b64(op1, op2, 32);
}

/*
** test_vmsbc_vx_u64m2_b32_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsbc_vx_u64m2_b32_vl32(vuint64m2_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m2_b32(op1, op2, 32);
}

/*
** test_vmsbc_vx_u64m4_b16_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsbc_vx_u64m4_b16_vl32(vuint64m4_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m4_b16(op1, op2, 32);
}

/*
** test_vmsbc_vx_u64m8_b8_vl32:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsbc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsbc_vx_u64m8_b8_vl32(vuint64m8_t op1, uint64_t op2)
{
  return vmsbc_vx_u64m8_b8(op1, op2, 32);
}

